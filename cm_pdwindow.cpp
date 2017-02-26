#include "cm_pdwindow.h"
#include "ui_cm_pdwindow.h"

#include <QApplication>
#include <QtGui>
#include <QGridLayout>
#include <QLabel>

cm_pdwindow::cm_pdwindow() :

    ui(new Ui::cm_pdwindow)
{
    ui->setupUi(this);

    ((cm_basewindow*)this)->createActions();
    ((cm_basewindow*)this)->createMenus();


    ((QMainWindow*)this)->setWindowTitle("Pd");

}
