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
    this->clicked_ = false;

    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, QColor(240, 240, 240));
    this->setAutoFillBackground(true);
    this->setPalette(Pal);

    this->setMinimumBoxWidth(20);
    this->setMinimumBoxHeight(20);

    this->timer_ = new QTimer;
    this->timer_->setSingleShot(true);
    this->timer_->setInterval(100);

    connect(this->timer_, &QTimer::timeout, this, &UIBang::timerAction);

    connect(this, SIGNAL(setBangTimer(int)), this->timer_, SLOT(start(int)));
}
}
