// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIBang.h"

namespace qtpd {

UIBang::UIBang() //UIObject* parent)
//: UIObject(parent)
{
    //setPdObjectName("ui.bang");

    setSize(20, 20);

    setMinimumBoxWidth(20);
    setMinimumBoxHeight(20);

    setObjectSizeMode(os_Fixed);

    //setMouseTracking(true);

    deselect();
    _clicked = false;

    //    QPalette Pal(palette());
    //    Pal.setColor(QPalette::Background, QColor(240, 240, 240));
    //    setAutoFillBackground(true);
    //    setPalette(Pal);

    setWidth(20);
    setHeight(20);

    _timer = new QTimer;
    _timer->setSingleShot(true);
    _timer->setInterval(33); //default 100

    connect(_timer, &QTimer::timeout, this, &UIBang::timerAction);

    connect(this, SIGNAL(setBangTimer(int)), _timer, SLOT(start(int)));
}
}
