// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef APPLICATIONCONTROLLER
#define APPLICATIONCONTROLLER

// TODO
#include "../API_prototype/serverAPIprototype.h"

#include "PatchWindow.h"

//#include "ControllerObserver.h"

#include "PdWindow.h"

#ifdef WITH_PYTHON

#include "python/PythonQtScriptingConsole.h"

#endif

class ApplicationController : QObject {
private:
    TheServer* _server;
    ServerInstance* _mainInstance;

    static PythonQtScriptingConsole* _pythonConsole;

public:
    ApplicationController()
    {
        _server = new TheServer();
        _mainInstance = newServerInstance();

#ifdef WITH_PYTHON
        PythonQtObjectPtr mainContext = PythonQt::self()->getMainModule();
        _pythonConsole = new PythonQtScriptingConsole(NULL, mainContext);
        qDebug("pyConsole %lu", (long)_pythonConsole);
#endif
    };

    ServerInstance* newServerInstance()
    {
        return _server->createInstance();
    };

    ServerInstance* mainInstance() { return _mainInstance; }

    Observer* controllerObserver(); //ControllerObserver*

public slots:
    void newPatchWindowController(); //older createPatch //PatchWindowController*
    void openFileDialog();

    void pdWindow();
    void pythonConsole();
};

#endif // CM_PDLINK_H
