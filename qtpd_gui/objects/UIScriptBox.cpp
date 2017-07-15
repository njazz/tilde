// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIScriptBox.h"

#include <QPushButton>

#include <QGraphicsProxyWidget>
#include <QPalette>

#include <QGraphicsScene>
#include <QGraphicsView>

#include "PropertyList.h"

#include "Preferences.h"

#include "ceammc_atomlist.h"

namespace qtpd {

UIScriptBox::UIScriptBox()
{

    deselect();
    _clicked = false;

    QFont font = QFont(PREF_QSTRING("Font"), 11, 0, false);

    _editor = new UIScriptEditor();

    // TODO move
    _scriptCommon = new UIScriptCommon();
    _scriptCommon->setEditor(_editor);

    initProperties();

    setBgColor(QColor(224, 240, 255));

    setSize(60, 20);

    resizeEvent();
}

void UIScriptBox::editorChanged()
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

UIObject* UIScriptBox::createObj(QString data)
{
    UIScriptBox* ret = new UIScriptBox();

    ret->fromQString(data);

    return ret;
}
/*

{
    qDebug() << "ui.scriptbox";

    UIScriptBox* b = new UIScriptBox();
    //b->setCanvas((void*)parent);

    b->_editor->textEdit()->setContext(pyWrapper::inst().withCanvas((QObject*)parent));

    QString data1 = b->properties()->extractFromPdFileString(objectData);
    if (data1 != "") {
        QStringList l = data1.split(" ");
        if (l.size() > 1) {
            l.removeAt(0);
            b->properties()->get("ScriptFile")->set(l.at(0));
        }
    }

    b->setObjectData("ui.scriptbox");

    // the zoo lol
    //QString data = b->properties()->get("Script")->asQString().split("\\n ").join("\n");
    QString data = "";

    b->_editor->textEdit()->document()->setPlainText(data);

    // pd object
    std::string message = "ui.script";

    //temp
    t_object* new_obj = 0;
    if (!pdCanvas) {
        qDebug("bad pd canvas instance");
    } else {
        QPoint pos = QPoint(0, 0);
        new_obj = cmp_create_object(pdCanvas, message, pos.x(), pos.y());
    }

    if (new_obj) {
        qDebug("created ui.script %s | ptr %lu\n", message.c_str(), (long)new_obj);
        //b->setPdObject(new_obj);

        b->_editor->textEdit()->setContext(pyWrapper::inst().withCanvasPdObjectAndInput((UIObject*)parent, new_obj, &b->_scriptCommon->scriptData()->inputList));

        b->addInlet();
        b->addOutlet();

    } else {
        qDebug("Error: no such object %s", message.c_str());
    }

    b->resizeEvent();

    return (UIObject*)b;
};
*/
void UIScriptBox::initProperties()
{
    UIObject::initProperties();

    properties()->create("ScriptFile", "Data", "0.1", QString(""));
};

void UIScriptBox::paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*)
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

    p->setPen(QPen(QColor(0, 0, 0), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
    p->setFont(QFont(PREF_QSTRING("Font"), properties()->get("FontSize")->asFontSize(), 0, false));
    p->drawText(2, 3, boundingRect().width() - 2, boundingRect().height() - 3, 0, "py " + properties()->get("ScriptFile")->asQString(), 0);
}

// ------------------------

void UIScriptBox::objectPressEvent(QGraphicsSceneMouseEvent* event)
{
    if (getEditMode() != em_Unlocked) {
        _editor->show();
    }
}

// ----------------------

void UIScriptBox::setPdMessage(QString message)
{
    fromQString(message);

    setSize(300, 200);
}

void UIScriptBox::sync()
{
    UIObject::sync();

    _editor->textEdit()->document()->setPlainText("");
    _editor->textEdit()->setContext(pyWrapper::inst().newContextWithPatchControllerServerObjectAndList(this->parentController(), serverObject(), &_scriptCommon->scriptData()->inputList));
}

void UIScriptBox::updateUI(AtomList* list)
{

    _scriptCommon->scriptData()->inputList = UIScriptCommon::AtomListToStringList(*list);
    _scriptCommon->btnRun();
}
}
