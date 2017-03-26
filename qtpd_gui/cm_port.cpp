// (c) 2017 Alex Nadzharov
// License: GPL3

#include "cm_port.h"

namespace qtpd {
Port::Port(UIWidget* parent)
    : UIWidget(parent)
{
    setFixedSize(10, 3);

    setAttribute(Qt::WA_NoMousePropagation);

    _hover = false;

    portType = portInlet;
    portIndex = 0;

    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, QColor(250, 250, 250));
    setAutoFillBackground(true);
    setPalette(Pal);
}
}

//////////
