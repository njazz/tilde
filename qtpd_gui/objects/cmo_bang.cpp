#include "cmo_bang.h"


namespace cm
{


UIBang::UIBang(UIObject *parent) : UIObject(parent)
{
    this->setFixedSize(20,20);

    this->setMouseTracking(true);

    this->deselect();
    this->clicked_ = false;

    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, QColor(240,240,240));
    this->setAutoFillBackground(true);
    this->setPalette(Pal);

    this->setMinimumBoxWidth(20);


}


}

