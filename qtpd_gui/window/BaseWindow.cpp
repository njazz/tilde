#include "BaseWindow.h"
#include "ui_cm_basewindow.h"
#include <QApplication>
#include <QGridLayout>
#include <QLabel>
#include <QtGui>

#include "Canvas.h"
#include <UIBox.h>

#include "BaseMenu.h"

#include "PropertiesWindow.h"
#include "Preferences.h"

namespace qtpd {
BaseWindow::BaseWindow(QWidget* parent)
    :

    QMainWindow(parent)
    , ui(new Ui::cm_basewindow)
{
    ui->setupUi(this);

    createActions();
    createMenus();
}

//BaseWindow::~BaseWindow()
//{
//    delete ui;
//}

//////////////////////////////////////

void BaseWindow::close()
{
    // ?
    //cm_menu::close(this);

    ((QMainWindow*)this)->close();
}

//////////

void BaseWindow::dspOn()
{
    cmp_switch_dsp(true);
    dspOnAct->setChecked(true);
}

void BaseWindow::dspOff()
{
    cmp_switch_dsp(false);
    dspOnAct->setChecked(false);
}

void BaseWindow::pdWindow()
{
    //if (pdw->isVisible()) pdw->hide(); else pdw->show();
}

void BaseWindow::preferencesWindow()
{
    qDebug()<<"preferences";
    PropertyList* l1 = &Preferences::inst();
    PropertiesWindow*p1 = new PropertiesWindow(l1);
    p1->move(30,30);
    p1->show();

}

}
