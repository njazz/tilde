//
//  ui_float.cpp
//
//
//  Created by Alex Nadzharov on 13/03/17.
//
//

#include "m_pd.h"

#include "pdlib.hpp"

#include "../ceammc-lib/ceammc_atomlist.h"
#include <stdlib.h>

using namespace ceammc;

static t_class* ui_float_class;

typedef struct _ui_float {
    t_object x_obj;

    t_updateUI updateUI;
    void* uiobj;

    float val;

    t_outlet* out1;

} t_ui_float;

// special
extern "C" void uifloat_set_updateUI(t_pd* x, void* obj, t_updateUI func)
{
    ((t_ui_float*)x)->updateUI = func;
    ((t_ui_float*)x)->uiobj = obj;
}

///////

static void uifloat_set(t_ui_float* x, t_symbol* s, int argc, t_atom* argv)
{
    if (argc)
        x->val = AtomList(argc, argv).at(0).asFloat();

    AtomList msg = AtomList(Atom(x->val));

    if (x->updateUI)
        x->updateUI(x->uiobj, msg);
}

static void uifloat_bang(t_ui_float* x)
{
    AtomList(Atom(x->val)).output(x->out1);
}

static void uifloat_float(t_ui_float* x, t_float f)
{
    x->val = f;

    AtomList msg = AtomList(Atom(x->val));

    msg.output(x->out1);

    if (x->updateUI)
        x->updateUI(x->uiobj, msg);
}

///////

static void* uifloat_new(t_symbol* s, int argc, t_atom* argv)
{
    t_ui_float* x = (t_ui_float*)pd_new(ui_float_class);

    x->val = 0;

    x->out1 = outlet_new((t_object*)x, &s_anything);

    return (void*)x;
}

static void uifloat_free(t_object* obj)
{
}

//extern "C"
extern "C" void setup_ui0x2efloat()
{
    ui_float_class = class_new(gensym("ui.float"),
        (t_newmethod)(uifloat_new),
        (t_method)(0),
        sizeof(t_ui_float), 0, A_GIMME, 0);

    class_addmethod(ui_float_class, (t_method)uifloat_set, &s_anything, A_GIMME, 0);
    class_addmethod(ui_float_class, (t_method)uifloat_bang, &s_bang, A_NULL, 0);

    class_addfloat(ui_float_class, (t_method)uifloat_float);
}
