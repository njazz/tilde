// (c) 2017 Alex Nadzharov
// License: GPL3

#include "pdWindowConsoleObserver.h"
#include "PdWindow.h"

namespace tilde {

void PdWindowConsoleObserver::update()
{
    if (_window) {
        //qDebug() << "POST" << text().c_str();

        _window->postSlot(QString(text().c_str()));
    }
};
}
