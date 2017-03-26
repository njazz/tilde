// (c) 2017 Alex Nadzharov
// License: GPL3

#include "cm_sizebox.h"

namespace qtpd {

SizeBox::SizeBox(UIWidget* parent)
    : UIWidget(parent)
{
    setFixedSize(7, 7);

    //

    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, QColor(255, 255, 255));
    setAutoFillBackground(true);
    setPalette(Pal);
}
}
