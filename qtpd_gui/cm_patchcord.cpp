#include "cm_patchcord.h"

//cm_patchcord::cm_patchcord()
//{
//    this->patchcordType = cm_pt_anything;
//}


cm_patchcord::cm_patchcord(cm_widget *obj1, cm_widget *out1, cm_widget *obj2, cm_widget *in2)
{
    this->obj1 = obj1;
    this->out1 = out1;
    this->obj2 = obj2;
    this->in2   = in2;

    this->patchcordType = cm_pt_anything;

    this->mouseover = false;
    this->selected = false;

}

