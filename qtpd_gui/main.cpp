
#include <QApplication>

#include "cm_pdlink.h"

#include "cm_pdwindow.h"
#include "cm_patchwindow.h"

#include "cm_objectloader.h"

using namespace cm;

void pd_window_printhook(const char* s)
{
    //qDebug("print hook %s",s);
    if (pdw)
        pdw->cm_log(std::string(s));
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setQuitOnLastWindowClosed(false);
    a.setWindowIcon(QIcon("./pd_ceammc.png"));

    ObjectLoader::inst().loadObjects();

    cmp_pdinit();
    cmp_setprinthook(&pd_window_printhook);

    pdw = new PdWindow();

    pdw->move(0,100);
    pdw->show();

//    cm_patchwindow w;
//    w.show();


    return a.exec();
}

