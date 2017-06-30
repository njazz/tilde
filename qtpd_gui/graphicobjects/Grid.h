// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef GRID_H
#define GRID_H

#include "UIItem.h"



namespace qtpd {

////
/// \brief Grid for the canvas.
/// \deprecated this should be replaced with background paint style in Canvas for better performance
///
class Grid : public UIItem {
    int _gridStep;

public:
    Grid();

    void setGridStep(int gs) { _gridStep = gs; }
    int gridStep() { return _gridStep; }

    void paint(QPainter* p, const QStyleOptionGraphicsItem*, QWidget*);
};
}

#endif // GRID_H
