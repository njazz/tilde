// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIMatrix.h"

namespace qtpd {

UIMatrix::UIMatrix()
{
    //setPdObjectName("ui.toggle");

    setSize(20, 20);

    //setMinimumBoxWidth(20);
    //setMinimumBoxHeight(20);

    _objectDataModel.setObjectSize(os_FixedHeight, 100,20);

    deselect();
    _clicked = false;

    //setObjectSizeMode(os_Square);

    _value = false;

    initProperties();

    resizeEvent();
}
}
