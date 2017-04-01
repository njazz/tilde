// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIDSP.h"

namespace qtpd {

UIDSP::UIDSP(UIObject* parent)
    : UIObject(parent)
{
    //setPdObjectName("ui.toggle");

    setFixedSize(40, 40);

    setMouseTracking(true);

    deselect();
    _clicked = false;

    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, QColor(240, 240, 240));
    setAutoFillBackground(true);
    setPalette(Pal);

    setMinimumBoxWidth(40);
    setMinimumBoxHeight(40);

    _value = false;
}
}
