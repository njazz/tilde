// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIArray.h"

namespace qtpd {
UIArray::UIArray()
{
    setHeight(20);

    deselect();
    setErrorBox(false);
    setSubpatchWindow(0);

    _objectDataModel.setObjectSize(os_FixedHeight, 40, 20);
    initProperties();
    resizeEvent();
}
}
