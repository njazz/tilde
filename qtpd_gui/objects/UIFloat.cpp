// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIFloat.h"

namespace qtpd {

UIFloat::UIFloat()
{

    setSize(35, 20);
    _objectDataModel.setObjectSize(os_FixedHeight, 30, 20);

    deselect();

    setWidth(35);
    setHeight(20);

    resizeEvent();
}
}
