// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIFloat.h"

namespace qtpd {

UIFloat::UIFloat()//UIObject* parent)
    //: UIObject(parent)
{
    //setPdObjectName("ui.float");

    //setMinimumWidth(30);
    setSize(35, 20);

    //setMouseTracking(true);

    deselect();

    setWidth(35);
    setHeight(20);
}
}
