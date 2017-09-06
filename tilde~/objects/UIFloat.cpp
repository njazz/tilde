// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIFloat.h"

#include "PropertyList.h"

#include <QStyleOptionGraphicsItem>
#include "Preferences.h"
#include "UIObjectData.h"

#include "../../xpd-transition/xpd-headers.h"
#include "../../xpd/pd/cpd/cpd_list.h"

namespace tilde {

UIFloat::UIFloat()
{

    setSize(35, 20);
    objectData()->setObjectSize(os_FixedHeight, 30, 20);

    deselect();

    setWidth(35);
    setHeight(20);

    resizeEvent();

    fromQString("0");
}

UIObject* UIFloat::createObj(QString)
{
    UIFloat* ret = new UIFloat();

    return ret;
}

void UIFloat::initProperties()
{
    UIObject::initProperties();
    properties()->create("Value", "Preset", "0.1", 0.);
}

void UIFloat::paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*)
{
    p->setClipRect(option->exposedRect);

    QPolygon poly;
    poly << QPoint(0, 0) << QPoint(width() - 5, 0) << QPoint(width(), 5) << QPoint(width(), height()) << QPoint(0, height());

    p->setPen(QPen(QColor(220, 220, 220), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
    QPainterPath tmpPath;
    tmpPath.addPolygon(poly);
    QBrush br = QBrush(QColor(220, 220, 220), Qt::SolidPattern);
    p->fillPath(tmpPath, br);

    if (isSelected()) {
        p->setPen(QPen(QColor(0, 192, 255), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
    }

    else {
        p->setPen(QPen(QColor(128, 128, 128), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
    }

    p->drawPolygon(poly);

    QTextOption* op = new QTextOption;
    op->setAlignment(Qt::AlignLeft);
    p->setPen(QPen(QColor(0, 0, 0), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

    p->setFont(QFont(PREF_QSTRING("Font"), 11, 0, false));
    p->drawText(2, 3, width() - 2, height() - 3, 0, objectData()->toQString(), 0);
}

void UIFloat::autoResize()
{
    QFont myFont(PREF_QSTRING("Font"), 11);
    QFontMetrics fm(myFont);

    setWidth((int)fm.width(QString("00.00")) + 5); //todo
    if (width() < objectData()->minimumBoxWidth())
        setWidth(objectData()->minimumBoxWidth());
}

///////////////////

void UIFloat::objectPressEvent(QGraphicsSceneMouseEvent* ev)
{

    _startY = ev->pos().y();

    if ((getEditMode() == em_Unlocked)) {
        emit selectBox(this, ev);
        dragOffset = ev->pos().toPoint();
    }
}

void UIFloat::mouseReleaseEvent(QGraphicsSceneMouseEvent*)
{
}

void UIFloat::mouseMoveEvent(QGraphicsSceneMouseEvent* event)
{
    if ((event->buttons() & Qt::LeftButton) && (getEditMode() == em_Unlocked)) {
        emit moveBox(this, event);
    }

    if ((event->buttons() & Qt::LeftButton) && (getEditMode() != em_Unlocked)) {
        //todo fix
        //
        std::string str = std::to_string(::atof(toQString().toStdString().c_str()) - event->pos().y() + _startY);
        fromQString(str.c_str()); //- startY
        autoResize();
        _startY = event->pos().y();

        QString send = "set " + objectData()->toQString();

        emit signalSendMessage(this->serverObjectId(), send);
        emit signalSendMessage(this->serverObjectId(), QString("bang"));

        update();
    }

    event->ignore();

    //todo move!
    if (getEditMode() != em_Unlocked) {
        setCursor(QCursor(Qt::UpArrowCursor));
    } else {
        setCursor(QCursor(Qt::ArrowCursor));
    }
}

void UIFloat::updateUI(t_cpd_list* msg)
{

    if (cpd_list_size(msg) > 0) {
        t_cpd_atom* a = cpd_list_at(msg,0);
        t_cpd_float s = cpd_atom_get_float(a);
        QString q = QString::number(s);
        fromQString(q);

        emit signalCallRepaint();
    }

}

std::string UIFloat::asPdFileString()
{
    // THE fix
    std::string ret;

    ret = "#X obj ";
    ret += std::to_string(x()) + " " + std::to_string(y()) + " ";
    ret += "ui.float ";
    ret += ((toQString() == "") ? ((std::string) "") : (objectData()->toQString().toStdString() + " ")) + properties()->asPdFileString();

    return ret;
}

void UIFloat::sync()
{
    UIObject::sync();

    fromQString(QString::number(0));
}

}
