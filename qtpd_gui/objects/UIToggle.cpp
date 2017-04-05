// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIToggle.h"

namespace qtpd {

UIToggle::UIToggle()//UIObject* parent)
    //: UIObject(parent)
{
    //setPdObjectName("ui.toggle");

    setSize(20, 20);

    setMinimumBoxWidth(20);
    setMinimumBoxHeight(20);

    //setMouseTracking(true);

    deselect();
    _clicked = false;

//    QPalette Pal(palette());
//    Pal.setColor(QPalette::Background, QColor(240, 240, 240));
//    setAutoFillBackground(true);
//    setPalette(Pal);



    setObjectSizeMode(os_Square);

    _value = false;
}
}
