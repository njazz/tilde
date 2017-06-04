// (c) 2017 Alex Nadzharov
// License: GPL3

#include "FileParser.h"

#include "PatchWindow.h"

#include "CanvasView.h"

namespace qtpd {
PatchWindow* FileParser::_pdParserPrevWindow = 0;
PatchWindow* FileParser::_pdParserWindow = 0;
PatchWindow* FileParser::_pdParserFirstWindow = 0;

CanvasData* FileParser::_currentData = 0;
CanvasData* FileParser::_previousData = 0;
CanvasData* FileParser::_firstData = 0;

std::string FileParser::pdParserFileName = "";

bool FileParser::legacyProcess(CanvasView* cmcanvas, QStringList list)
{
    //qDebug() << "legacy process:" << list;

    // special cases:
    // msg - text - floatatom - symbolatom

    //compatibility
    if (list.at(0) == "msg") {
        list[0] = "obj";
        list.insert(3, "ui.msg");
        FileParser::sendStringToCanvas(cmcanvas, list);

        // no special properties
        return true;

    } else if (list.at(0) == "text") {
        list[0] = "obj";
        list.insert(3, "ui.text");
        list.insert(4, "@Text");
        //UIObject* obj =
        FileParser::sendStringToCanvas(cmcanvas, list);

        //        list.removeAt(0);
        //        list.removeAt(0);
        //        list.removeAt(0);
        //        list.removeAt(0);
        //        QString text = list.join(" ");
        //        obj->properties()->set("Text", text);

        return true;

    } else if (list.at(0) == "floatatom") {
        list[0] = "obj";
        list.insert(3, "ui.float");
        //UIObject* obj =
        FileParser::sendStringToCanvas(cmcanvas, list);

        //temporary - to have readable list at some point
        //box_width lower upper 1 label send receive

        //check bounds
        //int lBoxWidth = ((QString)list.at(4)).toInt();
        //float lMinimum = ((QString)list.at(5)).toFloat();
        //float lMaximum = ((QString)list.at(6)).toFloat();
        //int lInit = ((QString)list.at(7)).toInt();
        QString lLabel = ((QString)list.at(8));
        QString lSend = ((QString)list.at(9));
        QString lReceive = ((QString)list.at(10));

        //todo set / create

        return true;
    } else if (list.at(0) == "symbolatom") {

        QStringList list2 = QString("obj 0 0 ui.msg <symbol>").split(" ");

        list2[1] = list[1];
        list2[2] = list[2];

        FileParser::sendStringToCanvas(cmcanvas, list2);

        //temporary - to have readable list at some point
        //box_width lower upper 1 label send receive

        //check bounds
        //        int lBoxWidth = ((QString)list.at(4)).toInt();
        //        float lMinimum = ((QString)list.at(5)).toFloat();
        //        float lMaximum = ((QString)list.at(6)).toFloat();
        //        int lInit = ((QString)list.at(7)).toInt();
        //        QString lLabel = ((QString)list.at(8));
        //        QString lSend = ((QString)list.at(9));
        //        QString lReceive = ((QString)list.at(10));

        //todo set / create

        return true;
    } else
        //
        // iemgui objects
        //
        if ((list.at(0) == "obj") && (list.at(3) == "bng")) {
        //box_width time1 time2 init send_ receive_ label label_offset_x label_offset_y (font) font_size bgcolor frontcolor labelcolor ?

        QStringList list2 = QString("obj 0 0 ui.bang").split(" ");

        list2[1] = list[1];
        list2[2] = list[2];

        list2.append("@Size " + list[4] + list[4]);

        // TODO

        FileParser::sendStringToCanvas(cmcanvas, list2);

        return true;

    } else if ((list.at(0) == "obj") && (list.at(3) == "tgl")) {
        //box_width init send_ receive_ label label_offset_x label_offset_y (font) font_size bgcolor frontcolor labelcolor low_value high_value

        QStringList list2 = QString("obj 0 0 ui.toggle").split(" ");

        list2[1] = list[1];
        list2[2] = list[2];

        list2.append("@Size " + list[4] + list[4]);

        // TODO

        FileParser::sendStringToCanvas(cmcanvas, list2);

        return true;

    } else if ((list.at(0) == "obj") && (list.at(3) == "hsl") || (list.at(0) == "obj") && (list.at(3) == "vsl")) {

        QStringList list2 = QString("obj 0 0 ui.slider").split(" ");

        list2[1] = list[1];
        list2[2] = list[2];

        if (list.size() > 5) {
            list2.append("@Size " + list[4] + " " + list[5]);
            list2.append("@Offset " + list[6]);
            list2.append("@Range " + list[7]);
        }

        FileParser::sendStringToCanvas(cmcanvas, list2);

        return true;

    }

    else if ((list.at(0) == "obj") && (list.at(3) == "number2")) {

        return true;

    } else if ((list.at(0) == "obj") && (list.at(3) == "hradio")) {

        QStringList list2 = QString("obj 0 0 ui.matrix").split(" ");

        list2[1] = list[1];
        list2[2] = list[2];

        // temporary
        list2.append("@Columns 5 @Rows 1");

        if (list.size() > 4)
            list2.append("@Size " + QString::number(list[4].toFloat() * 5) + " "+ list[4]); //replace 5 with size

        //list2.append("@Offset " + list2[6] );
        //list2.append("@Range" +  list2[7]);

        FileParser::sendStringToCanvas(cmcanvas, list2);

        return true;

    } else if ((list.at(0) == "obj") && (list.at(3) == "vradio")) {

        QStringList list2 = QString("obj 0 0 ui.matrix").split(" ");

        list2[1] = list[1];
        list2[2] = list[2];

        // temporary
        list2.append("@Columns 1 @Rows 5");

        if (list.size() > 4)
            list2.append("@Size " + list[4]+ " " + QString::number(list[4].toFloat() * 5));

        //list2.append("@Offset " + list2[6] );
        //list2.append("@Range" +  list2[7]);

        FileParser::sendStringToCanvas(cmcanvas, list2);

        return true;

    } else
        // ----- canvas
        if ((list.at(0) == "obj") && (list.at(3) == "cnv")) {

        //temporary
        //check bounds
        //int lBoxWidth = ((QString)list.at(4)).toInt(); //?
        QString lSend = ((QString)list.at(7));
        QString lReceive = ((QString)list.at(8));
        QString lLabel = ((QString)list.at(9));
        QString fontSize = ((QString)list.at(13));
        if (lLabel == "empty")
            lLabel = "";
        //...
        //int lFontSize = ((QString)list.at(4)).toInt() * 8 + 3;

        QStringList list2;
        list2.push_back("obj");
        list2.push_back(list.at(1));
        list2.push_back(list.at(2));
        list2.push_back("ui.text");
        list2.push_back("@Text");
        list2.push_back(lLabel);
        list2.push_back("@FontSize");
        list2.push_back(fontSize);

        //UIObject* obj =
        FileParser::sendStringToCanvas(cmcanvas, list2);

        return true;
    }

    return false; // if it is not a special legacy object
}

UIObject* FileParser::sendStringToCanvas(CanvasView* cmcanvas, QStringList list)
{
    qDebug("new obj");
    if (list.size() > 3) {
        QString objname;
        QString msgname;
        QPoint pos;

        pos.setX(((QString)list.value(1)).toFloat());
        pos.setY(((QString)list.value(2)).toFloat());

        //lol
        QStringList objList = list;
        objList.removeAt(0);
        objList.removeAt(0);
        objList.removeAt(0);

        objname = objList.join(" ");

        objList.removeAt(0);
        msgname = objList.join(" ");

        //qDebug() << "objname" << objname;

        // check property handling
        // probably should be moved here?

        return 0;// TODO cmcanvas->createObject(list.at(3) + " " + msgname, pos);

    } else {
        qDebug("list error");
        //create error object here to keep connections
        return 0;
    }
}

void FileParser::parseStringListAtoms(CanvasView* cmcanvas, QStringList list) //rename
{
    //legacy parser first
    if (FileParser::legacyProcess(cmcanvas, list))
        return;

    //qDebug() << "list at 0" << list.at(0);

    if (list.at(0) == "obj") {
        FileParser::sendStringToCanvas(cmcanvas, list);
    } else

        if (list.at(0) == "connect") {
        //qDebug("new connect");

        if (list.size() > 4) {
            //if (cmcanvas)
            {
                // TODO

                /*

                UIObject* obj1 = cmcanvas->getObjectByIndex(((QString)list.value(1)).toInt());
                UIObject* obj2 = cmcanvas->getObjectByIndex(((QString)list.value(3)).toInt());



                if (!obj1 || !obj2) {
                    qDebug("object not found - could not connect");
                    return;
                }

                int idx1 = ((QString)list.value(2)).toInt();
                int idx2 = ((QString)list.value(4)).toInt();

                //cmcanvasView()->patchcord();
                if (!obj1->errorBox() && !obj2->errorBox()) {
                    qDebug("patchcord");
                    cmcanvas->patchcord(obj1, idx1, obj2, idx2);
                }
                */

            }
        }

        else {
            qDebug("list error");
        }
    } else if (list.at(0) == "restore") {

        qDebug("restore canvas: %lu | previous %lu", _pdParserWindow, _pdParserPrevWindow);

        //parserwindow - subpatch
        //prev window - parent patch

        //restore pd box
        if (list.size() > 2) {
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

            QString objData = objList.join(" ");

            if (objList.at(0) == "pd") {
                if (_pdParserPrevWindow) {
                    if (_pdParserPrevWindow->canvasView()) {
                        //                                                UIBox *b1 = 0;

                        //                                                b1 = pdParserPrevWindow->canvasView()->restoreSubcanvas(objname.toStdString(), pos, pdParserWindow->canvasView()->pdCanvas);
                        //                                                b1->cmSubcanvas = pdParserWindow;

                        qDebug("restore");

                        // TODO
                        // UIObject* b = _pdParserPrevWindow->canvasView()->createBoxForPatchWindow(_pdParserWindow, objData, pos);


                        //UIObject* b = _pdParserPrevWindow->canvasView()->createObject(QString(objData.c_str()), pos);

                        //IObject *b = createBoxForCanvas(newCanvas, objectData, pos);
                        //((UIBox*)b)->setSubpatchWindow((QMainWindow*)_pdParserPrevWindow);
                        //((Canvas*)b)->setSubcanvas(_pdParserPrevWindow->canvas);
                    }
                }
            } else {
                qDebug("pd subpatch error");
            }

            //draw subpatch
            _pdParserWindow = _pdParserPrevWindow;

        } else {
            qDebug("list error");
        }
    } else {
        // add dummy object to keep connections

        if (list.size() > 2) {
            QString objname;
            QString msgname;
            QPoint pos;

            pos.setX(((QString)list.value(1)).toFloat());
            pos.setY(((QString)list.value(2)).toFloat());

            //lol
            QStringList objList = list;
            objList.removeAt(1);
            objList.removeAt(1);

            objname = objList.join(" ");

            qDebug() << "objname" << objname;
            //temporary
            //cmcanvasView()->createBox(objname.toStdString(), pos);


            // TODO cmcanvas->createObject(objname, pos);
        }
    }
}

void FileParser::parseQString(QString line)
{

    line = FileParser::unescapeString(line);

    QStringList atoms = line.split(" ");

    atoms.last() = atoms.last().remove(";");
    //switch (atoms.at(0))

    if (atoms.at(0) == "#N") {

        // weird here: we construct canvas in fileparser but we construct objects with their special methods
        // todo fix

        QStringList msg = atoms;
        msg.removeFirst();

        _pdParserPrevWindow = _pdParserWindow;

        PatchWindow* newWnd = new PatchWindow();
        _pdParserWindow = newWnd;

        //save pointer to first canvas. needed to set file name
        if (!_pdParserPrevWindow)
            _pdParserFirstWindow = _pdParserWindow;

        msg.removeFirst();

        if (_pdParserPrevWindow)
            newWnd->setWindowTitle(msg.at(4));

        // todo different canvas argumentlists

        QPoint pos = QPoint(((QString)msg.at(0)).toInt(), ((QString)msg.at(1)).toInt());
        QSize size = QSize(((QString)msg.at(2)).toInt(), ((QString)msg.at(3)).toInt());

        if (pos.x() > 1000)
            pos.setX(1000);
        if (pos.y() > 500)
            pos.setY(500);
        if (size.width() > 1000)
            size.setWidth(1000);
        if (size.height() > 700)
            size.setHeight(700);

        qDebug() << "dim" << pos << size;

        newWnd->canvasView()->setWindowSize(size);
        newWnd->move(pos);

        // TODO

        if (msg.size() > 5) {

            if (msg.at(5).toInt())
                newWnd->show();
            else
                newWnd->hide();
        } else
            newWnd->show();
    }

    if (atoms.at(0) == "#X") {
        QStringList msg = atoms;
        msg.removeFirst();

        if (_pdParserWindow) {
            //qDebug("X");
            FileParser::parseStringListAtoms(_pdParserWindow->canvasView(), msg);
        } else {
            qDebug("parser error - no canvas");
        }
    }

    if (atoms.at(0) == "#A") {
        //create array
    }
    //TODO
}

void FileParser::open(QString fname)
{

    QFile f(fname);
    if (f.open(QIODevice::ReadOnly)) {
        QStringList stringList;

        //setParserWindow(0);
        setCanvasData(0,0,0);


        pdParserFileName = fname.toStdString();

        QTextStream textStream(&f);
        while (true) {
            QString line = textStream.readLine();
            if (line.isNull())
                break;
            else {
                stringList.append(line);
                qDebug("* %s", line.toStdString().c_str());
                //

                FileParser::parseQString(line);
            }
        }

        if (_pdParserWindow) {
            _pdParserWindow->setFileName(fname);
            _pdParserWindow->canvasView()->setEditMode(em_Locked);

            // TODO
            //cmp_loadbang(_pdParserWindow->canvasView()->pdObject());

            _pdParserWindow->show();
        }

        f.close();
    }
}

// NEW API
void FileParser::open(QString fname, CanvasData* canvasData)
{

    qDebug("new parser");

    QFile f(fname);
    if (f.open(QIODevice::ReadOnly)) {

        QStringList stringList;

        setParserWindow(0);

        pdParserFileName = fname.toStdString();

        QTextStream textStream(&f);
        while (true) {
            QString line = textStream.readLine();
            if (line.isNull())
                break;
            else {
                stringList.append(line);
                //qDebug("* %s", line.toStdString().c_str());
                //

                // another one
                FileParser::parseQString(line);
            }
        }

        if (_pdParserWindow) {
            _pdParserWindow->setFileName(fname);
            _pdParserWindow->canvasView()->setEditMode(em_Locked);

            // TODO
            //_pdParserWindow->controller()->canvasData()->serverCanvas()->loadbang();

            _pdParserWindow->show();
        }

        f.close();
    }
}

}
