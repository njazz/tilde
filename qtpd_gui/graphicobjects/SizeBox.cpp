// (c) 2017 Alex Nadzharov
// License: GPL3

#include "SizeBox.h"

namespace qtpd {

SizeBox::SizeBox(UIItem* parent)
    : UIItem(parent)
{
    _prevX = 0;
    _prevY = 0;
    _objectSizeType = 0;

    setSize(QSize(7, 7));
    setBgColor(QColor(255, 255, 255));
}
}
