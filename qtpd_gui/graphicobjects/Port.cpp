// (c) 2017 Alex Nadzharov
// License: GPL3

#include "Port.h"

namespace qtpd {
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

    QBrush brush(bgColor());
    p->setBrush(brush);
    p->drawRect(boundingRect());

    if (_portClass)
        p->fillRect(0, 0, boundingRect().width(), boundingRect().height(), QColor(128, 160, 192));

    p->setPen(QPen(QColor(128, 128, 128), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
    p->drawRect(0, 0, boundingRect().width(), boundingRect().height());

    if (hover()) {
        p->setPen(QPen(QColor(255, 128, 0), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        p->drawRect(0, 0, boundingRect().width(), boundingRect().height());
    }
}
}

//////////
