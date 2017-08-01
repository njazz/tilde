// (c) 2017 Alex Nadzharov
// License: GPL3

#include "Port.h"

namespace tilde {
Port::Port(UIItem* parent)
    : UIItem(parent)
{
    setSize(QSize(10, 3));

    _portType = portInlet;
    _portIndex = 0;
    _portClass = 0;
}

void Port::paint(QPainter* p, const QStyleOptionGraphicsItem*, QWidget*)
{
    p->setRenderHint(QPainter::HighQualityAntialiasing, true);

    p->drawRect(boundingRect());

    if (_portClass) {
        QBrush brush2(QColor(128, 160, 192));
        p->fillRect(0, 0, boundingRect().width(), boundingRect().height(), brush2);
    }

    p->setPen(QPen(QColor(128, 128, 128), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
    p->drawRect(0, 0, boundingRect().width(), boundingRect().height());

    if (hover()) {
        p->setPen(QPen(QColor(255, 128, 0), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        p->drawRect(0, 0, boundingRect().width(), boundingRect().height());
    }
}

// --------------------------

 void Port:: hoverEnterEvent(QGraphicsSceneHoverEvent* ev)
{
    if (getEditMode() == em_Unlocked) {
        emit mouseEntered(this, ev);
        setHover(true);
        update();
    }
}

 void Port:: hoverLeaveEvent(QGraphicsSceneHoverEvent* ev)
{
    if (getEditMode() == em_Unlocked) {
        emit mouseLeaved(this, ev);
        setHover(false);
        update();
    }
}

void Port:: mousePressEvent(QGraphicsSceneMouseEvent* ev)
{
    qDebug("click port");
    if (getEditMode() == em_Unlocked) {

        ev->accept();

        emit mousePressed(this, ev);
    }
}

void Port:: mouseReleaseEvent(QGraphicsSceneMouseEvent* ev)
{
    if (getEditMode() == em_Unlocked) {

        ev->accept();

        emit mouseReleased(this, ev);
    }
}

}

// -----------
