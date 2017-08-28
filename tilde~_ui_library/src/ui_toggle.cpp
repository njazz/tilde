//
//  ui_toggle.cpp
//
//
//  Created by Alex Nadzharov on 03/03/17.
//
//

#include <ceammc_factory.h>
//#include <pdUpdate.hpp>

#include "ui_toggle.h"

using namespace ceammc;

class UIpdToggle;

 void UIpdToggle::updateUI()
{
    // XPD-TODO
    // UIUpdate((long)owner(), AtomList(Atom(value())));
}

UIpdToggle::UIpdToggle(const PdArgs& a)
    : BaseUIObject(a)
{
    _value = 0;
    createOutlet();
}

void UIpdToggle::onBang()
{
    _value = float(!(_value > 0));
    floatTo(0, _value);
    updateUI();
}

void UIpdToggle::onFloat(float f)
{
    _value = f;
    floatTo(0, _value);

    // XPD-TODO
    // updateUI();
}

extern "C" void setup_ui0x2etoggle()
{
    ObjectFactory<UIpdToggle> obj("ui.toggle");
}

//static t_class* ui_toggle_class;

//typedef struct _ui_toggle {
//    t_object x_obj;

//    t_updateUI updateUI;
//    void* uiobj;

//    bool value;

//    t_outlet* out1;

//} t_ui_toggle;

//// special
//extern "C" void uitoggle_set_updateUI(t_pd* x, void* obj, t_updateUI func)
//{
//    ((t_ui_toggle*)x)->updateUI = func;
//    ((t_ui_toggle*)x)->uiobj = obj;
//}

/////////

//static void uitoggle_set(t_ui_toggle* x, t_symbol* s, int argc, t_atom* argv)
//{
//    AtomList list = AtomList(argc, argv);
//    if (list.size()) {
//        x->value = list.at(0).asFloat() > 0;
//        if (x->updateUI)
//            x->updateUI(x->uiobj, AtomList(float(x->value)));
//    }
//}

//static void uitoggle_bang(t_ui_toggle* x) // t_symbol *s, int argc, t_atom* argv
//{
//    x->value = !x->value;

//    AtomList(float(x->value)).output(x->out1);

//    if (x->updateUI)
//        x->updateUI(x->uiobj, AtomList(float(x->value)));
//}

/////////

//static void* uitoggle_new(t_symbol* s, int argc, t_atom* argv)
//{
//    t_ui_toggle* x = (t_ui_toggle*)pd_new(ui_toggle_class);

//    x->out1 = outlet_new((t_object*)x, &s_anything);
//    x->uiobj = 0;

//    return (void*)x;
//}

//static void uitoggle_free(t_object* obj)
//{
//}

////extern "C"
//extern "C" setup_ui0x2etoggle()
//{
//    ui_toggle_class = class_new(gensym("ui.toggle"),
//        (t_newmethod)(uitoggle_new),
//        (t_method)(0),
//        sizeof(t_ui_toggle), 0, A_GIMME, 0);

//    class_addmethod(ui_toggle_class, (t_method)uitoggle_set, &s_anything, A_GIMME, 0);
//    class_addmethod(ui_toggle_class, (t_method)uitoggle_bang, &s_bang, A_NULL, 0);
//}
