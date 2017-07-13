// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIDSP.h"

#include <pdServer.hpp>

#include "CanvasView.h"

#include "UIObjectData.h"

namespace qtpd {

UIDSP::UIDSP()
{
    deselect();
    _clicked = false;

    _value = false;

    qDebug() << "uidsp";

    t_editMode* em = new t_editMode;
    *em = em_Locked;
    setEditModeRef(em);

    setWidth(40);
    setHeight(40);

    objectData()->setObjectSize(os_Fixed, 40, 40);

    _widget = new QGraphicsView();
    _widget->setScene(new QGraphicsScene(0, 0, 40, 40, _widget));
    _widget->scene()->addItem(this);
    _widget->setFixedSize(40, 40);
    _widget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    _widget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    _widget->setStyleSheet("QGraphicsView { border-style: none; }");
    _value = false;
};

UIObject* UIDSP::createObj(QString data)
{
    UIDSP* ret = new UIDSP();

    ret->fromQString(data);

    return ret;
}

QGraphicsView* UIDSP::widget()
{
    return _widget;
}

void UIDSP::initProperties()
{
    UIObject::initProperties();

    properties()->create("Value", "Preset", "0.1", 0.);
}

// ---------------

void UIDSP::paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*)
{
    p->setClipRect(option->exposedRect);

    QBrush brush(bgColor());
    p->setBrush(brush);
    p->drawRect(boundingRect());
    p->setBrush(QBrush());

    p->setRenderHint(QPainter::HighQualityAntialiasing, true);

    if (_value) {

        p->setPen(QPen(QColor(0, 192, 255), 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));

    } else {
        p->setPen(QPen(QColor(128, 128, 128), 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    }

    float posx = width() * .4;
    float posy = height() / 2;

    QFont font (PREF_QSTRING("Font"), 8, 0, false);
    font.setPixelSize(8);

    p->setFont(font);
    p->drawText(posx * .4, posy - 4, width() - 2, height() / 2 - 10, 0, "DSP", 0);

    p->drawArc(posx - 10, posy - 10, 20, 20, -60 * 16, 120 * 16);
    p->drawArc(posx - 17, posy - 17, 34, 34, -60 * 16, 120 * 16);

    if (isSelected()) {
        p->setPen(QPen(QColor(0, 192, 255), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
    } else {
        p->setPen(QPen(QColor(128, 128, 128), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
    }

    p->drawRect(0, 0, width(), height());
}

void UIDSP::objectPressEvent(QGraphicsSceneMouseEvent* ev)
{

    if (getEditMode() != em_Unlocked) {

        _value = !_value;

        ServerInstance::dspSwitch(_value);

        update();
    }
}
}
