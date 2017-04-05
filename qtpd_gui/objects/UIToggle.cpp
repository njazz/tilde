// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIToggle.h"

namespace qtpd {

UIToggle::UIToggle()//UIObject* parent)
    //: UIObject(parent)
{
    //setPdObjectName("ui.toggle");

    setSize(20, 20);

    //setMouseTracking(true);

    deselect();
    _clicked = false;

//    QPalette Pal(palette());
//    Pal.setColor(QPalette::Background, QColor(240, 240, 240));
//    setAutoFillBackground(true);
//    setPalette(Pal);

    setWidth(20);
    setHeight(20);

    _value = false;
}
}
