// (c) 2017 Alex Nadzharov
// License: GPL3

#include "Patchcord.h"

namespace qtpd {
Patchcord::Patchcord(UIItem* obj1, UIItem* out1, UIItem* obj2, UIItem* in2)
{
    _obj1 = obj1;
    _out1 = out1;
    _obj2 = obj2;
    _in2 = in2;

    patchcordType_ = cm_pt_anything;

    setAcceptHoverEvents(true);
}
}
