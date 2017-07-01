// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef PDWINDOWCONSOLEOBSERVER
#define PDWINDOWCONSOLEOBSERVER

#include "pdServer.hpp"

#include <QApplication>

namespace qtpd {

class PdWindow;

////
/// \brief The observer for the Pd console
///

class PdWindowConsoleObserver : public ConsoleObserver {
private:
    PdWindow* _window;

public:
    void setWindow(PdWindow* w) { _window = w; };
    void update();
};
}

#endif // CM_PDLINK_H
