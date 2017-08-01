// (c) 2017 Alex Nadzharov
// License: GPL3

#include "SizeBox.h"

#include <QCursor>
#include <QDebug>
#include <QGraphicsSceneMouseEvent>
#include <QMouseEvent>
#include <QObject>
#include <QPainter>

namespace tilde {

SizeBox::SizeBox(UIItem* parent)
    : UIItem(parent)
{
    _previousPosition = QPoint(0, 0);
    _objectSizeType = 0;

    setSize(QSize(7, 7));
    setBgColor(QColor(255, 255, 255));
}

void SizeBox::paint(QPainter* p, const QStyleOptionGraphicsItem*, QWidget*)
{
    QBrush brush(bgColor());
    p->setBrush(brush);
    p->drawRect(boundingRect());

    p->setPen(QPen(hover() ? QColor(255, 128, 0) : QColor(128, 128, 128), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
    p->drawRect(0, 0, boundingRect().width(), boundingRect().height());
};

void SizeBox::mousePressEvent(QGraphicsSceneMouseEvent* ev)
{
    setCursor(QCursor(Qt::SizeHorCursor));

    ev->accept();

    _previousPosition = ev->pos().toPoint();
};

void SizeBox::mouseReleaseEvent(QGraphicsSceneMouseEvent* event)
{
    setCursor(QCursor(Qt::ArrowCursor));

    event->accept();
};

void SizeBox::mouseMoveEvent(QGraphicsSceneMouseEvent* ev)
{
    emit resizeBoxEvent(ev->pos().toPoint().x() - _previousPosition.x(), ev->pos().toPoint().y() - _previousPosition.y());
}

void SizeBox::hoverEnterEvent(QGraphicsSceneHoverEvent* ev)
{
    setHover(true);
    update();
}

void SizeBox::hoverLeaveEvent(QGraphicsSceneHoverEvent* ev)
{
    setHover(false);
    update();
}
}
