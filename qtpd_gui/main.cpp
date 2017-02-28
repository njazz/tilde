
#include <QApplication>

#include "cm_pdlink.h"

#include "cm_pdwindow.h"
#include "cm_patchwindow.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setQuitOnLastWindowClosed(false);

    cmp_pdinit();
    qDebug("pd init");

    cm_pdwindow pdw;
    pdw.move(0,100);
    pdw.show();

    cm_patchwindow w;
    w.show();


    return a.exec();
}
