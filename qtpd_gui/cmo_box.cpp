#include "cmo_box.h"

cmo_box::cmo_box(cm_object *parent) : cm_object(parent)
{

    this->setFixedHeight(20);
    this->setMinimumWidth(22);
    this->setMouseTracking(true);

    this->deselect();// = false;

    //this->setAttribute(Qt::WA_NoMousePropagation);

    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, QColor(240,240,240));
    this->setAutoFillBackground(true);
    this->setPalette(Pal);

    this->setErrorBox(false);

}

