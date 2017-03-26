// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIBang.h"

namespace qtpd {

UIBang::UIBang(UIObject* parent)
    : UIObject(parent)
{
    //setPdObjectName("ui.bang");

    this->setFixedSize(20, 20);

    this->setMouseTracking(true);

    this->deselect();
    this->_clicked = false;

    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, QColor(240, 240, 240));
    this->setAutoFillBackground(true);
    this->setPalette(Pal);

    this->setMinimumBoxWidth(20);
    this->setMinimumBoxHeight(20);

    this->_timer = new QTimer;
    this->_timer->setSingleShot(true);
    this->_timer->setInterval(100);

    connect(this->_timer, &QTimer::timeout, this, &UIBang::timerAction);

    connect(this, SIGNAL(setBangTimer(int)), this->_timer, SLOT(start(int)));
}
}
