#include "cm_menu.h"

#include "cm_basewindow.h"
#include "cm_patchwindow.h"
#include "cm_pdwindow.h"

#include "cm_pdlink.h"

#include "cm_fileparser.h"

cm_menu::cm_menu(QObject *parent) : QObject(parent)
{

}

void cm_menu::newFile()
{
    //    infoLabel->setText(tr("Invoked <b>File|New</b>"));
    //qDebug("new file");

    cm_patchwindow *newWindow = new cm_patchwindow;
    newWindow->show();
}

///////

//todo a class

//cm_patchwindow* pdParserCanvas;   // or t_canvas?

//void parsePdString(QString line)
//{
//    QStringList atoms = line.split( " " );

//    //switch (atoms.at(0))

//    if (atoms.at(0) == "#N")
//    {
//        QStringList msg = atoms;
//        msg.removeFirst();

//        pdParserCanvas = new cm_patchwindow(msg);
//        pdParserCanvas->show();   //move to constructor?
//    }

//    if (atoms.at(0) == "#X")
//    {
//        QStringList msg = atoms;
//        msg.removeFirst();

//        if (pdParserCanvas)
//        {
//            pdParserCanvas->loadPdString(msg);
//        }
//        else
//        {
//            qDebug("parser error - no canvas");
//        }
//    }
//    //TODO
//}


//void parsePdFile(QString fname)
//{
//    QFile f(fname);
//    f.open(QIODevice::ReadOnly);

//    QStringList stringList;

//    pdParserCanvas = 0;

//    QTextStream textStream(&f);
//    while (true)
//    {
//        QString line = textStream.readLine();
//        if (line.isNull())
//            break;
//        else
//        {
//            stringList.append(line);
//            qDebug("* %s", line.toStdString().c_str());
//            //
//            parsePdString(line);

//        }
//    }
//    f.close();

//}

void cm_menu::open()
{
    //    infoLabel->setText(tr("Invoked <b>File|Open</b>"));

    QString fname = QFileDialog::getOpenFileName(0,QString("Open patch"), QString("~/"), QString("*.pd"), 0, 0);
    //parsePdFile(fname);
    cm_fileparser::open(fname);



}

void cm_menu::close(QObject *)  //sender
{

}

void cm_menu::save()
{
    //    infoLabel->setText(tr("Invoked <b>File|Save</b>"));
}

void cm_menu::saveAs()
{
    //    infoLabel->setText(tr("Invoked <b>File|Save</b>"));
}

void cm_menu::message()
{
    //    infoLabel->setText(tr("Invoked <b>File|Save</b>"));
}




//void cm_menu::undo()
//{
//    //    infoLabel->setText(tr("Invoked <b>Edit|Undo</b>"));
//}

//void cm_menu::redo()
//{
//    //    infoLabel->setText(tr("Invoked <b>Edit|Redo</b>"));
//}

//void cm_menu::cut()
//{
//    //    infoLabel->setText(tr("Invoked <b>Edit|Cut</b>"));
//}

//void cm_menu::copy()
//{
//    //    infoLabel->setText(tr("Invoked <b>Edit|Copy</b>"));
//}

//void cm_menu::paste()
//{
//    //   infoLabel->setText(tr("Invoked <b>Edit|Paste</b>"));
//}



//void cm_menu::putObject()
//{
//    //   infoLabel->setText(tr("Invoked <b>Edit|Paste</b>"));
//}

//void cm_menu::putMessage()
//{
//    //   infoLabel->setText(tr("Invoked <b>Edit|Paste</b>"));
//}

//void cm_menu::putNumber()
//{
//    //   infoLabel->setText(tr("Invoked <b>Edit|Paste</b>"));
//}

//void cm_menu::putSymbol()
//{
//    //   infoLabel->setText(tr("Invoked <b>Edit|Paste</b>"));
//}

//void cm_menu::putComment()
//{
//    //   infoLabel->setText(tr("Invoked <b>Edit|Paste</b>"));
//}


//void cm_menu::dspOn()
//{
//    //   infoLabel->setText(tr("Invoked <b>Edit|Paste</b>"));
//}

//void cm_menu::dspOff()
//{
//    //   infoLabel->setText(tr("Invoked <b>Edit|Paste</b>"));
//}

void cm_menu::pdWindow()
{
    if(pdw)
        // if (pdw->isVisible())
        pdw->hide();
    //else pdw->show();

    //    post("pd window");
}
