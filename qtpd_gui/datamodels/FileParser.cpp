// (c) 2017 Alex Nadzharov
// License: GPL3

#include "FileParser.h"

#include "PatchWindow.h"

#include "ApplicationController.h"
#include "CanvasView.h"
#include "PatchWindowController.h"

namespace qtpd {
PatchWindowController* FileParser::_pdParserPrevWindowController = 0;
PatchWindowController* FileParser::_pdParserWindowController = 0;
PatchWindowController* FileParser::_pdParserFirstWindowController = 0;

//CanvasData* FileParser::_currentData = 0;
//CanvasData* FileParser::_previousData = 0;
//CanvasData* FileParser::_firstData = 0;

ApplicationController* FileParser::_appController = 0;

std::string FileParser::pdParserFileName = "";

bool FileParser::legacyProcess(PatchWindowController* controller, QStringList list)
{
    //qDebug() << "legacy process:" << list;

    // special cases:
    // msg - text - floatatom - symbolatom

    //compatibility
    if (list.at(0) == "msg") {
        list[0] = "obj";
        list.insert(3, "ui.msg");
        FileParser::sendStringToCanvas(controller, list);

        // no special properties
        return true;

    } else if (list.at(0) == "text") {
        list[0] = "obj";
        list.insert(3, "ui.text");
        list.insert(4, "@Text");
        //UIObject* obj =
        FileParser::sendStringToCanvas(controller, list);

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
        FileParser::sendStringToCanvas(controller, list);

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

        FileParser::sendStringToCanvas(controller, list2);

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

        FileParser::sendStringToCanvas(controller, list2);

        return true;

    } else if ((list.at(0) == "obj") && (list.at(3) == "tgl")) {
        //box_width init send_ receive_ label label_offset_x label_offset_y (font) font_size bgcolor frontcolor labelcolor low_value high_value

        QStringList list2 = QString("obj 0 0 ui.toggle").split(" ");

        list2[1] = list[1];
        list2[2] = list[2];

        list2.append("@Size " + list[4] + list[4]);

        // TODO

        FileParser::sendStringToCanvas(controller, list2);

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

        FileParser::sendStringToCanvas(controller, list2);

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
            list2.append("@Size " + QString::number(list[4].toFloat() * 5) + " " + list[4]); //replace 5 with size

        //list2.append("@Offset " + list2[6] );
        //list2.append("@Range" +  list2[7]);

        FileParser::sendStringToCanvas(controller, list2);

        return true;

    } else if ((list.at(0) == "obj") && (list.at(3) == "vradio")) {

        QStringList list2 = QString("obj 0 0 ui.matrix").split(" ");

        list2[1] = list[1];
        list2[2] = list[2];

        // temporary
        list2.append("@Columns 1 @Rows 5");

        if (list.size() > 4)
            list2.append("@Size " + list[4] + " " + QString::number(list[4].toFloat() * 5));

        //list2.append("@Offset " + list2[6] );
        //list2.append("@Range" +  list2[7]);

        FileParser::sendStringToCanvas(controller, list2);

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
        FileParser::sendStringToCanvas(controller, list2);

        return true;
    }

    return false; // if it is not a special legacy object
}

UIObject* FileParser::sendStringToCanvas(PatchWindowController* controller, QStringList list)
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

        return controller->createObject(QString(list.at(3) + " " + msgname).toStdString(), pos);

    } else {
        qDebug("list error");
        //create error object here to keep connections
        return 0;
    }
}

