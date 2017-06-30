// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIScript.h"

#include <QPushButton>

#include <QGraphicsProxyWidget>
#include <QPalette>

#include <QGraphicsScene>
#include <QGraphicsView>

namespace qtpd {

UIScript::UIScript()
{

    deselect();
    _clicked = false;

    QFont font = QFont(PREF_QSTRING("Font"), 11, 0, false);

    _editor = new UIScriptEditor();

    QGraphicsProxyWidget* proxy = new QGraphicsProxyWidget(this);
    proxy->setWidget(_editor);
    proxy->setPos(1, 1);

    // TODO move
    _scriptCommon = new UIScriptCommon();
    _scriptCommon->setEditor(_editor);

    initProperties();

    setBgColor(QColor(224, 240, 255));

    setSize(300, 200);

    _objectDataModel.setObjectSize(os_Free, 300, 200);

    resizeEvent();
}

void UIScript::editorChanged()
{

    // fix later

    //    QStringList list = getEditorData();

    //    if (!list.isEmpty()) {
    //        for (int i = 0; i < list.size(); i++) {
    //            QString str = list.at(i) + "\\n";
    //            list.replace(i, str);
    //        }

    //        properties()->set("Script", list);
    //    }

    //update();
}

UIObject* UIScript::createObj(QString data)
{
    UIScript* ret = new UIScript();

    ret->setObjectData(data);

    return ret;
}

UIObject* UIScript::createObject(QString, t_canvas*, QGraphicsView*) { return 0; }

void UIScript::initProperties()
{
    UIObject::initProperties();

    properties()->create("Script", "Data", "0.1", QStringList(""));
};

void UIScript::resizeEvent()
{
    _editor->setFixedSize(width() - 2, height() - 2);
}

void UIScript::paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*)
{
    p->setClipRect(option->exposedRect);

    QBrush brush(bgColor());
    p->setBrush(brush);
    p->drawRect(boundingRect());
    p->setBrush(QBrush());

    if (getEditMode() == em_Unlocked) {
        if (isSelected()) {
            p->setPen(QPen(QColor(0, 192, 255), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        } else if (_clicked) {
            p->setPen(QPen(QColor(0, 192, 255), 2, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
        } else {
            p->setPen(QPen(QColor(128, 128, 128), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        }

        p->drawRect(0, 0, width(), height());
    }

    //p->setPen(QPen(QColor(0, 0, 0), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
    //p->setFont(QFont(PREF_QSTRING("Font"), properties()->get("FontSize")->asFontSize(), 0, false));
    //p->drawText(2, 3, boundingRect().width() - 2, boundingRect().height() - 3, 0, "py " + properties()->get("ScriptFile")->asQString(), 0);
}

// ------------------------



//void UIScript::mousePressEvent(QGraphicsSceneMouseEvent* ev)
//{

//    if (getEditMode() != em_Unlocked) {
//        _editor->show();
//    }
//    if (getEditMode() == em_Unlocked) {
//        emit selectBox(this, ev);
//        dragOffset = ev->pos().toPoint();
//        ev->accept();
//    }

//    //context menu
//    if (ev->button() == Qt::RightButton) {

//        QPoint pos;

//        if (scene()
//            && !scene()->views().isEmpty()
//            && scene()->views().first()
//            && scene()->views().first()->viewport()) {

//            QGraphicsView* v = scene()->views().first();
//            pos = v->viewport()->mapToGlobal(ev->pos().toPoint());

//            // TODO
//            showPopupMenu(pos + this->pos().toPoint());
//            ev->accept();
//        }

//        return;
//    }
//}

//void UIScript::mouseReleaseEvent(QGraphicsSceneMouseEvent* ev)
//{
//    ev->accept();
//}

//void UIScript::mouseMoveEvent(QGraphicsSceneMouseEvent* event)
//{
//    if (event->buttons() & Qt::LeftButton) {
//        emit moveBox(this, event);
//    }
//    event->accept();

//    //todo move!
//    if (getEditMode() != em_Unlocked) {
//        setCursor(QCursor(Qt::PointingHandCursor));
//    } else {
//        setCursor(QCursor(Qt::ArrowCursor));
//    }
//}

// ----------------------

void UIScript::setPdMessage(QString message)
{
    setObjectData(message);

    setSize(300, 200);
}

void UIScript::sync()
{
    UIObject::sync();

    _editor->textEdit()->document()->setPlainText("");
    _editor->textEdit()->setContext(pyWrapper::inst().withPatchControllerServerObjectAndList(this->parentController(), serverObject(), &_scriptCommon->scriptData()->inputList));
}



void UIScript::updateUI(AtomList list)
{

    _scriptCommon->scriptData()->inputList = UIScriptCommon::AtomListToStringList(list);
    _scriptCommon->btnRun();
}
}
