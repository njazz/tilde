// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef NewLine_H
#define NewLine_H

#include "UIItem.h"

#include <QPainter>

namespace qtpd {

////
/// \brief New patchcord dashed line
///
class NewPatchcord : public UIItem {
    bool _active;
    QPoint _start;
    QPoint _end;

public:
    NewPatchcord();

    ////
    /// \defgroup prop Properties
    /// @{

    void setActive(bool active) { _active = active; }
    bool active() { return _active; }
    void setStart(QPoint start) { _start = start; }
    void setEnd(QPoint end) { _end = end; }

    /** @}*/

    void paint(QPainter* painter, const QStyleOptionGraphicsItem*, QWidget*);
};
}
#endif // NewLine_H
