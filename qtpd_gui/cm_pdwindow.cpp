#include "cm_pdwindow.h"
#include "ui_cm_pdwindow.h"

#include <QApplication>
#include <QtGui>
#include <QGridLayout>
#include <QLabel>


void cm_pdwindow::cm_log(std::string text)
{
    qDebug("cm_log %s", text.c_str());

    ui->log->insertRow(0);
    QTableWidgetItem *item = new QTableWidgetItem;
    item->setText(QDateTime().currentDateTime().toString((QString("hh:mm:ss"))));
    ui->log->setItem(0,0,item);

    item = new QTableWidgetItem;
    if (text.length()>0)
        item->setText(QString(text.c_str()));
    else
        item->setText(QString(""));
    ui->log->setItem(0,1,item);

}
cm_pdwindow::cm_pdwindow() :

    ui(new Ui::cm_pdwindow)
{
    ui->setupUi(this);

    ((cm_basewindow*)this)->createActions();
    ((cm_basewindow*)this)->createMenus();


    ((QMainWindow*)this)->setWindowTitle("Pd");

    QHeaderView *verticalHeader = ui->log->verticalHeader();
    verticalHeader->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader->setDefaultSectionSize(18);
     ui->log->horizontalHeader()->setStretchLastSection(true);

     ui->log->insertColumn(0);

    this->cm_log("qtpd started");
     this->cm_log("---");


}
