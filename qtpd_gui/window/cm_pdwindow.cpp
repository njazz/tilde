#include "cm_pdwindow.h"
#include "ui_cm_pdwindow.h"

#include <QApplication>
#include <QtGui>
#include <QGridLayout>
#include <QLabel>

namespace qtpd
{
static std::string cm_log_string;


void PdWindow::cm_log(std::string text)
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
            item->setFlags(item->flags() &  ~Qt::ItemIsEditable);
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

    //todo move


    fileMenu->removeAction(saveAct);
    fileMenu->removeAction(saveAsAct);

//    else
//        item->setText(QString(""));


}

void PdWindow::cm_post(std::string text)
{
    PdWindow::cm_log(text);
    PdWindow::cm_log("\n");

}
PdWindow::PdWindow() :

    ui(new Ui::cm_pdwindow)
{
    ui->setupUi(this);

    ((BaseWindow*)this)->createActions();
    ((BaseWindow*)this)->createMenus();


    ((QMainWindow*)this)->setWindowTitle("Pd");

    QHeaderView *verticalHeader = ui->log->verticalHeader();
    verticalHeader->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader->setDefaultSectionSize(18);
    ui->log->horizontalHeader()->setStretchLastSection(true);

    ui->log->insertColumn(0);

    ui->log->setFont(QFont(PREF_QSTRING("Font"), 12, 0, false));

    ui->log->setColumnWidth(0,70);

//    this->cm_post("qtpd started");
//    this->cm_post("---");


}
}