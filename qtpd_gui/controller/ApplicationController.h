// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef APPLICATIONCONTROLLER
#define APPLICATIONCONTROLLER

// TODO
#include "../API_prototype/serverAPIprototype.h"

#include "PatchWindow.h"

#include "ControllerObserver.h"

class ApplicationController {
private:
    TheServer* _server;

public:
    ServerInstance* newServerInstance();
    PatchWindow* newCanvas();
    void loadFile();
    PatchWindow* createPatchWindow();
    ControllerObserver* controllerObserver();
};

#endif // CM_PDLINK_H
