// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef NewLine_H
#define NewLine_H

#include "UIItem.h"

#include <QPainter>

namespace qtpd {

class NewLine : public UIItem {
    bool _active;
    QPoint _start;
    QPoint _end;

public:
    NewLine();

    void setActive(bool active) { _active = active; }
    bool active() { return _active; }
    void setStart(QPoint start) { _start = start; }
    void setEnd(QPoint end) { _end = end; }

    void paint(QPainter* painter, const QStyleOptionGraphicsItem*, QWidget*)
    {
        if (_active) {

            painter->setPen(QPen(QColor(128, 128, 128), 1, Qt::DashLine, Qt::SquareCap, Qt::BevelJoin));
            painter->drawLine(_start.x(), _start.y(), _end.x(), _end.y());
        }
    }
};
}
#endif // NewLine_H
