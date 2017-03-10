#include "cm_sizebox.h"

namespace cm
{

SizeBox::SizeBox(UIWidget *parent) : UIWidget(parent)
{
    this->setFixedSize(7,7);

    //

    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, QColor(255,255,255));
    this->setAutoFillBackground(true);
    this->setPalette(Pal);

}



}

