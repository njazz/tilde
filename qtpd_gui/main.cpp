// (c) 2017 Alex Nadzharov
// License: GPL3

#include <QApplication>

#include "PatchWindow.h"
#include "PdWindow.h"

//#include "BaseMenu.h"

#include "ObjectLoader.h"

#include "AudioSettings.h"
#include "Preferences.h"

//python

#ifdef WITH_PYTHON
#include <PythonQt.h>
#include <PythonQt_QtAll.h>

#include "python/PythonQtScriptingConsole.h"
#include "python/wrappers/py_wrappers.h"
#endif

#include "ApplicationController.h"

using namespace qtpd;

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    a.setQuitOnLastWindowClosed(false);

    a.setCursorFlashTime(500);

    // TODO move all to appcontroller
    new ApplicationController();

    return a.exec();
}
