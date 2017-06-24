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

using namespace ceammc;

static t_class* ui_bang_class;

typedef struct _ui_bang {
    t_object x_obj;
    t_outlet* out1;

} t_ui_bang;

static void qtpd_update(t_ui_bang* x)
{
    if (gensym("qtpd_ui")->s_thing)
        pd_typedmess(gensym("qtpd_ui")->s_thing, gensym("update"), 1, AtomList(Atom((long)x)).toPdData());
}

static void uibang_anything(t_ui_bang* x, t_symbol*, int, t_atom*)
{
    outlet_bang(x->out1);
    qtpd_update(x);
}

static void uibang_bang(t_ui_bang* x)
{
    outlet_bang(x->out1);
}

static void* uibang_new(t_symbol*, int, t_atom*)
{
    t_ui_bang* x = (t_ui_bang*)pd_new(ui_bang_class);
    x->out1 = outlet_new((t_object*)x, &s_anything);

    return (void*)x;
}

static void uibang_free(t_ui_bang* obj)
{
    outlet_free(obj->out1);
}

extern "C" void setup_ui0x2ebang()
{
    ui_bang_class = class_new(gensym("ui.bang"),
        (t_newmethod)(uibang_new),
        (t_method)(uibang_free),
        sizeof(t_ui_bang), 0, A_GIMME, 0);

    class_addmethod(ui_bang_class, (t_method)uibang_anything, &s_anything, A_GIMME, 0);
    class_addmethod(ui_bang_class, (t_method)uibang_bang, &s_bang, A_NULL, 0);
}
