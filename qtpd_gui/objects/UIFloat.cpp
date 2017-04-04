// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIFloat.h"

namespace qtpd {

UIFloat::UIFloat(UIObject* parent)
    : UIObject(parent)
{
    //setPdObjectName("ui.float");

    //setMinimumWidth(30);
    setFixedSize(35, 20);

    setMouseTracking(true);

    deselect();

    setMinimumBoxWidth(35);
    setMinimumBoxHeight(20);
}
}
