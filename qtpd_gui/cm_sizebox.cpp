// (c) 2017 Alex Nadzharov
// License: GPL3

#include "cm_sizebox.h"

namespace qtpd {

SizeBox::SizeBox(UIWidget* parent)
    : UIWidget(parent)
{
    this->setFixedSize(7, 7);

    //

    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, QColor(255, 255, 255));
    this->setAutoFillBackground(true);
    this->setPalette(Pal);
}
}
