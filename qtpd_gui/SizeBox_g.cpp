// (c) 2017 Alex Nadzharov
// License: GPL3

#include "SizeBox_g.h"

namespace qtpd {

SizeBoxItem::SizeBoxItem(UIItem *parent)
    : UIItem(parent)
{
    setSize(QSize(7,7));

    setBgColor(QColor(255, 255, 255));

}
}
