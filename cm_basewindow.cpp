#include "cm_basewindow.h"
#include "ui_cm_basewindow.h"
#include <QApplication>
#include <QtGui>
#include <QGridLayout>
#include <QLabel>

#include "cm_box.h"
#include "cm_canvas.h"

#include "cm_menu.h"

cm_basewindow::cm_basewindow(QWidget *parent) :

    QMainWindow(parent),

    ui(new Ui::cm_basewindow)
{
    ui->setupUi(this);

    createActions();
    createMenus();

}

cm_basewindow::~cm_basewindow()
{
    delete ui;
}


//////////////////////////////////////

void cm_basewindow::close()
{
    // ?
    //cm_menu::close(this);

    ((QMainWindow*)this)->close();
}


