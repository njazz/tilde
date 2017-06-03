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

//void pd_window_printhook(const char* s)
//{
//    //emit _pdWindow->cm_log_signal(QString(s));
//}

class PdWindowConsoleObserver : public ConsoleObserver {
private:
    PdWindow* _window;

public:
    void setWindow(PdWindow* w) { _window = w; };

    void update()
    {
        if (_window) {
            emit _window->cm_log_signal(QString(text().c_str()));
        }
    };
};

class ApplicationController : QObject {
private:
    TheServer* _server;
    ServerInstance* _mainInstance;

    PdWindow* _pdWindow;
    PythonQtScriptingConsole* _pythonConsole;

    PdWindowConsoleObserver* _consoleObserver;

public:
    ApplicationController()
    {
        qDebug("new app controller");

        _server = new TheServer();
        _mainInstance = newServerInstance();

#ifdef WITH_PYTHON
        PythonQtObjectPtr mainContext = PythonQt::self()->getMainModule();
        _pythonConsole = new PythonQtScriptingConsole(NULL, mainContext);
        qDebug("pyConsole %lu", (long)_pythonConsole);
#endif

        //cmp_pdinit();
        //        cmp_setprinthook([](const char* str) {
        //            emit _pdWindow->cm_log_signal(QString(str));
        //        });

        _consoleObserver = new PdWindowConsoleObserver;

        _mainInstance->setConsoleObserver(_consoleObserver);

        _pdWindow = new PdWindow();
        _pdWindow->move(0, 100);
        _pdWindow->show();

        _consoleObserver->setWindow(_pdWindow);
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
