#include "cm_menu.h"

#include "cm_basewindow.h"
#include "cm_patchwindow.h"
#include "cm_pdwindow.h"

#include "cm_pdlink.h"

#include "cm_fileparser.h"

////
/// \brief new patch window
///
void cm_menu::newFile()
{
    cm_patchwindow *newWindow = new cm_patchwindow;
    newWindow->show();
}

////
/// \brief new patch window from file
///
void cm_menu::open()
{
    QString fname = QFileDialog::getOpenFileName(0,QString("Open patch"), QString("~/"), QString("*.pd"), 0, 0);
    if (fname!="")
        cm_fileparser::open(fname);
}

////
/// \brief show/hide Pd console
///
void cm_menu::pdWindow()
{
    if(pdw)
        // if (pdw->isVisible())
        pdw->hide();
    //else pdw->show();

    //    post("pd window");
}
