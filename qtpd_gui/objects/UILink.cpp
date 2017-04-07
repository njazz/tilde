// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UILink.h"

#include <QGraphicsProxyWidget>

namespace qtpd {
UILink::UILink()
{
    //setPdObjectName("ui.link");

    setSize(65, 20);

    initProperties();

    deselect();
    _clicked = false;

    setMinimumBoxWidth(80);
    setMinimumBoxHeight(20);
}
}
