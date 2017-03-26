// (c) 2017 Alex Nadzharov
// License: GPL3

#include "cm_patchcord.h"

namespace qtpd {
Patchcord::Patchcord(UIWidget* obj1, UIWidget* out1, UIWidget* obj2, UIWidget* in2)
{
    _obj1 = obj1;
    _out1 = out1;
    _obj2 = obj2;
    _in2 = in2;

    patchcordType_ = cm_pt_anything;

    mouseover = false;
    selected = false;
}
}
