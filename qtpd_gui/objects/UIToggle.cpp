// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIToggle.h"

namespace qtpd {

UIToggle::UIToggle()
{
    //setPdObjectName("ui.toggle");

    setSize(20, 20);
    _objectDataModel.setObjectSize(os_Square, 20, 20);

    deselect();
    _clicked = false;
    _value = false;

    resizeEvent();
}
}
