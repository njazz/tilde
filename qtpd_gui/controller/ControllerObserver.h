// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CONTROLLEROBSERVER
#define CONTROLLEROBSERVER

class PatchWindowController;

class ControllerObserver : Observer {
public:
    ControllerObserver(PatchWindowController* Controller = 0){};

    virtual void update(); // controller->updateDspOn()
};

#endif // CM_PDLINK_H