void FileParser::parseStringListAtoms(PatchWindowController* controller, QStringList list) //rename
{
    //legacy parser first
    if (FileParser::legacyProcess(controller, list))
        return;

    //qDebug() << "list at 0" << list.at(0);

    if (list.at(0) == "obj") {
        FileParser::sendStringToCanvas(controller, list);
    } else

        if (list.at(0) == "connect") {
        //qDebug("new connect");

        if (list.size() > 4) {
            if (controller) {
                // TODO

                UIObject* obj1 = controller->canvasData()->getObjectByIndex(((QString)list.value(1)).toInt());
                UIObject* obj2 = controller->canvasData()->getObjectByIndex(((QString)list.value(3)).toInt());

                if (!obj1 || !obj2) {
                    qDebug("object not found - could not connect");
                    return;
                }

                int idx1 = ((QString)list.value(2)).toInt();
                int idx2 = ((QString)list.value(4)).toInt();

                //cmcanvasView()->patchcord();
                if (!obj1->errorBox() && !obj2->errorBox()) {
                    qDebug("patchcord");
                    controller->patchcord(obj1, idx1, obj2, idx2);
                }
            }
        }

        else {
            qDebug("list error");
        }
    } else if (list.at(0) == "restore") {

        qDebug("restore canvas: %lu | previous %lu", _pdParserWindowController, _pdParserPrevWindowController);

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

            QString objectData = objList.join(" ");

            if (objList.at(0) == "pd") {
                if (_pdParserPrevWindowController) {
                    //if (_pdParserPrevWindowController->firstWindow()->canvasView())
                    //{

                        //                                                UIBox *b1 = 0;

                        //                                                b1 = pdParserPrevWindow->canvasView()->restoreSubcanvas(objname.toStdString(), pos, pdParserWindow->canvasView()->pdCanvas);
                        //                                                b1->cmSubcanvas = pdParserWindow;

//                        UIBox* b1 = _pdParserWindowController->subpatchBox();

//                        b1->setPos(pos.x(),pos.y());
//                        b1->setPdMessage(objData);

                        _pdParserPrevWindowController->creatBoxForSubpatch(_pdParserWindowController,objectData,pos);



                        qDebug("restore");

                        // TODO
                        // UIObject* b = _pdParserPrevWindow->canvasView()->createBoxForPatchWindow(_pdParserWindow, objData, pos);

                        //UIObject* b = _pdParserPrevWindow->canvasView()->createObject(QString(objData.c_str()), pos);

                        //IObject *b = createBoxForCanvas(newCanvas, objectData, pos);
                        //((UIBox*)b)->setSubpatchWindow((QMainWindow*)_pdParserPrevWindow);
                        //((Canvas*)b)->setSubcanvas(_pdParserPrevWindow->canvas);
                    }
                }
//            }
            else {
                qDebug("pd subpatch error");
            }

            //draw subpatch
            _pdParserWindowController = _pdParserPrevWindowController;

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

        _pdParserPrevWindowController = _pdParserWindowController;

        PatchWindowController* newWnd = new PatchWindowController(FileParser::_appController);
        newWnd->setAppController(FileParser::_appController);
        _pdParserWindowController = newWnd;

        //save pointer to first canvas. needed to set file name
        if (!_pdParserPrevWindowController)
            _pdParserFirstWindowController = _pdParserWindowController;

        msg.removeFirst();
        if (_pdParserPrevWindowController)
            newWnd->firstWindow()->setWindowTitle(msg.at(4));

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

        newWnd->firstWindow()->canvasView()->setWindowSize(size);
        newWnd->firstWindow()->move(pos);

        // TODO

        if (msg.size() > 5) {

            if (msg.at(5).toInt())
                newWnd->firstWindow()->show();
            else
                newWnd->firstWindow()->hide();
        } else
            newWnd->firstWindow()->show();
    }

    if (atoms.at(0) == "#X") {
        QStringList msg = atoms;
        msg.removeFirst();

        if (_pdParserWindowController) {
            //qDebug("X");
            FileParser::parseStringListAtoms(_pdParserWindowController, msg);
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

        setParserWindowController(0);
        //setCanvasData(0,0,0);

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

        if (_pdParserWindowController) {
            _pdParserWindowController->firstWindow()->setFileName(fname);
            _pdParserWindowController->firstWindow()->canvasView()->setEditMode(em_Locked);

            // TODO
            //cmp_loadbang(_pdParserWindow->canvasView()->pdObject());

            _pdParserWindowController->firstWindow()->canvasView()->resizeToObjects();
            _pdParserWindowController->firstWindow()->show();
        }

        f.close();
    }
    else
    {
        ServerInstance::error("cannot open file: " + fname.toStdString());
    }
}

// NEW API
//void FileParser::open(QString fname, CanvasData* canvasData)
//{

//    qDebug("new parser");

//    QFile f(fname);
//    if (f.open(QIODevice::ReadOnly)) {

//        QStringList stringList;

//        setParserWindow(0);

//        pdParserFileName = fname.toStdString();

//        QTextStream textStream(&f);
//        while (true) {
//            QString line = textStream.readLine();
//            if (line.isNull())
//                break;
//            else {
//                stringList.append(line);
//                //qDebug("* %s", line.toStdString().c_str());
//                //

//                // another one
//                FileParser::parseQString(line);
//            }
//        }

//        if (_pdParserWindow) {
//            _pdParserWindow->setFileName(fname);
//            _pdParserWindow->canvasView()->setEditMode(em_Locked);

//            // TODO
//            //_pdParserWindow->controller()->canvasData()->serverCanvas()->loadbang();

//            _pdParserWindow->show();
//        }

//        f.close();
//    }
//}


// --------------------------------------------------


 void FileParser:: setAppController(ApplicationController* appController) { _appController = appController; }

 void FileParser:: setParserWindowController(PatchWindowController* wnd)
{
    _pdParserPrevWindowController = wnd;
    _pdParserWindowController = wnd;
}

 void FileParser:: setParserWindowControllers(PatchWindowController* wnd, PatchWindowController* prev, PatchWindowController* first)
{
    _pdParserWindowController = wnd;
    _pdParserPrevWindowController = prev;
    _pdParserFirstWindowController = first;
}

////
/// \brief returns first created window
/// \details mostly used by OOP loader
/// \return
///
 PatchWindowController* FileParser:: parserFirstWindowController()
{
    return _pdParserFirstWindowController;
}

 PatchWindowController* FileParser:: parserWindowController()
{
    return _pdParserWindowController;
}

 PatchWindowController* FileParser:: parserPrevWindowController()
{
    return _pdParserPrevWindowController;
}


//////
///// \brief [3.1] subroutine - formats list and send it to canvas as a string
///// \param cmcanvas
///// \param list
///// \returns uiobject - that may be needed by legacyProcess to add more properties after object is created
/////
// UIObject* FileParser:: sendStringToCanvas(PatchWindowController* controller, QStringList list);

//////
///// \brief [3] parses QStringLists of atoms to canvas - creates objects etc
///// \details converts list, passes data to 'sendStringToCanvas'
///// \param cmcanvas
///// \param list
/////
// void FileParser:: parseStringListAtoms(PatchWindowController* controller, QStringList list);

//////
///// \brief [2] checks first atoms ("#N", "#X" etc) and sends QStringList of contents to canvas
///// \param line
/////
// void FileParser:: parseQString(QString line);

//////
///// \brief [1] opens file, converts to QStrings, calls 'parseString'
///// \param fname
/////
// void FileParser:: open(QString fname);

//    ////
//    /// \brief new API open
//    /// \param fname
//    ///
//     void open(QString fname, CanvasData* CanvasData);

////
/// \brief unescapeString
/// \param input
/// \return
/// \deprecated needs cleanup - duplicate in PropertyList class
 QString FileParser:: unescapeString(QString input)
{
    // todo regexp

    QString ret;

    ret = input.split("\\ ").join(" ");
    ret = ret.split("\\n").join("\n");
    ret = ret.split("\\,").join(",");
    ret = ret.split("\\.").join(".");
    //ret = ret.split("\;").join(";");
    return ret;
}

////
/// \brief escapeString
/// \param input
/// \return
/// \deprecated needs cleanup - duplicate in PropertyList class
 QString FileParser:: escapeString(QString input)
{
    // todo regexp

    QString ret;

    ret = input.split(" ").join("\\ ");
    ret = ret.split("\n").join("\\n");
    ret = ret.split(",").join("\\,");
    ret = ret.split(".").join("\\.");
    //ret = ret.split(";").join("\\;");
    return ret;
}
}
