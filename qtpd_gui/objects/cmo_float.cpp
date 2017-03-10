#include "cmo_float.h"

cmo_float::cmo_float(UIObject *parent) : UIObject(parent)
{
    //this->setMinimumWidth(30);
    this->setFixedSize(45,20);

    this->setMouseTracking(true);

    this->deselect();

    this->setMinimumWidth(45);

}
