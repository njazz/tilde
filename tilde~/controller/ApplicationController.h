// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef APPLICATIONCONTROLLER
#define APPLICATIONCONTROLLER

#include "pdServer.hpp"

#include "recentfiles.h"

#include <QAction>

#ifdef WITH_PYTHON
#include "python/PythonQtScriptingConsole.h"
#include "scriptrunner.h"
#else
namespace tilde {
class PythonQtScriptingConsole;
}
#endif

#include <QApplication>

namespace tilde {

class PdWindow;
class PatchWindow;
class UIObject;
class ServerWorker;
class PdWindowConsoleObserver;
class RecentFiles;
class FilePaths;

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

    int _newFilenameCounter;

    RecentFiles* _recentFiles;
    QMenu* _recentMenu;

    FilePaths* _filePaths;

    void loadAllLibraries();

#ifdef WITH_PYTHON
    ScriptRunner* _scriptRunner;
#endif

public:
    ApplicationController();

    ServerInstance* mainServerInstance();

    Observer* controllerObserver();

    ServerWorker* serverWorker() { return _serverWorker; };

    QString newFileName()
    {
        return QString("Untitled-" + QString::number(_newFilenameCounter++));
    }

    void createRecentMenu();

    QMenu* recentMenu() { return _recentMenu; }

    FilePaths* filePaths() { return _filePaths; }

#ifdef WITH_PYTHON
    ScriptRunner* scriptRunner()
    {
        return _scriptRunner;
    }
#endif

    signals:
        void getLocalServer(LocalServer * ret);

    public slots:
        void newPatchWindowController();
        void openFileDialog();

        void pdWindow();
        void pythonConsole();

        void preferencesWindow();
        void audioSettingsWindow();

        void dspOn();
        void dspOff();

        void openFile();

        void newScript();

        ServerObject* slotCreateObject(ServerCanvas * canvas, string name);
    };
}

#endif // CM_PDLINK_H
