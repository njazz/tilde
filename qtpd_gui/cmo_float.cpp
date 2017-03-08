#include "cmo_float.h"

//cmo_float::cmo_float()
//{

//}

cmo_float::cmo_float(cm_object *parent) : cm_object(parent)
{
    this->setMinimumWidth(30);
    this->setFixedSize(45,20);

    this->setMouseTracking(true);

    this->deselect();

}
