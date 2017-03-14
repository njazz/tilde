#include "cm_patchcord.h"

//cm_patchcord::cm_patchcord()
//{
//    this->patchcordType = cm_pt_anything;
//}

namespace qtpd
{
Patchcord::Patchcord(UIWidget *obj1, UIWidget *out1, UIWidget *obj2, UIWidget *in2)
{
    this->obj1_ = obj1;
    this->out1_ = out1;
    this->obj2_ = obj2;
    this->in2_   = in2;

    this->patchcordType_ = cm_pt_anything;

    this->mouseover = false;
    this->selected = false;

}
}

