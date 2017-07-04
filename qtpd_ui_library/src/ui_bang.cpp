//
//  ui_bang.cpp
//
//
//  Created by Alex Nadzharov on 03/03/17.
//

#include <ceammc_factory.h>
#include <pdUpdate.hpp>

using namespace ceammc;

#include "ui_bang.h"

class UIpdBang;

static void qtpd_update(UIpdBang* x)
{
    qtpdUpdate((long)x->owner(), AtomList(Atom(gensym("bang"))));
}

UIpdBang::UIpdBang(const PdArgs& a)
    : BaseObject(a)
{
    createOutlet();
}

void UIpdBang::onBang()
{
    bangTo(0);
    qtpd_update(this);
}

void UIpdBang::onAny(t_symbol*, const AtomList&)
{
    bangTo(0);
    qtpd_update(this);
}

void UIpdBang::onFloat(float)
{
    bangTo(0);
    qtpd_update(this);
}
extern "C" void setup_ui0x2ebang()
{
    ObjectFactory<UIpdBang> obj("ui.bang");
}
