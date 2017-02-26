
#include <QApplication>

#include "cm_gui.h"



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setQuitOnLastWindowClosed(false);

    cm_patchwindow w;
    w.show();

    cm_pdwindow pdw;
    pdw.move(0,100);
    pdw.show();

    //cm_gui * Gui = new cm_gui;

    return a.exec();
}
