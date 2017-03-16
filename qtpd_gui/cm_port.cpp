#include "cm_port.h"

namespace qtpd
{
Port::Port(UIWidget *parent) : UIWidget(parent)
{
    this->setFixedSize(10,3);

    this->setAttribute(Qt::WA_NoMousePropagation);

    this->hover = false;

    this->portType = portInlet;
    this->portIndex = 0;

    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, QColor(250,250,250));
    this->setAutoFillBackground(true);
    this->setPalette(Pal);

}

}



//////////


