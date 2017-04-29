// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIMatrix.h"

namespace qtpd {

UIMatrix::UIMatrix()
{
    //setPdObjectName("ui.matrix");

    setSize(20, 20);

    _objectDataModel.setObjectSize(os_FixedHeight, 100, 20);

    deselect();
    _clicked = false;

    initProperties();

    resizeEvent();
}
}
