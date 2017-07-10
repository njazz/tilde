// (c) 2017 Alex Nadzharov
// License: GPL3

#include "PdWindow.h"
#include "ui_cm_pdwindow.h"

#include <QApplication>
#include <QGridLayout>
#include <QLabel>
#include <QtGui>

#include "pdServer.hpp"

#include <QComboBox>

#include <string>

using namespace std;

namespace qtpd {
static QString cm_log_string;

void PdWindow::postSlot(QString text)
{
    //temporary
    if (!text.length())
        return;

    QString last_c = text.at(text.length() - 1);

    if ((last_c == "\n")) {
        cm_log_string += text;
    }
    if ((text == "\n") || (last_c == "\n")) {

        _ui->log->insertRow(0);
        QTableWidgetItem* item = new QTableWidgetItem;
        item->setFlags(item->flags() & ~Qt::ItemIsEditable);
        item->setText(QDateTime().currentDateTime().toString((QString("hh:mm:ss"))));
        item->setTextAlignment(Qt::AlignTop & Qt::AlignCenter);
        _ui->log->setItem(0, 0, item);

        item = new QTableWidgetItem;
        QString txt = cm_log_string;

        //remove last \n
        if (txt.length() > 0)
            txt.remove(txt.length() - 1, 1);

        item->setText(txt);
        _ui->log->setItem(0, 1, item);

        cm_log_string = "";
    } else {
        cm_log_string += text;
    }

    _ui->log->resizeRowsToContents();
}

PdWindow::PdWindow()
    :

    _ui(new Ui::cm_pdwindow)
{
    _ui->setupUi(this);

    ((BaseWindow*)this)->createActions();
    ((BaseWindow*)this)->createMenus();

    ((QMainWindow*)this)->setWindowTitle("Pd");

    QHeaderView* verticalHeader = _ui->log->verticalHeader();
    verticalHeader->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader->setDefaultSectionSize(18);
    _ui->log->horizontalHeader()->setStretchLastSection(true);

    _ui->log->insertColumn(0);

    _ui->log->setFont(QFont(PREF_QSTRING("Font"), 12, 0, false));

    _ui->log->setColumnWidth(0, 70);

    fileMenu->removeAction(saveAct);
    fileMenu->removeAction(saveAsAct);

    connect(this, &PdWindow::postSignal, this, &PdWindow::postSlot);

    UIDSP* uidsp = new UIDSP();
    QGraphicsView* dsp = uidsp->widget();
    dsp->move(0, 0);
    dsp->setFixedSize(40, 40);
    dsp->setParent(_ui->toolbar);
    dsp->show();

    _ui->logLevelBox->addItem("0 fatal");
    _ui->logLevelBox->addItem("1 error");
    _ui->logLevelBox->addItem("2 normal");
    _ui->logLevelBox->addItem("3 debug");
    _ui->logLevelBox->addItem("4 all");

    connect(_ui->logLevelBox, SIGNAL(currentIndexChanged(int)), this, SLOT(logBoxChange(int)));

    _clearConsoleAct = new QAction("Clear console");
    _clearConsoleAct->setShortcut(tr("Ctrl+Shift+L"));

    connect(_clearConsoleAct, &QAction::triggered, this, &PdWindow::clearConsoleSlot);

    editMenu->addAction(_clearConsoleAct);

    _ui->logLevelBox->setCurrentIndex(0);

    connect(_ui->sendMessage, &QLineEdit::returnPressed, this, &PdWindow::sendMessageChanged);

    connect(messageAct, &QAction::triggered, this, &PdWindow::focusOnSendMessage);
}

void PdWindow::logBoxChange(int index)
{
    ServerInstance::setVerboseLevel(index);
}

void PdWindow::clearConsoleSlot()
{
    _ui->log->clearContents();
}


 void PdWindow::focusOnSendMessage()
 {
     _ui->sendMessage->setFocus();

 }


void PdWindow::sendMessageChanged()
{
    QString input = ((QLineEdit*)QObject::sender())->text();
    ((QLineEdit*)QObject::sender())->setText("");

    QStringList list = input.split(" ");
    if (list.size() < 2) {
        ServerInstance::error("nothing to send");
        return;
    }

    string object = QString(list.at(0)).toStdString();
    list.removeAt(0);
    string text = list.join(" ").toStdString();
    ServerInstance::sendMessage(object, text);
}
}
