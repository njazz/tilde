// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UILink.h"

#include <QGraphicsProxyWidget>

namespace qtpd {
UILink::UILink()
{
    setSize(65, 20);

    initProperties();

    deselect();
    _clicked = false;

    _objectDataModel.setObjectSize(os_FixedHeight, 80, 20);

    resizeEvent();
}
}
