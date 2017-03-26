// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIFloat.h"

namespace qtpd {

UIFloat::UIFloat(UIObject* parent)
    : UIObject(parent)
{
    //setPdObjectName("ui.float");

    //this->setMinimumWidth(30);
    this->setFixedSize(45, 20);

    this->setMouseTracking(true);

    this->deselect();

    this->setMinimumBoxWidth(45);
    this->setMinimumBoxHeight(20);
}
}