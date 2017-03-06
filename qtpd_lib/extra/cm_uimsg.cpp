//
//  ui_msg.cpp
//  
//
//  Created by Alex Nadzharov on 03/03/17.
//
//

#include "m_pd.h"

//#include "../ceammc-lib/ceammc_atomlist.h"
//#include <stdlib.h>

//using namespace ceammc;

static t_class* ui_msg_class;

typedef struct _ui_msg {
    t_object x_obj;
    t_symbol* s;
    int message_c;
    t_atom* message;

    t_outlet *out1;
    
} t_ui_msg;

static void uimsg_set(t_ui_msg* x, t_symbol *s, int argc, t_atom* argv)
{
    //post("uimsg set");
    x->s = s;
    x->message = argv;
    x->message_c = argc;

}

static void uimsg_bang(t_ui_msg* x, t_symbol *s, int argc, t_atom* argv)
{
    //post ("uimsg anything");

    outlet_anything(x->out1, &s_list, x->message_c, x->message);

}

static void* uimsg_new(t_symbol *s, int argc, t_atom* argv)
{
    // printf("ui.msg new\n");
    t_ui_msg *x = (t_ui_msg*)pd_new(ui_msg_class);

    //printf("ui.msg new: %lu \n", (long)x);
    x->s = s;
    x->message = argv;
    x->message_c = argc;

    x->out1 = outlet_new((t_object*)x, &s_anything);

    return (void*)x;
}

void uimsg_save(t_gobj *z, t_binbuf *b)
{
    t_ui_msg* x = (t_ui_msg*)z;

    binbuf_addv(b,"ss", gensym("#X"), gensym("obj"));

    binbuf_addv(b,"ff", (float)x->x_obj.te_xpix, (float)x->x_obj.te_ypix);

    binbuf_addv(b,"s", gensym("ui.msg"));

    binbuf_add(b, x->message_c, x->message );
    binbuf_addv(b, ";");
}

static void uimsg_free(t_object* obj)
{

}



//extern "C"
extern "C" void setup_ui0x2emsg()
{
    // printf("ui.msg init\n");
    // class_new()
    ui_msg_class = class_new(gensym("ui.msg"),
                             (t_newmethod)(uimsg_new),
                             (t_method)(0),
                             sizeof(t_ui_msg), 0, A_GIMME, 0);
    
    class_addmethod(ui_msg_class, (t_method)uimsg_set, &s_anything, A_GIMME, 0);
    class_addmethod(ui_msg_class, (t_method)uimsg_bang, &s_bang, A_NULL, 0);

    class_setsavefn(ui_msg_class, uimsg_save);
    
}
