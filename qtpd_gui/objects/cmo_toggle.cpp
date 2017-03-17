#include "cmo_toggle.h"

namespace qtpd
{

UIToggle::UIToggle(UIObject *parent) : UIObject(parent)
{
    setPdObjectName("ui.toggle");

    this->setFixedSize(20,20);

    this->setMouseTracking(true);

    this->deselect();
    this->clicked_ = false;

    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, QColor(240,240,240));
    this->setAutoFillBackground(true);
    this->setPalette(Pal);

    this->setMinimumBoxWidth(20);
    this->setMinimumBoxHeight(20);

    this->value_ = false;
}



}

