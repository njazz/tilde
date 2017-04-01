// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIDSP.h"

namespace qtpd {

UIDSP::UIDSP(UIObject* parent)
    : UIObject(parent)
{
    //setPdObjectName("ui.toggle");

    setFixedSize(20, 20);

    setMouseTracking(true);

    deselect();
    _clicked = false;

    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, QColor(240, 240, 240));
    setAutoFillBackground(true);
    setPalette(Pal);

    setMinimumBoxWidth(20);
    setMinimumBoxHeight(20);

    _value = false;
}
}
