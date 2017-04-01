// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIProperty.h"

namespace qtpd {
UIProperty::UIProperty(UIObject* parent)
    : UIObject(parent)
{

    setFixedHeight(20);
    setMouseTracking(true);

    deselect(); // = false;

    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, QColor(240, 240, 240));
    setAutoFillBackground(true);
    setPalette(Pal);

    setErrorBox(false);

    setSubpatchWindow(0);

    setMinimumBoxWidth(40);
    setMinimumBoxHeight(20);

    setObjectSizeMode(os_FixedHeight);
}


}
