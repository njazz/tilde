// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIClass.h"

namespace qtpd {

UIClass::UIClass(UIObject* parent)
    : UIObject(parent)
{
    //setPdObjectName("ui.bang");

    setFixedHeight(20);
    //setMinimumWidth(22);
    setMouseTracking(true);

    deselect(); // = false;

    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, QColor(255, 240, 220));
    setAutoFillBackground(true);
    setPalette(Pal);

    setErrorBox(false);

    setSubpatchWindow(0);

    setMinimumBoxWidth(40);
    setMinimumBoxHeight(20);

    setObjectSizeMode(os_FixedHeight);
}


}
