#include "cm_basewindow.h"
#include "ui_cm_basewindow.h"
#include <QApplication>
#include <QtGui>
#include <QGridLayout>
#include <QLabel>

#include <cmo_box.h>
#include "cm_canvas.h"

#include "cm_menu.h"

namespace qtpd
{
BaseWindow::BaseWindow(QWidget *parent) :

    QMainWindow(parent),

    ui(new Ui::cm_basewindow)
{
    ui->setupUi(this);

    createActions();
    createMenus();

}

BaseWindow::~BaseWindow()
{
    delete ui;
}


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

}
