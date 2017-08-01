// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef SELECTIONRECT_H
#define SELECTIONRECT_H

#include "UIItem.h"

#include <QPainter>

class QPainter;

namespace tilde {

////
/// \brief selection rectangle QGraphicsObject (UIItem)
class SelectionRect : public UIItem {
    bool _active;
    QPoint _start;
    QPoint _end;

public:
    SelectionRect();

    void setActive(bool active) { _active = active; }
    void setStart(QPoint start) { _start = start; }
    void setEnd(QPoint end) { _end = end; }
    QPoint end() { return _end; }
    QPoint start() { return _start; }
    bool active() { return _active; }

    void paint(QPainter* painter, const QStyleOptionGraphicsItem*, QWidget*)
    {
        if (_active) {

            painter->setPen(QPen(QColor(128, 128, 128), 1, Qt::DashLine, Qt::SquareCap, Qt::BevelJoin));
            painter->drawRect(_start.x(), _start.y(), _end.x(), _end.y());
        }
    }
};
}
#endif // SELECTIONRECT_H
