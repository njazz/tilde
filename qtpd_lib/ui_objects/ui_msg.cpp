//
//  ui_msg.cpp
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

static t_class* ui_msg_class;

typedef struct _ui_msg {
    t_object x_obj;

    t_updateUI updateUI;
    void* uiobj;

    //t_symbol* s;

    AtomList* inputList; //symbol + list

    AtomList* msg;

    t_outlet* out1;

} t_ui_msg;

// special
extern "C" void uimsg_set_updateUI(t_pd* x, void* obj, t_updateUI func)
{
    //weird fix, test that
    if (x) {
        ((t_ui_msg*)x)->updateUI = func;
        ((t_ui_msg*)x)->uiobj = obj;
    }
}

static void _uimsg_msg_set(t_ui_msg* x, AtomList list)
{
    if (list.size() == 0) {
        if (x->msg)
            delete x->msg;

        //one symbol or bang
        x->msg = new AtomList(0, 0);
    } else {
        if (x->msg)
            delete x->msg;

        //        if (list.at(0).isFloat()) {
        //            if (list.size() > 1) {
        //                x->s = &s_list;
        //                x->msg = new AtomList(list);
        //            } else {
        //                x->s = &s_float;
        //                x->msg = new AtomList(list);
        //            }
        //        } else {
        //            x->s = list.at(0).asSymbol();
        //            //list.remove(0);
        //            x->msg = new AtomList(list);
        //        }
        x->msg = new AtomList(list);

        if (x->updateUI)
            x->updateUI(x->uiobj, *x->msg);
    }
}

static inline void _uimsg_processdollars(t_ui_msg* x, AtomList* input)
{
    //AtomList list;

    for (int i = 0; i < input->size(); i++) {
        if (AtomList(input->at(i)).toPdData()->a_type == A_DOLLAR) {
            int idx = AtomList(input->at(i)).toPdData()->a_w.w_index;

            if (x->inputList) {
                if (idx < x->inputList->size()) {
                    input->at(i) = x->inputList->at(idx);
                } else {
                    input->at(i) = Atom(0.f);
                    post("argument index out of range");
                }
            }
        }
    }
}

static void _uimsg_output(t_ui_msg* x) // t_symbol *s, int argc, t_atom* argv
{
    if (x->msg->size()) {

        int start = 0;
        int end = 0;

        for (int i = 0; i < x->msg->size(); i++) {
            if ((AtomList(x->msg->at(i)).toPdData()->a_type == A_COMMA)
                || (i == (x->msg->size() - 1))) {
                end = i + (i == (x->msg->size() - 1));

                if ((x->msg->at(start).asSymbol() == gensym(";")) || (AtomList(x->msg->at(start)).toPdData()->a_type == A_SEMI)) {

                    start += 1;
                    t_symbol* sym = x->msg->at(start).asSymbol();
                    start += 1;

                    if (sym->s_thing) {
                        AtomList l1 = x->msg->subList(start, end);
                        _uimsg_processdollars(x, &l1);

                        t_object* obj = pd_checkobject(sym->s_thing);
                        if (obj) {
                            pd_forwardmess((t_pd*)obj, l1.size(), l1.toPdData());
                        } //else
                        //post("send error");
                        //post("sent");
                    } //else
                    //post("not sent");

                } else {
                    AtomList l1 = x->msg->subList(start, end);
                    _uimsg_processdollars(x, &l1);

                    //
                    if (l1[0].isSymbol())
                    {
                        if (l1.size()>1)
                            outlet_anything(x->out1, l1[0].asSymbol(), static_cast<int>(l1.size() - 1), l1.toPdData() + 1);
                        else
                            outlet_anything(x->out1, l1[0].asSymbol(), 0, 0);
                    }
                    else
                    {
                        outlet_anything(x->out1, &s_list, l1.size(), l1.toPdData());
                    }
//                    l1.outputAsAny(x->out1);
//                    outlet_anything(x->out1, &s_list, l1.size(), l1.toPdData());
                }

                start = i + 1;
            }
        }
    }
}

static void uimsg_bang(t_ui_msg* x)
{
    x->inputList = new AtomList;

    _uimsg_output(x);
}

static void uimsg_anything(t_ui_msg* x, t_symbol* s, int argc, t_atom* argv)
{
    AtomList list = AtomList(s);
    list.append(AtomList(argc, argv));

    if (s == gensym("set")) {
        _uimsg_msg_set(x, AtomList(argc, argv));
    } else {
        //variables

        if (x->inputList)
            delete x->inputList;

        x->inputList = new AtomList(list);

        _uimsg_output(x);
    }
}

static void* uimsg_new(t_symbol* s, int argc, t_atom* argv)
{
    t_ui_msg* x = (t_ui_msg*)pd_new(ui_msg_class);

    //x->s = s;

    x->msg = new AtomList(argc, argv);

    x->out1 = outlet_new((t_object*)x, &s_anything);

    return (void*)x;
}

static void uimsg_free(t_object* obj)
{
    t_ui_msg* x = (t_ui_msg*)obj;

    if (x->msg)
        delete x->msg;
    //    if (x->s)
    //        delete x->s;
}

//extern "C"
extern "C" void setup_ui0x2emsg()
{
    ui_msg_class = class_new(gensym("ui.msg"),
        (t_newmethod)(uimsg_new),
        (t_method)(0),
        sizeof(t_ui_msg), 0, A_GIMME, 0);

    class_addmethod(ui_msg_class, (t_method)uimsg_anything, &s_anything, A_GIMME, 0);
    class_addmethod(ui_msg_class, (t_method)uimsg_bang, &s_bang, A_NULL, 0);
}
