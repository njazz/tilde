//
//  ui_toggle.cpp
//  
//
//  Created by Alex Nadzharov on 03/03/17.
//
//

#include "m_pd.h"

#include "pdlib.hpp"

#include "../ceammc-lib/ceammc_atomlist.h"
#include <stdlib.h>

using namespace ceammc;

static t_class* ui_toggle_class;


typedef struct _ui_toggle {
    t_object x_obj;
    t_symbol* s;

    AtomList* msg;

    t_outlet *out1;

    t_updateUI updateUI;
    void* uiobj;
    
} t_ui_toggle;

// special
extern "C" void uimsg_set_updateUI(t_pd* x, void* obj, t_updateUI func)
{
    ((t_ui_toggle*)x)->updateUI = func;
    ((t_ui_toggle*)x)->uiobj = obj;
}

static void uimsg_set(t_ui_toggle* x, t_symbol *s, int argc, t_atom* argv)
{
    //post("uimsg set");
    x->s = s;

    if (x->msg)
        delete x->msg;

    x->msg = new AtomList(argc,argv);

    //quick fix
    if (x->msg->size())
        if (x->msg->at(0).asSymbol() == gensym("bang"))
        {
            *x->msg = AtomList(0,0);
        }

    if(x->updateUI) x->updateUI(x->uiobj, *x->msg);  //x->msg

}

static void uimsg_bang(t_ui_toggle* x, t_symbol *s, int argc, t_atom* argv)
{
    if (x->msg->size())
        x->msg->output(x->out1);
    else
        outlet_bang(x->out1);
}

static void* uimsg_new(t_symbol *s, int argc, t_atom* argv)
{
    t_ui_toggle *x = (t_ui_toggle*)pd_new(ui_toggle_class);

    x->s = s;

    x->msg = new AtomList(argc,argv);

    x->out1 = outlet_new((t_object*)x, &s_anything);

    return (void*)x;
}

void uimsg_save(t_gobj *z, t_binbuf *b)
{
    t_ui_toggle* x = (t_ui_toggle*)z;

    binbuf_addv(b,"ss", gensym("#X"), gensym("obj"));
    binbuf_addv(b,"ff", (float)x->x_obj.te_xpix, (float)x->x_obj.te_ypix);
    binbuf_addv(b,"s", gensym("ui.msg"));
    binbuf_add(b, x->msg->size(), x->msg->toPdData() );
    binbuf_addv(b, ";");

}

static void uimsg_free(t_object* obj)
{

}

//extern "C"
extern "C" void setup_ui0x2etoggle()
{
    // printf("ui.msg init\n");
    // class_new()
    ui_toggle_class = class_new(gensym("ui.toggle"),
                             (t_newmethod)(uimsg_new),
                             (t_method)(0),
                             sizeof(t_ui_toggle), 0, A_GIMME, 0);
    
    class_addmethod(ui_toggle_class, (t_method)uimsg_set, &s_anything, A_GIMME, 0);
    class_addmethod(ui_toggle_class, (t_method)uimsg_bang, &s_bang, A_NULL, 0);

    class_setsavefn(ui_toggle_class, uimsg_save);
    
}


