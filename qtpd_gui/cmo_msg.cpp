#include "cmo_msg.h"

//cmo_msg::cmo_msg()
//{

//}

cmo_msg::cmo_msg(cm_widget *parent) : cm_widget(parent)
{
    this->setFixedSize(65,20);

    this->setMouseTracking(true);

//    QPalette Pal(palette());
//    Pal.setColor(QPalette::Background, QColor(220,220,220));
//    this->setAutoFillBackground(true);
//    this->setPalette(Pal);

}
