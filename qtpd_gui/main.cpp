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

    //temporary folders properties

    QString docFolder = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation).last() ;

    // load from file later
    Preferences::inst().create("Externals","Folders","0.1",docFolder+"/Qtpd/Externals");
    Preferences::inst().create("Scripts","Folders","0.1",docFolder+"/Qtpd/Scripts");

    //test
    //fix
    Preferences::inst().create("Paths","Folders","0.1",docFolder);
    std::string extPath = Preferences::inst().get("Externals")->asStdString();
    std::string extPath1 = extPath + "/ceammc/";
    std::string extPath2 = extPath + "/fiddle~/";
    //std::string extPath3 = extPath + "/fiddle~/fiddle~.d_fat";

    Preferences::inst().addPath(extPath.c_str());
    Preferences::inst().addPath(extPath1.c_str());
    Preferences::inst().addPath(extPath2.c_str());

    //cmp_add_searchpath(gensym(extPath3.c_str()));

    pyWrappersInit();



    return a.exec();
}
