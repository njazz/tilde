#include "cmo_float.h"

namespace qtpd
{

UIFloat::UIFloat(UIObject *parent) : UIObject(parent)
{
    //this->setMinimumWidth(30);
    this->setFixedSize(45,20);

    this->setMouseTracking(true);

    this->deselect();

    this->setMinimumBoxWidth(45);

}

}
