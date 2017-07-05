// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef APPLICATIONCONTROLLER
#define APPLICATIONCONTROLLER

#include "pdServer.hpp"

#ifdef WITH_PYTHON
#include "python/PythonQtScriptingConsole.h"
#else
namespace qtpd {
class PythonQtScriptingConsole;
}
#endif

#include <QApplication>

namespace qtpd {

class PdWindow;
class PatchWindow;
class UIObject;
class ServerWorker;
class PdWindowConsoleObserver;

////
/// \brief The Application Controller class
///
class ApplicationController : public QObject {
    Q_OBJECT

private:
    LocalServer* _localServer;

    ServerWorker* _serverWorker;
    QThread* _serverThread;

    PdWindow* _pdWindow;
    PythonQtScriptingConsole* _pythonConsole;

    PdWindowConsoleObserver* _consoleObserver;

public:
    ApplicationController();

    ServerInstance* mainServerInstance();

    Observer* controllerObserver();

    ServerWorker* serverWorker() { return _serverWorker; };

signals:
    void getLocalServer(LocalServer* ret);

public slots:
    void newPatchWindowController();
    void openFileDialog();

    void pdWindow();
    void pythonConsole();

    void preferencesWindow();
    void audioSettingsWindow();

    void dspOn();
    void dspOff();

    ServerObject* slotCreateObject(ServerCanvas* canvas, string name);
};
}

#endif // CM_PDLINK_H
