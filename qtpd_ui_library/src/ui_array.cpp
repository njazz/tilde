//
//  ui_bang.cpp
//
//
//  Created by Alex Nadzharov on 03/03/17.
//

#include <ceammc_factory.h>
#include <pdUpdate.hpp>

using namespace ceammc;

#include "ui_array.h"

class UIpdArray;
static void qtpd_update(UIpdArray* x)
{
    qtpdUpdate((long)x->owner(), AtomList(Atom(gensym("bang"))));
}

UIpdArray::UIpdArray(const PdArgs& a)
    : BaseUIObject(a)
{

    //createOutlet();
}

//void UIpdBang::onBang()
//{
//    bangTo(0);
//    qtpd_update(this);
//}

//void UIpdBang::onAny(t_symbol*, const AtomList&)
//{
//    bangTo(0);
//    qtpd_update(this);
//}

//void UIpdBang::onFloat(float)
//{
//    bangTo(0);
//    qtpd_update(this);
//}

extern "C" void setup_ui0x2earray()
{
    ObjectFactory<UIpdArray> obj("ui.array");
}
