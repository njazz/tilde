// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef PATCHOBSERVER
#define PATCHOBSERVER

#include "pdServer.hpp"

namespace qtpd {

class PatchWindowController;

class PatchObserver : public Observer {
private:
    PatchWindowController* _patchController;

public:
    void setPatchController(PatchWindowController* c);
    virtual void update(){
        //something

    };
};
}

#endif // CM_PDLINK_H
