// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIClass.h"

namespace tilde {

UIClass::UIClass()
{
    //setPdObjectName("pdclass");
    _dynamicClass = 0;

    setHeight(20);
    deselect();
    setErrorBox(false);
    //setSubpatchWindow(0);

    objectData()->setObjectSize(os_FixedHeight, 40, 20);
}
}
