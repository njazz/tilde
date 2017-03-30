// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIInstance.h"

namespace qtpd {

UIInstance::UIInstance(UIObject* parent)
    : UIObject(parent)
{
    //setPdObjectName("ui.bang");

    this->setFixedHeight(20);
    //this->setMinimumWidth(22);
    this->setMouseTracking(true);

    this->deselect(); // = false;

    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, QColor(255, 240, 220));
    this->setAutoFillBackground(true);
    this->setPalette(Pal);

    this->setErrorBox(false);

    this->setSubpatchWindow(0);

    this->setMinimumBoxWidth(40);
    this->setMinimumBoxHeight(20);

    this->setObjectSizeMode(os_FixedHeight);
}
}
