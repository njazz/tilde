//
//  ui_script.cpp
//
//
//  Created by Alex Nadzharov on 24/03/17.
//
//

#include "m_pd.h"

#include "pdlib.hpp"

#include "../ceammc-lib/ceammc_atomlist.h"
#include <stdlib.h>

using namespace ceammc;

static t_class* ui_script_class;

typedef struct _ui_script {
    t_object x_obj;

    t_updateUI updateUI;
    void* uiobj;

    t_symbol* s;
    AtomList* msg;

    t_outlet* out1;

} t_ui_script;

// special
extern "C" void uiscript_set_updateUI(t_pd* x, void* obj, t_updateUI func)
{
    //weird fix, test that
    if (x) {
        ((t_ui_script*)x)->updateUI = func;
        ((t_ui_script*)x)->uiobj = obj;
    }
}

static void uiscript_set(t_ui_script* x, t_symbol* s, int argc, t_atom* argv)
{
    //post("uimsg set");

    AtomList list = AtomList(argc, argv);

    if (s == gensym("set"))
        if (list.size() == 0) {
            if (x->msg)
                delete x->msg;

            //one symbol or bang
            x->s = s;
            x->msg = new AtomList(0, 0);
        } else {
            if (x->msg)
                delete x->msg;

            if (list.at(0).isFloat()) {
                if (list.size() > 1) {
                    x->s = &s_list;
                    //list.remove(0);
                    x->msg = new AtomList(list);
                } else {
                    x->s = &s_float;
                    x->msg = new AtomList(list);
                }
            } else {
                x->s = list.at(0).asSymbol();
                //list.remove(0);
                x->msg = new AtomList(list);
            }

            if (x->updateUI)
                x->updateUI(x->uiobj, *x->msg); //x->msg
        }
    else {

        //variables

        //spaghetti time
        if (x->msg)
            if (x->msg->size() > 0) {

                AtomList outList = *x->msg;

                for (int i = 0; i < x->msg->size(); i++) {

                    std::string ch = x->msg->at(i).asString();
                    if (ch.size() > 1) {
                        if (ch.at(0) == '$') //first is \ (\$1)
                        {
                            //lol
                            char* vs = &ch.at(1);
                            int v = Atom(gensym(vs)).asInt();
                            if ((v > 0) && (v < list.size())) {
                                // at last
                                outList.at(i) = list.at(v - 1);
                            }
                        }
                    }
                }

                outlet_anything(x->out1, x->s, outList.size(), outList.toPdData());
            }
    }
}

static void uiscript_bang(t_ui_script* x) // t_symbol *s, int argc, t_atom* argv
{
    if (x->msg->size()) {

        //    x->msg->output(x->out1);
        outlet_anything(x->out1, x->s, x->msg->size(), x->msg->toPdData());
    }
}

static void* uiscript_new(t_symbol* s, int argc, t_atom* argv)
{
    t_ui_script* x = (t_ui_script*)pd_new(ui_script_class);

    x->s = s;

    x->msg = new AtomList(argc, argv);

    x->out1 = outlet_new((t_object*)x, &s_anything);

    return (void*)x;
}

static void uiscript_free(t_object* obj)
{
    t_ui_script* x = (t_ui_script*)obj;

    if (x->msg)
        delete x->msg;
    if (x->s)
        delete x->s;
}

//extern "C"
extern "C" void setup_ui0x2escript()
{
    // printf("ui.script init\n");
    // class_new()
    ui_script_class = class_new(gensym("ui.script"),
        (t_newmethod)(uiscript_new),
        (t_method)(0),
        sizeof(t_ui_script), 0, A_GIMME, 0);

    class_addmethod(ui_script_class, (t_method)uiscript_set, &s_anything, A_GIMME, 0);
    class_addmethod(ui_script_class, (t_method)uiscript_bang, &s_bang, A_NULL, 0);
}
