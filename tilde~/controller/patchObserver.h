// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef PATCHOBSERVER
#define PATCHOBSERVER

// #include "pdServer.hpp"

#include "xpd-transition/xpd-headers.h"

using namespace xpd;

namespace tilde {

class PatchWindowController;

class PatchObserver : public Observer {
private:
    PatchWindowController* _patchController;

public:
    PatchObserver() {_patchController = 0;}

    void setPatchController(PatchWindowController* c);
    virtual void update(){
        //something

    };
};
}

#endif // CM_PDLINK_H
