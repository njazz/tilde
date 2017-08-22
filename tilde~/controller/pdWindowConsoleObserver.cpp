// (c) 2017 Alex Nadzharov
// License: GPL3

#include "pdWindowConsoleObserver.h"
#include "PdWindow.h"

namespace tilde {

void PdWindowConsoleObserver::update()
{
    if (_window) {
        // XPD-TODO
        //emit _window->postSignal(QString(text()));
    }
};
}
