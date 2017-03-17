// (c) 2017 Alex Nadzharov
// License: GPL3

#include <QApplication>

#include "cm_pdlink.h"

#include "cm_patchwindow.h"
#include "cm_pdwindow.h"

#include "cm_menu.h"

#include "cm_objectloader.h"

#include "cm_preferences.h"

//python
#include <PythonQt.h>
#include <PythonQt_QtAll.h>

#include "python/wrappers/py_wrapers.h"

#include "python/PythonQtScriptingConsole.h"

using namespace qtpd;

void pd_window_printhook(const char* s)
{
    //qDebug("print hook %s",s);
    if (pdw)
        pdw->cm_log(std::string(s));
}

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    a.setQuitOnLastWindowClosed(false);
    a.setWindowIcon(QIcon("./pd_ceammc.png"));

    QTPD_PREF_INIT;

    //python
    PythonQt::init(PythonQt::IgnoreSiteModule | PythonQt::RedirectStdOut);
    PythonQt_QtAll::init();

    ObjectLoader::inst().loadObjects();

    cmp_pdinit();
    cmp_setprinthook(&pd_window_printhook);

    pdw = new PdWindow();

    pdw->move(0, 100);
    pdw->show();

    cmp_post("qtpd started");
    cmp_post("---");

    //temporary
    BaseMenu* m = new BaseMenu(0);

    pyWrappersInit();

    //

    //console.show();

    return a.exec();
}
