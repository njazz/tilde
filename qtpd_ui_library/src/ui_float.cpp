//
//  ui_float.cpp
//
//
//  Created by Alex Nadzharov on 13/03/17.
//
//

#include <ceammc_factory.h>
#include <pdUpdate.hpp>

#include "ui_float.h"

using namespace ceammc;

class UIpdFloat;

static void qtpd_update(UIpdFloat* x)
{
    qtpdUpdate((long)x->owner(), AtomList(Atom(x->value())));
}

float UIpdFloat::value()
{
    return _value;
}

UIpdFloat::UIpdFloat(const PdArgs& a)
    : BaseObject(a)
{
    _value = 0;
    createOutlet();
}

void UIpdFloat::onBang()
{
    floatTo(0, _value);
    qtpd_update(this);
}

void UIpdFloat::onFloat(float f)
{
    _value = f;
    UIpdFloat::onBang();
}

void UIpdFloat::onAny(t_symbol* s, const AtomList& list)
{
    if (s == gensym("set") && list.size() > 0) {
        _value = list.at(0).asFloat();
    }
}
extern "C" void setup_ui0x2efloat()
{
    ObjectFactory<UIpdFloat> obj("ui.float");
}
