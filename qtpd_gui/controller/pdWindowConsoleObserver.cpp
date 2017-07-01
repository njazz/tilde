// (c) 2017 Alex Nadzharov
// License: GPL3

#include "pdWindowConsoleObserver.h"
#include "PdWindow.h"

namespace qtpd {

void PdWindowConsoleObserver::update()
{
    if (_window) {
        emit _window->postSignal(QString(text().c_str()));
    }
};
}
