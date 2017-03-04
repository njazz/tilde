#include "cm_pdwindow.h"
#include "ui_cm_pdwindow.h"

#include <QApplication>
#include <QtGui>
#include <QGridLayout>
#include <QLabel>

static std::string cm_log_string;

void cm_pdwindow::cm_log(std::string text)
{
    qDebug("cm_log %s", text.c_str());

    //temporary
    if (!text.length()) return;


    //if (text.length()>0)
    {

        std::string last_c = &text.at(text.length()-1);

        if((last_c == "\n"))
        {
             cm_log_string += text;

        }
        if ( (text == "\n") || (last_c == "\n") )
        {


            ui->log->insertRow(0);
            QTableWidgetItem *item = new QTableWidgetItem;
            item->setText(QDateTime().currentDateTime().toString((QString("hh:mm:ss"))));
            ui->log->setItem(0,0,item);

            item = new QTableWidgetItem;
            item->setText(QString(cm_log_string.c_str()));
            ui->log->setItem(0,1,item);

            cm_log_string = "";
        }
        else
        {
            cm_log_string += text;
        }
    }
//    else
//        item->setText(QString(""));


}

void cm_pdwindow::cm_post(std::string text)
{
    cm_pdwindow::cm_log(text);
    cm_pdwindow::cm_log("\n");

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

    this->cm_post("qtpd started");
    this->cm_post("---");


}
