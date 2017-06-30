#include "Grid.h"

#include <QPainter>

namespace qtpd {

Grid::Grid()
{
    _gridStep = 20;
}

void Grid::paint(QPainter* p, const QStyleOptionGraphicsItem*, QWidget*)
{
    p->setPen(QPen(QColor(224, 224, 224), 1, Qt::DotLine, Qt::SquareCap, Qt::BevelJoin));
    for (int x = 0; x < width(); x += _gridStep) {
        p->drawLine(x, 0, x, height());
    }
    for (int y = 0; y < height(); y += _gridStep) {
        p->drawLine(0, y, width(), y);
    }
};
}
