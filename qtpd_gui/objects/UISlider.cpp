// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UISlider.h"

namespace qtpd {

UISlider::UISlider()
{
    //setPdObjectName("ui.slider");

    setSize(20, 100);

    //setMinimumBoxWidth(20);
    //setMinimumBoxHeight(20);

    deselect();
    _clicked = false;

    //setObjectSizeMode(os_Free);

    _objectDataModel.setObjectSize(os_Free, 20, 20);

    _value = false;

    initProperties();

    resizeEvent();
}
}
