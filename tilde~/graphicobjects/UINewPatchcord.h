// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef NewLine_H
#define NewLine_H

#include "UIItem.h"

namespace tilde {

////
/// \brief New patchcord - dashed line
class UINewPatchcord : public UIItem {
    bool _active;
    QPoint _start;
    QPoint _end;

    //todo
    int _patchcordType;

    bool _error;

public:
    UINewPatchcord();

    void setActive(bool active) { _active = active; }
    bool active() { return _active; }

    void setError(bool error) { _error = error; }
    bool error() { return _error; }

    void setPatchcordType(int type) { _patchcordType = type; }
    bool patchcordType() { return _patchcordType; }

    void setStart(QPoint start) { _start = start; }
    void setEnd(QPoint end) { _end = end; }

    void paint(QPainter* painter, const QStyleOptionGraphicsItem*, QWidget*);
};
}
#endif // NewLine_H
