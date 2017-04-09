// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_SIZEBOXG_H
#define CM_SIZEBOXG_H

#include "UIItem.h"

#include <QDebug>
#include <QMouseEvent>
#include <QPainter>

#include <QObject>

#include <QGraphicsSceneMouseEvent>

namespace qtpd {

////
/// \brief SizeBox QGraphicsObject class
/// \details resize widget for all object boxes in the patch
///
class SizeBox : public UIItem {
    Q_OBJECT

private:
    int _prevX;
    int _prevY;

    t_objectSize* _objectSizeType;

public:
    explicit SizeBox(UIItem* parent = 0);

    void paint(QPainter* p, const QStyleOptionGraphicsItem*, QWidget*)
    {
        QBrush brush(bgColor());
        p->setBrush(brush);
        p->drawRect(boundingRect());

        p->setPen(QPen(QColor(128, 128, 128), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        p->drawRect(0, 0, boundingRect().width(), boundingRect().height());
    };

    ////
    /// \defgroup mouse Mouse
    /// @{
    void mousePressEvent(QGraphicsSceneMouseEvent* ev)
    {
        setCursor(QCursor(Qt::SizeHorCursor));

        ev->accept();

        _prevX = ev->pos().toPoint().x();
        _prevY = ev->pos().toPoint().y();
    };

    void mouseReleaseEvent(QGraphicsSceneMouseEvent* event)
    {
        setCursor(QCursor(Qt::ArrowCursor));

        event->accept();
    };

    void mouseMoveEvent(QGraphicsSceneMouseEvent* ev)
    {
        emit resizeBoxEvent(ev->pos().toPoint().x() - _prevX, ev->pos().toPoint().y() - _prevY);
    }
    /** @}*/

signals:

    void resizeBoxEvent(int dx, int dy);
};
}

#endif // CM_SIZEBOX_H
