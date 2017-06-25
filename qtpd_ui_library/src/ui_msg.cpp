//
//  ui_msg.cpp
//
//
//  Created by Alex Nadzharov on 03/03/17.
//
//

#include <ceammc_factory.h>
#include <pdUpdate.hpp>

using namespace ceammc;

#include "ui_msg.h"

class UIpdMsg;

static void qtpd_update(UIpdMsg* x)
{
    qtpdUpdate((long)x->owner(), x->getMessage());
}

UIpdMsg::UIpdMsg(const PdArgs& a)
    : BaseObject(a)
{
    createOutlet();
}

//static t_class* ui_msg_class;

//typedef struct _ui_msg {
//    t_object x_obj;

//    t_updateUI updateUI;
//    void* uiobj;

//    //t_symbol* s;

//    AtomList* inputList; //symbol + list

//    AtomList* msg;

//    t_outlet* out1;

//} t_ui_msg;

//// special
//extern "C" void uimsg_set_updateUI(t_pd* x, void* obj, t_updateUI func)
//{
//    //weird fix, test that
//    if (x) {
//        ((t_ui_msg*)x)->updateUI = func;
//        ((t_ui_msg*)x)->uiobj = obj;
//    }
//}

//static void _uimsg_msg_set(t_ui_msg* x, AtomList list)
void UIpdMsg::_setMessage(AtomList list)
{
    _message.clear();
    if (list.size() != 0) {
        _message = list;
        qtpd_update(this);
    }
}

//static inline void _uimsg_processdollars(t_ui_msg* x, AtomList* input)

void UIpdMsg::_processDollars(AtomList list)
{
    for (int i = 0; i < list.size(); i++) {
        if (AtomList(list.at(i)).toPdData()->a_type == A_DOLLAR) {
            int idx = AtomList(list.at(i)).toPdData()->a_w.w_index;

            //if (_inputList)
            {
                if (idx < _inputList.size()) {
                    list.at(i) = _inputList.at(idx);
                } else {
                    list.at(i) = Atom(0.f);
                    post("argument index out of range");
                }
            }
        }
    }
}

//static void _uimsg_output(t_ui_msg* x) // t_symbol *s, int argc, t_atom* argv
//{

void UIpdMsg::_doOutput()
{
    if (_message.size()) {

        int start = 0;
        int end = 0;

        for (int i = 0; i < _message.size(); i++) {
            if ((AtomList(_message.at(i)).toPdData()->a_type == A_COMMA)
                || (i == (_message.size() - 1))) {
                end = i + (i == (_message.size() - 1));

                if ((_message.at(start).asSymbol() == gensym(";")) || (AtomList(_message.at(start)).toPdData()->a_type == A_SEMI)) {

                    start += 1;
                    if (!_message.at(start).isSymbol()) {
                        post("bad destination");

                    } else {
                        t_symbol* sym = _message.at(start).asSymbol();
                        start += 1;

                        if (sym->s_thing) {
                            AtomList l1 = _message.subList(start, end);
                            //_uimsg_processdollars(x, &l1);
                            _processDollars(l1);

                            t_object* obj = pd_checkobject(sym->s_thing);
                            if (obj) {
                                pd_forwardmess((t_pd*)obj, l1.size(), l1.toPdData());
                            } //else
                            //post("send error");
                            //post("sent");
                        } //else
                        //post("not sent");
                    }

                } else {
                    AtomList l1 = _message.subList(start, end);
                    _processDollars(l1);
                    //_uimsg_processdollars(x, &l1);

                    //
                    if (l1[0].isSymbol()) {
                        if (l1.size() > 1)
                            {
                                // TODO!
                                AtomList outList = l1;
                                outList.remove(0);
                                anyTo(0, l1[0].asSymbol(), outList);
                            }
                        else
                            //outlet_anything(x->out1, l1[0].asSymbol(), 0, 0);
                            symbolTo(0, l1[0].asSymbol());
                    } else {
                        //outlet_anything(x->out1, &s_list, l1.size(), l1.toPdData());
                        listTo(0, l1);
                    }
                    //                    l1.outputAsAny(x->out1);
                    //                    outlet_anything(x->out1, &s_list, l1.size(), l1.toPdData());
                }

                start = i + 1;
            }
        }
    }
}

void UIpdMsg::onBang()
{
    _inputList.clear();
    _doOutput();
}

//static void uimsg_anything(t_ui_msg* x, t_symbol* s, int argc, t_atom* argv)

void UIpdMsg::onAny(t_symbol* s, const AtomList& list0)
{
    AtomList list = list0;

    list.insert(0, AtomList(s));

    if (s == gensym("set")) {
        _setMessage(list0);
    } else {
        //variables

        _inputList.clear();
        _inputList = list0;
        _doOutput();
    }
}

AtomList  UIpdMsg::getMessage() {return _message;};

extern "C" void setup_ui0x2emsg()
{
    ObjectFactory<UIpdMsg> obj("ui.msg");
}

//static void* uimsg_new(t_symbol* s, int argc, t_atom* argv)
//{
//    t_ui_msg* x = (t_ui_msg*)pd_new(ui_msg_class);

//    //x->s = s;

//    x->msg = new AtomList(argc, argv);

//    x->uiobj = 0;

//    x->out1 = outlet_new((t_object*)x, &s_anything);

//    return (void*)x;
//}

//static void uimsg_free(t_object* obj)
//{
//    t_ui_msg* x = (t_ui_msg*)obj;

//    if (x->msg)
//        delete x->msg;
//    //    if (x->s)
//    //        delete x->s;
//}

////extern "C"
//extern "C" void setup_ui0x2emsg()
//{
//    ui_msg_class = class_new(gensym("ui.msg"),
//        (t_newmethod)(uimsg_new),
//        (t_method)(0),
//        sizeof(t_ui_msg), 0, A_GIMME, 0);

//    class_addmethod(ui_msg_class, (t_method)uimsg_anything, &s_anything, A_GIMME, 0);
//    class_addmethod(ui_msg_class, (t_method)uimsg_bang, &s_bang, A_NULL, 0);
//}
