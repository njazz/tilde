// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIClass.h"

namespace qtpd {

UIClass::UIClass()
{
    //setPdObjectName("pdclass");
    _dynamicClass = 0;

    setHeight(20);
    deselect();
    setErrorBox(false);
    setSubpatchWindow(0);
    _objectDataModel.setObjectSize(os_FixedHeight, 40, 20);
}
}
