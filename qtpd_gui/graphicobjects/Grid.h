#ifndef GRID_H
#define GRID_H

#include "UIItem.h"

#include <QPainter>

namespace qtpd {

class Grid : public UIItem {
    int _gridStep;

public:
    Grid();

    void paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget* widget)
    {

        //if (_gridEnabled && (Canvas::getEditMode() != em_Locked)) {
        p->setPen(QPen(QColor(224, 224, 224), 1, Qt::DotLine, Qt::SquareCap, Qt::BevelJoin));
        for (int x = 0; x < width(); x += _gridStep) {
            p->drawLine(x, 0, x, height());
        }
        for (int y = 0; y < height(); y += _gridStep) {
            p->drawLine(0, y, width(), y);
        }
        //}
    };
};
}

#endif // GRID_H
