// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIMessage.h"

#include <QGraphicsProxyWidget>
#include <QStyleOptionGraphicsItem>

#include "Preferences.h"

namespace qtpd {
UIMessage::UIMessage()
{

    deselect();
    _clicked = false;

    _editor = new QLineEdit(); //this

    _editor->setFixedSize(65 - 5, 18);
    _editor->move(1, 1);
    _editor->setFont(QFont(PREF_QSTRING("Font"), 11, 0, false));
    _editor->hide();
    _editor->setAttribute(Qt::WA_MacShowFocusRect, 0);
    _editor->setFrame(false);

    QGraphicsProxyWidget* proxy = new QGraphicsProxyWidget(this);
    proxy->setWidget(_editor);

    connect(_editor, &QLineEdit::editingFinished, this, &UIMessage::editorDone);
    connect(_editor, &QLineEdit::textEdited, this, &UIMessage::editorChanged);

    _objectDataModel.setObjectSize(os_FixedHeight, 40, 20);

    setSize(65, 20);

    resizeEvent();
}

// ------------------------------------

void UIMessage::editorDone()
{
    qDebug("editor done");

    setPdMessage(_editor->text());
    //todo

    _editor->hide();
}

void UIMessage::editorChanged()
{
    QFont myFont(PREF_QSTRING("Font"), 11);
    QFontMetrics fm(myFont);
    int new_w = fm.width(QString(_editor->text())) + 10;
    new_w = (new_w < 25) ? 25 : new_w;
    setWidth(new_w);
    _editor->setFixedWidth(width() - 5);
}

// ------------------------------------

UIObject* UIMessage::createObj(QString data)
{
    UIMessage* ret = new UIMessage();

    ret->setObjectData(data);

    return ret;
}

UIObject* UIMessage::createObject(QString, t_canvas*, QGraphicsView*)
{
    return 0;
}

void UIMessage::paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*)
{
    p->setClipRect(option->exposedRect);

    QPolygon poly;
    poly << QPoint(0, 0) << QPoint(width(), 0) << QPoint(width() - 4, 4) << QPoint(width() - 4, height() - 4) << QPoint(width(), height()) << QPoint(0, height());

    p->setPen(QPen(QColor(220, 220, 220), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
    QPainterPath tmpPath;
    tmpPath.addPolygon(poly);
    QBrush br = QBrush(QColor(220, 220, 220), Qt::SolidPattern);
    p->fillPath(tmpPath, br);

    if (isSelected()) {
        p->setPen(QPen(QColor(0, 192, 255), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
    } else if (_clicked) {
        p->setPen(QPen(QColor(0, 192, 255), 3, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    } else {
        p->setPen(QPen(QColor(128, 128, 128), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
    }

    p->drawPolygon(poly);

    QTextOption* op = new QTextOption;
    op->setAlignment(Qt::AlignLeft);
    p->setPen(QPen(QColor(0, 0, 0), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

    p->setFont(QFont(PREF_QSTRING("Font"), 11, 0, false));
    p->drawText(2, 3, width() - 2, height() - 3, 0, _objectDataModel.objectData(), 0);
}

void UIMessage::resizeEvent()
{
    UIObject::resizeEvent();
    _editor->setFixedWidth(width() - 5);
}

// ------------------------------------------------------

void UIMessage::objectPressEvent(QGraphicsSceneMouseEvent* ev)
{

    if ((getEditMode() == em_Unlocked) && isSelected()) {
        _editor->setText(QString(_objectDataModel.objectData()));
        _editor->show();
        _editor->setFocus();
        ev->accept();
        return;
    }

    if (!(getEditMode() == em_Unlocked)) {
        _clicked = true;
        update();

        //todo timer
    }

    //move
    if (getEditMode() != em_Unlocked) {
        if (!serverObject()) {
            qDebug("msg: bad pd object!");
        } else {

            emit sendMessage(this->serverObject(), QString("bang"));
        }
    }
}

//void UIMessage::mouseMoveEvent(QGraphicsSceneMouseEvent* event)
//{
//    if (event->buttons() & Qt::LeftButton) {
//        emit moveBox(this, event);
//    }
//    event->ignore();

//    //todo move!
//    if (getEditMode() != em_Unlocked) {
//        setCursor(QCursor(Qt::PointingHandCursor));
//    } else {
//        setCursor(QCursor(Qt::ArrowCursor));
//    }
//}

void UIMessage::objectReleaseEvent(QGraphicsSceneMouseEvent*)
{
    //if (!getEditMode())
    _clicked = false;
    update();
}

// ------------------------------------

void UIMessage::setObjectData(QString objData)
{
    // TODO fix!
    if (objData == "ui.msg") objData = "";

    _objectDataModel.setData(objData);
}

void UIMessage::setPdMessage(QString message)
{
    setObjectData(message);
    autoResize();

//    QFont myFont(PREF_QSTRING("Font"), 11);
//    QFontMetrics fm(myFont);
//    int new_w = fm.width(QString(_objectDataModel.objectData())) + 10;
//    new_w = (new_w < 25) ? 25 : new_w;
//    setWidth(new_w);

    //temporary
    //move

    if (getEditMode() == em_Unlocked) {
        if (!serverObject()) {
            qDebug("msg: bad pd object!");
        } else {

            QString msg = ("set " + _objectDataModel.objectData());
            //serverObject()->message(msg);

            emit sendMessage(this->serverObject(), msg);
            qDebug() << "sync";
        }
    }

    resizeEvent();
}

void UIMessage::updateUI(AtomList list)
{
    std::string obj_data;
    for (size_t i = 0; i < list.size(); i++) {
        // workaround
        if (AtomList(list.at(i)).toPdData()->a_type == A_COMMA)
            obj_data += ", ";
        else if (AtomList(list.at(i)).toPdData()->a_type == A_SEMI)
            obj_data += "; ";
        else if (AtomList(list.at(i)).toPdData()->a_type == A_DOLLAR)
            obj_data += "$" + QString::number(AtomList(list.at(i)).toPdData()->a_w.w_index).toStdString() + " ";
        else
            obj_data += list.at(i).asString() + " ";
    }

    setObjectData(obj_data.c_str());
    autoResize();

    //
    emit callRepaint();
}

std::string UIMessage::asPdFileString()
{
    // THE fix
    std::string ret;

    ret = "#X obj ";
    ret += std::to_string(int(x())) + " " + std::to_string(int(y())) + " ";
    ret += "ui.msg ";
    ret += ((objectData() == "") ? ((std::string) "") : (_objectDataModel.objectData().toStdString() + " ")) + properties()->asPdFileString();

    return ret;
}
}
