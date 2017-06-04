// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CONTROLLEROBSERVER
#define CONTROLLEROBSERVER

namespace qtpd {

class PatchWindowController;

class ControllerObserver : Observer {
public:
    ControllerObserver(PatchWindowController* Controller = 0){};

    virtual void update();
};
}

#endif // CM_PDLINK_H
