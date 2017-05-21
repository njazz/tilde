// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef APPLICATIONCONTROLLER
#define APPLICATIONCONTROLLER

// TODO
#include "../API_prototype/serverAPIprototype.h"

#include "PatchWindow.h"

//#include "ControllerObserver.h"

class ApplicationController : QObject {
private:
    TheServer* _server;
    ServerInstance* _mainInstance;

public:
    ApplicationController()
    {
        _server = new TheServer();
        _mainInstance = newServerInstance();
    };

    ServerInstance* newServerInstance()
    {
        return _server->createInstance();
    };

    ServerInstance* mainInstance(){return _mainInstance;}

    PatchWindowController* newPatchWindowController()
    {
        // in .cpp
        //return new PatchWindowController(this->mainInstance());
    };

    void loadFile();

    Observer* controllerObserver();     //ControllerObserver*
};

#endif // CM_PDLINK_H
