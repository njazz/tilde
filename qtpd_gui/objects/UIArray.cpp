// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIArray.h"

namespace qtpd {
UIArray::UIArray()
{
    setHeight(20);

    deselect();

//    setBgColor(QColor(240, 240, 240));

    setErrorBox(false);

    setSubpatchWindow(0);

    setMinimumBoxWidth(40);
    setMinimumBoxHeight(20);

    initProperties();
}
}
