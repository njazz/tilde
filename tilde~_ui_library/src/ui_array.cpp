//
//  ui_bang.cpp
//
//
//  Created by Alex Nadzharov on 03/03/17.
//

#include <ceammc_factory.h>
//#include <pdUpdate.hpp>

using namespace ceammc;

#include "ui_array.h"

class UIpdArray;
static void qtpd_update(UIpdArray* x)
{
    // XPD-TODO
    // UIUpdate((long)x->owner(), AtomList(Atom(gensym("bang"))));
}

UIpdArray::UIpdArray(const PdArgs& a)
    : BaseUIObject(a)
{

    //createOutlet();
}

extern "C" void setup_ui0x2earray()
{
    ObjectFactory<UIpdArray> obj("ui.array");
}
