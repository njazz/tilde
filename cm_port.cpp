#include "cm_port.h"

cm_port::cm_port(cm_widget *parent) : cm_widget(parent)
{
    this->setFixedSize(10,4);

    this->setAttribute(Qt::WA_NoMousePropagation);

}



//////////


