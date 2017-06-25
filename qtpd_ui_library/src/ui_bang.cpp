//
//  ui_bang.cpp
//
//
//  Created by Alex Nadzharov on 03/03/17.
//
//

extern "C" {
#include <m_pd.h>
}

#include <ceammc_atomlist.h>

#include <stdlib.h>

#include <pdUpdate.hpp>

#include <ceammc_factory.h>

using namespace ceammc;

#include "ui_bang.h"


class UIpdBang;
static void qtpd_update(UIpdBang* x)
{
    qtpdUpdate(AtomList(Atom((long)x)));
}

UIpdBang::UIpdBang(const PdArgs &a) : BaseObject(a)
{
    createOutlet();
}

void UIpdBang::onBang()
{
   bangTo(0);
   qtpd_update(this);
}

void UIpdBang::onAny(t_symbol *, const AtomList &)
{
    bangTo(0);
    qtpd_update(this);
}

//static t_class* ui_bang_class;

//typedef struct _ui_bang {
//    t_object x_obj;
//    t_outlet* out1;

//} t_ui_bang;

//static void qtpd_update(t_ui_bang* x)
//{
//    qtpdUpdate(AtomList(Atom((long)x)));
//}

//static void uibang_anything(t_ui_bang* x, t_symbol*, int, t_atom*)
//{
//    outlet_bang(x->out1);
//    qtpd_update(x);
//}

//static void uibang_bang(t_ui_bang* x)
//{
//    outlet_bang(x->out1);
//    qtpd_update(x);
//}

//static void* uibang_new(t_symbol*, int, t_atom*)
//{
//    t_ui_bang* x = (t_ui_bang*)pd_new(ui_bang_class);
//    x->out1 = outlet_new((t_object*)x, &s_anything);

//    return (void*)x;
//}

//static void uibang_free(t_ui_bang* obj)
//{
//    outlet_free(obj->out1);
//}

extern "C" void setup_ui0x2ebang()
{
    ObjectFactory<UIpdBang> obj("ui.bang");

//    ui_bang_class = class_new(gensym("ui.bang"),
//        (t_newmethod)(uibang_new),
//        (t_method)(uibang_free),
//        sizeof(t_ui_bang), 0, A_GIMME, 0);

//    class_addmethod(ui_bang_class, (t_method)uibang_anything, &s_anything, A_GIMME, 0);
//    class_addmethod(ui_bang_class, (t_method)uibang_bang, &s_bang, A_NULL, 0);
}
