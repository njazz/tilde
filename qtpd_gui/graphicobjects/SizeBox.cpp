// (c) 2017 Alex Nadzharov
// License: GPL3

#include "SizeBox.h"

namespace qtpd {

SizeBox::SizeBox(UIItem* parent)
    : UIItem(parent)
{
    setSize(QSize(7, 7));
    setBgColor(QColor(255, 255, 255));
}
}
