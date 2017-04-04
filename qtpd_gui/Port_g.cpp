// (c) 2017 Alex Nadzharov
// License: GPL3

#include "Port_g.h"

namespace qtpd {
PortItem::PortItem(UIItem* parent)
    : UIItem(parent)
{
    setSize(QSize(10,3));

//    setAttribute(Qt::WA_NoMousePropagation);



    _portType = portInlet;
    _portIndex = 0;




}
}

//////////
