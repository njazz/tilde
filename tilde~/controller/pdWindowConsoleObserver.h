// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef PDWINDOWCONSOLEOBSERVER
#define PDWINDOWCONSOLEOBSERVER

// #include "pdServer.hpp"

#include "xpd-transition/xpd-headers.h"

#include <QApplication>

//#include <memory>

using namespace xpd;

using namespace std;

namespace tilde {

class PdWindow;

////
/// \brief The observer for the Pd console
class PdWindowConsoleObserver : public ConsoleObserver {

private:
    PdWindow* _window;


public:
    PdWindowConsoleObserver(){_window = 0;};
    void setWindow(PdWindow* w) { _window = w; };
    virtual void update() override;
};

typedef shared_ptr<PdWindowConsoleObserver> PdWindowConsoleObserverPtr;

}



#endif // CM_PDLINK_H
