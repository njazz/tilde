//
//  ui_script.cpp
//
//
//  Created by Alex Nadzharov on 24/03/17.
//
//

#include "m_pd.h"

//#include "pdlib.hpp"

#include "../ceammc-lib/ceammc_atomlist.h"
#include <stdlib.h>

using namespace ceammc;

static t_class* ui_script_class;

typedef struct _ui_script {
    t_object x_obj;

    t_updateUI updateUI;
    void* uiobj;

    t_outlet* out1;

} t_ui_script;

// special
//extern "C" void uiscript_set_updateUI(t_pd* x, void* obj, t_updateUI func)
//{
//    //weird fix, test that
//    if (x) {
//        ((t_ui_script*)x)->updateUI = func;
//        ((t_ui_script*)x)->uiobj = obj;
//    }
//}

static void uiscript_anything(t_ui_script* x, t_symbol* s, int argc, t_atom* argv)
{
    if (s == gensym("__output")) {
        AtomList l = AtomList(argc, argv);
        l.output(x->out1);
    } else {

        if (x->updateUI)
            x->updateUI (x->uiobj, AtomList(argc, argv));

    }
}

static void* uiscript_new(t_symbol* s, int argc, t_atom* argv)
{
    t_ui_script* x = (t_ui_script*)pd_new(ui_script_class);

    x->out1 = outlet_new((t_object*)x, &s_anything);

    x->uiobj = 0;

    return (void*)x;
}

static void uiscript_free(t_object* obj)
{
    // stub. free method is possibly useless here
    t_ui_script* x = (t_ui_script*)obj;
}

//extern "C"
extern "C" void setup_ui0x2escript()
{
    ui_script_class = class_new(gensym("ui.script"),
        (t_newmethod)(uiscript_new),
        (t_method)(0),
        sizeof(t_ui_script), 0, A_GIMME, 0);

    class_addmethod(ui_script_class, (t_method)uiscript_anything, &s_anything, A_GIMME, 0);
}
