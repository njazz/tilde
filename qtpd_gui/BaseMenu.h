// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_MENU_H
#define CM_MENU_H

#include <QObject>

#include "python/PythonQtScriptingConsole.h"

namespace qtpd {
////
/// \brief Common menu - creates new windows (patch, Pd)
/// \details this is used only to create new windows. all other items are now in basewindow - probably they should be moved here
///
class BaseMenu : public QObject {
    Q_OBJECT

    static PythonQtScriptingConsole* pythonConsole_;

public:
    explicit BaseMenu(QObject* parent = 0)
    {
//TODO! singleton
#ifdef WITH_PYTHON
        PythonQtObjectPtr mainContext = PythonQt::self()->getMainModule();
        pythonConsole_ = new PythonQtScriptingConsole(NULL, mainContext);
        qDebug("pyConsole %lu", (long)pythonConsole_);
#endif
    };

    //signals:

public slots:

    static void newFile();
    static void open();

    static void pdWindow();
    static void pythonConsole();
};
}

#endif // CM_MENU_H
