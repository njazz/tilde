// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIBox.h"

namespace qtpd {
UIBox::UIBox(UIObjectItem* parent)
    : UIObjectItem(parent)
{
    //setPdObjectName("ui.bang");

    setHeight(20);
    //setMouseTracking(true);

    deselect(); // = false;

    setBgColor(QColor(240, 240, 240));

//    QPalette Pal(palette());
//    Pal.setColor(QPalette::Background, QColor(240, 240, 240));
//    setAutoFillBackground(true);
//    setPalette(Pal);


    setErrorBox(false);

    setSubpatchWindow(0);

    setMinimumBoxWidth(40);
    setMinimumBoxHeight(20);

    setObjectSizeMode(os_FixedHeight);
}


}
