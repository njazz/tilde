#include "baseUIClass.h"

BaseUIObject::BaseUIObject(const PdArgs& a)
    : BaseObject(a)
{

    //createOutlet();
}

void BaseUIObject::updateUI()
{
}

void forwardUIMessage(long ptr, AtomList* list)
{
    t_symbol* receiver = gensym("xpd_receiver");
    // add ptr to list
    pd_typedmess(receiver->s_thing, gensym("ptr"), list->size(), list->toPdData());

}
