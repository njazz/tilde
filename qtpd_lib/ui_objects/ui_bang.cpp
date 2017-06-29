//
//  ui_bang.cpp
//
//
//  Created by Alex Nadzharov on 03/03/17.
//
//

extern "C"{
#include "m_pd.h"
}


#include "pdlib.hpp"

#include "../ceammc-lib/ceammc_atomlist.h"
#include <stdlib.h>

using namespace ceammc;

static t_class* ui_bang_class;

typedef struct _ui_bang {
    t_object x_obj;

    t_updateUI updateUI;
    void* uiobj;

    t_outlet* out1;

} t_ui_bang;

// special
extern void uibang_set_updateUI(t_pd* x, void* obj, t_updateUI func)
{
    ((t_ui_bang*)x)->updateUI = func;
    ((t_ui_bang*)x)->uiobj = obj;
}

static void uibang_anything(t_ui_bang* x, t_symbol* s, int argc, t_atom* argv)
{
    outlet_bang(x->out1);
    if (x->updateUI)
        x->updateUI(x->uiobj, AtomList((0.0f)));
}

static void uibang_bang(t_ui_bang* x)
{
    outlet_bang(x->out1);

    if (x->updateUI)
        x->updateUI(x->uiobj, AtomList(0.0f));
}

///////

static void* uibang_new(t_symbol* s, int argc, t_atom* argv)
{
    t_ui_bang* x = (t_ui_bang*)pd_new(ui_bang_class);

    x->out1 = outlet_new((t_object*)x, &s_anything);

    x->uiobj = 0;

    return (void*)x;
}

static void uibang_free(t_object* obj)
{
}

//extern "C"
extern "C" void setup_ui0x2ebang()
{
    ui_bang_class = class_new(gensym("ui.bang"),
        (t_newmethod)(uibang_new),
        (t_method)(0),
        sizeof(t_ui_bang), 0, A_GIMME, 0);

    class_addmethod(ui_bang_class, (t_method)uibang_anything, &s_anything, A_GIMME, 0);
    class_addmethod(ui_bang_class, (t_method)uibang_bang, &s_bang, A_NULL, 0);
}
