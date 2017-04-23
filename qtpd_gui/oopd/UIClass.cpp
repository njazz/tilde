// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIClass.h"

namespace qtpd {

UIClass::UIClass() //UIObject* parent)
//: UIObject(parent)
{
    //setPdObjectName("ui.bang");

    setHeight(20);

    deselect(); // = false;

    setErrorBox(false);

    setSubpatchWindow(0);

    _objectDataModel.setObjectSize(os_FixedHeight, 40, 20);
}
}
