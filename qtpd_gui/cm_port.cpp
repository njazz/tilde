#include "cm_port.h"

namespace cm
{
Port::Port(UIWidget *parent) : UIWidget(parent)
{
    this->setFixedSize(10,3);

    this->setAttribute(Qt::WA_NoMousePropagation);

    this->hover = false;

    this->port_type = cm_pt_inlet;
    this->portIndex = 0;
}

}



//////////


