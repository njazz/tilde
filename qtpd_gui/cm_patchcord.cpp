#include "cm_patchcord.h"

//cm_patchcord::cm_patchcord()
//{
//    this->patchcordType = cm_pt_anything;
//}

namespace cm
{
Patchcord::Patchcord(UIWidget *obj1, UIWidget *out1, UIWidget *obj2, UIWidget *in2)
{
    this->obj1 = obj1;
    this->out1 = out1;
    this->obj2 = obj2;
    this->in2   = in2;

    this->patchcordType_ = cm_pt_anything;

    this->mouseover = false;
    this->selected = false;

}
}

