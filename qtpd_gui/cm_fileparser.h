#ifndef CM_FILEPARSER_H
#define CM_FILEPARSER_H

#include <QFile>
#include <QTextStream>

#include "cm_patchwindow.h"

////
/// \brief Parses pd files on client(GUI) side
///
class cm_fileparser
{
private:
    cm_fileparser(){};

public:

    // or t_canvas?
    static cm_patchwindow* pdParserPrevWindow;
    static cm_patchwindow* pdParserWindow;
    static std::string pdParserFileName;


    ////
    /// \brief parses QStringLists of atoms to canvas - creates objects etc
    /// \param cmcanvas
    /// \param list
    ///
    static void stringToCanvas(cm_canvas* cmcanvas, QStringList list) //rename
    {
        if (list.at(0) == "obj")
        {
            //qDebug("new obj");
            if (list.size()>3)
            {
                QString objname;
                QPoint pos;

                pos.setX(((QString)list.value(1)).toFloat());
                pos.setY(((QString)list.value(2)).toFloat());

                //lol
                QStringList objList = list;
                objList.removeAt(0);
                objList.removeAt(0);
                objList.removeAt(0);
                objname = objList.join(" ");

                qDebug() << "objname" << objname;
                //temporary
                //load gui boxes?
                if (objList.at(0) == "ui.msg")
                    cmcanvas->createMsg(objname.toStdString(), pos);
                else
                    cmcanvas->createBox(objname.toStdString(), pos);


            }
            else
            {
                qDebug("list error");
            }
        }

        //        if (list.at(0) == "msg")
        //        {
        //            qDebug("new msg");
        //            if (list.size()>3)
        //            {
        //                QString objname;
        //                QPoint pos;

        //                pos.setX(((QString)list.value(1)).toFloat());
        //                pos.setY(((QString)list.value(2)).toFloat());

        //                //lol
        //                QStringList objList = list;
        //                objList.removeAt(0);
        //                objList.removeAt(0);
        //                objList.removeAt(0);
        //                objname = objList.join(" ");



        //                this->canvas->createMsg(objname.toStdString(), pos);
        //            }
        //            else
        //            {
        //                qDebug("list error");
        //            }
        //        }

        if (list.at(0) == "connect")
        {
            qDebug("new connect");

            if (list.size()>4)
            {
                cm_object * obj1 = cmcanvas->getObjectByIndex( ((QString)list.value(1)).toInt() );
                cm_object * obj2 = cmcanvas->getObjectByIndex( ((QString)list.value(3)).toInt() );

                if (!obj1 || !obj2)
                {
                    qDebug("object not found - could not connect");
                    return;
                }
                int idx1 = ((QString)list.value(2)).toInt() ;
                int idx2 = ((QString)list.value(4)).toInt() ;

                //cmcanvas->patchcord();
                if (!obj1->isErrorBox() && !obj2->isErrorBox() )
                    cmcanvas->patchcord(obj1,idx1,obj2,idx2);

            }

            else
            {
                qDebug("list error");
            }
        }

        if (list.at(0) == "restore")
        {

            qDebug("restore canvas: %lu | previous %lu", pdParserWindow, pdParserPrevWindow);


            //parserwindow - subpatch
            //prev window - parent patch

            //restore pd box
            if (list.size()>3)
            {
                QString objname;
                QPoint pos;

                pos.setX(((QString)list.value(1)).toFloat());
                pos.setY(((QString)list.value(2)).toFloat());

                //lol
                QStringList objList = list;
                objList.removeAt(0);
                objList.removeAt(0);
                objList.removeAt(0);
                objname = objList.join(" ");

                qDebug() << "objname" << objname;
                //temporary

                cmo_box *b1 = 0;

                if (objList.at(0) == "pd")
                {
                    if (pdParserPrevWindow)
                    {
                        if (pdParserPrevWindow->canvas)
                        {
                            b1 = pdParserPrevWindow->canvas->restoreSubcanvas(objname.toStdString(), pos, pdParserWindow->canvas->pd_canvas);
                            b1->cmSubcanvas = pdParserWindow;
                        }
                    }
                }
                else
                {
                    qDebug("pd subpatch error");
                }

                //draw subpatch
                pdParserWindow = pdParserPrevWindow;



            }
            else
            {
                qDebug("list error");
            }



        }

    }

    ////
    /// \brief checks first atoms ("#N", "#X" etc) and sends QStringList
    /// \param line
    ///
    static void parseString(QString line)
    {
        QStringList atoms = line.split( " " );

        atoms.last() = atoms.last().remove(";");
        //switch (atoms.at(0))

        if (atoms.at(0) == "#N")
        {
            QStringList msg = atoms;
            msg.removeFirst();

            pdParserPrevWindow = pdParserWindow;

            cm_patchwindow* newWnd = cm_patchwindow::newWindow();
            pdParserWindow = newWnd;

            if (pdParserPrevWindow)
                newWnd->setWindowTitle("<subpatch>");
            newWnd->show();   //move to constructor? check for subcanvases the vis flag


        }

        if (atoms.at(0) == "#X")
        {
            QStringList msg = atoms;
            msg.removeFirst();

            if (pdParserWindow)
            {
                cm_fileparser::stringToCanvas(pdParserWindow->canvas, msg);
            }
            else
            {
                qDebug("parser error - no canvas");
            }
        }
        //TODO
    }

    ////
    /// \brief opens file, converts to QStrings, calls 'parseString'
    /// \param fname
    ///
    static void open(QString fname)
    {
        QFile f(fname);
        f.open(QIODevice::ReadOnly);

        QStringList stringList;

        pdParserWindow = 0;
        pdParserPrevWindow = 0;
        pdParserFileName = fname.toStdString();

        QTextStream textStream(&f);
        while (true)
        {
            QString line = textStream.readLine();
            if (line.isNull())
                break;
            else
            {
                stringList.append(line);
                qDebug("* %s", line.toStdString().c_str());
                //
                cm_fileparser::parseString(line);

            }
        }
        f.close();

    }
};

#endif // CM_FILEPARSER_H
