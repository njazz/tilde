// (c) 2017 Alex Nadzharov
// License: GPL3

#include "PatchWindowController.h"

#include "CanvasData.h"

#include "FileParser.h"
#include "FileSaver.h"

#include "CanvasData.h"
#include "CanvasView.h"

#include "PatchWindow.h"

#include "UIObject.h"
#include "UIPatchcord.h"

#include "ApplicationController.h"

// TEST
//#include "PdLink.h"

namespace qtpd {

PatchWindowController::PatchWindowController(ApplicationController* appController) //replace with parent (appcontroller)
{

    _scene = new QGraphicsScene();
    _observer = new Observer();

    _appController = appController;

    //_serverInstance = appController->mainServerInstance();
    serverInstance()->registerObserver(_observer);

    _canvasData = new CanvasData();
    _serverCanvas = serverInstance()->createCanvas();

    //_canvasData->setServerCanvas(_serverCanvas);

    newWindow();
};

PatchWindowController::PatchWindowController(ApplicationController* appController, ServerCanvas* canvas)
{
    _scene = new QGraphicsScene();
    _observer = new Observer();

    _appController = appController;

    //_serverInstance = appController->mainServerInstance();
    serverInstance()->registerObserver(_observer);

    _canvasData = new CanvasData();
    _serverCanvas = canvas;

    //_canvasData->setServerCanvas(_serverCanvas);

    newWindow();
};

ServerInstance* PatchWindowController::serverInstance() { return _appController->mainServerInstance(); }

vector<PatchWindow*> PatchWindowController::windows() { return _windows; };
PatchWindow* PatchWindowController::firstWindow() { return _windows[0]; };
//vector<QGraphicsScene*> PatchWindowController::scenes() { return _scenes; };

PatchWindow* PatchWindowController::newWindow()
{
    PatchWindow* ret = new PatchWindow();

    ret->setAppController(_appController);
    ret->setController(this);

    ret->hide();

    _windows.push_back(ret);
    _scene = ret->canvasView()->scene();

    // connections
    connect(ret->canvasView(), &CanvasView::signalMouseMove, this, &PatchWindowController::slotMouseMove);
    connect(ret->canvasView(), &CanvasView::signalMousePress, this, &PatchWindowController::slotMousePress);
    connect(ret->canvasView(), &CanvasView::signalMouseRelease, this, &PatchWindowController::slotMouseRelease);

    connect(ret->canvasView(), &CanvasView::signalSelectObject, this, &PatchWindowController::slotSelectObject);
    connect(ret->canvasView(), &CanvasView::signalPatchcord, this, &PatchWindowController::slotPatchcord);

    connect(ret->canvasView(), &CanvasView::signalDeselectObjects, this, &PatchWindowController::slotDeselectObjects);

    connect(ret->canvasView(), &CanvasView::signalSelectionFrame, this, &PatchWindowController::slotSelectionFrame);
    connect(ret->canvasView(), &CanvasView::signalMoveSelectedBoxes, this, &PatchWindowController::slotMoveSelectedBoxes);

    return ret;
}

void PatchWindowController::openFile(QString fileName)
{
    //
    FileParser::open(fileName);
}

void PatchWindowController::saveFile(QString fileName)
{
    //todo dialog
    FileSaver::save(fileName, _canvasData);
}

void PatchWindowController::saveFileDialog(){};

//PatchWindowController* PatchWindowController::createSubpatchWindowController(){
//    // TODO
//};

void PatchWindowController::setAppController(ApplicationController* a)
{
    _appController = a;
    firstWindow()->setAppController(a);
}
//
//void PatchWindowController::createObjectMaker(){};
//
UIObject* PatchWindowController::createObject(string name, QPoint pos)
{
    qDebug("* create object *");

    if (!_canvasData) {
        qDebug("** canvas data error!");
        return 0;
    }

    if (!_serverCanvas) {
        qDebug("** server canvas error!");
        return 0;
    }

    //qDebug() << "server object ok";

    UIObject* uiObject = ObjectLoader::inst().createUIObject(name.c_str());

    if (!uiObject) {
        qDebug() << "bad ui object!";
        return 0;
    }

    uiObject->setParentController(this);

    //
    connect(this, &PatchWindowController::signalCreateObject, _appController, &ApplicationController::slotCreateObject);
    ServerObject* serverObject = emit signalCreateObject(_serverCanvas, name);

    uiObject->setParentCanvasView(_windows[0]->canvasView());
    uiObject->setServerObject(serverObject);

    uiObject->observer()->setObject(uiObject);
    uiObject->serverObject()->ServerObject::registerObserver(uiObject->observer());

    //qDebug() << "*** registered observer: " << uiObject->observer();

    uiObject->sync();

    connect(uiObject, &UIObject::sendMessage, _appController->serverWorker(), &ServerWorker::sendMessageToObject);
    uiObject->setEditModeRef(_windows[0]->canvasView()->getEditModeRef());

    uiObject->move(pos.x(), pos.y());

    _canvasData->addUniqueBox(_canvasData->boxes(), uiObject);
    _scene->addItem(uiObject);

    connect(uiObject, &UIObject::selectBox, _windows[0]->canvasView(), &CanvasView::slotSelectBox);
    connect(uiObject, &UIObject::moveBox, _windows[0]->canvasView(), &CanvasView::slotMoveBox);

    return uiObject;

    // ======================================================

    /*

    QString objectData1 = name.c_str();
    QStringList list = QString(objectData1).split(" ");

    if (list.count()) {

        if (list.at(0) == "pd") {
            //lol
            std::pair<QMainWindow*, UIObject*> newPatch;

            // todo return just QMainWindow
            //newPatch = emit createSubpatchWindow();

            //t_canvas* newPdCanvas = cmp_newpatch();

            ServerCanvas* newCanvas = _serverInstance->createCanvas();
            // temporary
            //PatchWindow* subPatch = PatchWindow::newSubpatch((t_canvas*)newPdCanvas);

            PatchWindowController* subPatchCtrl = createSubpatchWindowController();
            PatchWindow* subPatch = subPatchCtrl->windows()[0];

            //CanvasView* newCanvas = subPatch->canvasView();

            UIObject* obj = UISubpatch::createObject(objectData1, 0, this);

            ((UISubpatch*)obj)->setSubpatchWindow(subPatch);

            //qDebug()<<"objdata1" << objectData1;
            qDebug("subpatch>>");

            subPatch->show();

            connect(obj, &UIObject::selectBox, this, &CanvasView::s_SelectBox);
            connect(obj, &UIObject::moveBox, this, &CanvasView::s_MoveBox);

            obj->setEditModeRef(_canvasEditMode); //Canvas::getEditModeRef());
            obj->move(pos.x(), pos.y());
            _canvasData.addUniqueBox(_canvasData.boxes(), obj);
            _scene->addItem(obj);

            return obj;
        }

        // temporary to check G-O-P
        if (list.at(0) == "pds") {
            //lol
            std::pair<QMainWindow*, UIObject*> newPatch;

            // todo return just QMainWindow
            //newPatch = emit createSubpatchWindow();

            QMainWindow* subPatch = newPatch.first;
            UIObject* obj = UISubpatch::createObject(objectData1, 0, this);

            ((UISubpatch*)obj)->setSubpatchWindow(subPatch);

            //qDebug()<<"objdata1" << objectData1;
            qDebug("subpatch>>");

            subPatch->show();

            connect(obj, &UIObject::selectBox, this, &CanvasView::s_SelectBox);
            connect(obj, &UIObject::moveBox, this, &CanvasView::s_MoveBox);

            obj->setEditModeRef(_canvasEditMode); //Canvas::getEditModeRef());
            obj->move(pos.x(), pos.y());
            _canvasData.addUniqueBox(_canvasData.boxes(), obj);
            scene()->addItem(obj);

            //temp
            obj->setSize(400, 300);

            return obj;
        }

        if (list.at(0) == "restore") {
            // unused?
            return 0;
        }
    }

    UIObject* obj = ObjectLoader::inst().createObject(objectData1, (t_canvas*)pdObject(), this);

    //obj->setCanvas((void*)this);




    */
};

//bool PatchWindowController::patchcord(UIObject* src, int out, UIObject* dest, int in){};
void PatchWindowController::deletePatchcordsForObject(UIObject* o){};
void PatchWindowController::deleteObject(UIObject* o)
{
    _canvasData->deselectBoxes();
    _canvasData->selectBox(o);
    deleteSelectedObjects();
};
//
bool PatchWindowController::syncData(ServerObject* serverObject, UIObject* uiObject){};
//
void PatchWindowController::deleteSelectedObjects(vector<UIObject*>){};
void PatchWindowController::deleteSelectedPatchcords(vector<UIPatchcord*>){};
//
void PatchWindowController::clickPort(){}; //?
//
void PatchWindowController::update(){}; // <<-- from observer

void PatchWindowController::menuSave()
{
    QString fname;

    if (_canvasData->fileName() != "")
        fname = _canvasData->fileName();
    else
        fname = QFileDialog::getSaveFileName(_windows[0], QString("Save patch as..."), QString("~/"), QString("*.pd"), 0, 0);

    doSave(fname);
}

////
/// \brief first save of the patch
///
void PatchWindowController::menuSaveAs()
{
    QString fname = QFileDialog::getSaveFileName(_windows[0], QString("Save patch as..."), QString("~/"), QString("*.pd"), 0, 0);

    doSave(fname);
}

void PatchWindowController::doSave(QString fileName)
{
    if (fileName != "") {
        QString file = fileName.section("/", -1, -1);
        QString dir = fileName.section("/", 0, -2);

        qDebug("filename: %s %s", file.toStdString().c_str(), dir.toStdString().c_str());

        FileSaver::save(fileName, _canvasData);

        //
        _canvasData->setFileName(fileName);

        // TODO
        _windows[0]->setWindowTitle(file);
        _windows[0]->setWindowFilePath(fileName);
        _windows[0]->setWindowModified(false);
    }
}

void PatchWindowController::updateViewports()
{
    vector<PatchWindow*>::iterator it;
    for (it = _windows.begin(); it != _windows.end(); ++it) {
        PatchWindow* w = *it;

        w->canvasView()->viewport()->update();
    }
}

// ---------------------------------------------

void PatchWindowController::dataCut()
{

    if (!_canvasData->hasSelectedObjects())
        return;

    _canvasData->cut();

    deleteSelectedObjects();
}

void PatchWindowController::dataCopy()
{
    if (!_canvasData->hasSelectedObjects())
        return;

    _canvasData->cut();

    qDebug() << "***copy\n"
             << Clipboard::inst()->get();
}

void PatchWindowController::dataDuplicate()
{
    dataCopy();
    dataPaste();
}

void PatchWindowController::dataPaste()
{

    qDebug() << "***paste:\n"
             << Clipboard::inst()->get();

    if (Clipboard::inst()->get().size() < 1)
        return;

    QStringList list1;

    for (size_t i = 0; i < Clipboard::inst()->size(); i++) {
        QString str = Clipboard::inst()->at(i);

        QStringList subList = str.split(" ");

        // offset copied objects
        if (subList.size() >= 3) {
            if (subList.at(1) == "obj") {
                int x = ((QString)subList.at(2)).toFloat();
                int y = ((QString)subList.at(3)).toFloat();

                subList[2] = QString::number(x + 20);
                subList[3] = QString::number(y + 20);
            }

            qDebug() << "paste" << subList;

            Clipboard::inst()->setStringAt(i, subList.join(" "));
            FileParser::parseQString(Clipboard::inst()->at(i));
        }
    }

    // TODO copy patchcords
}

void PatchWindowController::dataSelectAllObjects()
{
    qDebug("select all");
    objectVec::iterator it;
    for (it = _canvasData->boxes()->begin(); it != _canvasData->boxes()->end(); ++it) {
        _canvasData->selectBox(*it);
    }

    //selectionData_.patchcords()_ = data_.patchcords()_;
}

// ------------

void PatchWindowController::deleteSelectedObjects()
{
    qDebug("del selected");

    objectVec::iterator it;
    for (it = _canvasData->selectedBoxes()->begin(); it != _canvasData->selectedBoxes()->end(); ++it)

    {
        //
        UIObject* box = *it;

        // TODO-PD_OBJECT
        /*
        qDebug("delete %lu | %lu", (long)box, (long)box->pdObject());

        box->pdObject();

        if (box->pdObject()) {
            //NEEDS FIX
            if ((t_object*)(box->pdObject())) {
                if (!box->errorBox())
                    //cmp_deleteobject((t_canvas*)pdObject(), (t_object*)box->pdObject());
                    // TODO
                    _serverCanvas->deleteObject((ServerObject*)box->pdObject());
                box->setPdObject(0);
            }
        } else {
            qDebug("didn't delete pd object");
        }
        */

        deletePatchcordsFor(box);

        _scene->removeItem(box);
        updateViewports();

        _canvasData->boxes()->erase(std::remove(_canvasData->boxes()->begin(), _canvasData->boxes()->end(), *it), _canvasData->boxes()->end());
        //selectionData_.boxes()->erase(std::remove(selectionData_.boxes()->begin(), selectionData_.boxes()->end(), *it), selectionData_.boxes()->end());
    }

    _canvasData->selectedBoxes()->clear();
}

// TODO
void PatchWindowController::deleteSelectedPatchcords()
{

    qDebug() << "del selected patchcords";

    //cleanup
    //for (int i=0;i<data_.patchcords()->size(); i++)
    std::vector<UIPatchcord*>::iterator it;
    for (it = _canvasData->patchcords()->begin(); it != _canvasData->patchcords()->end();) {
        UIPatchcord* p = *it;

        if (p->isSelected()) {

            // TODO-PD_OBJECT
            //                t_object* obj1 = (t_object*)p->obj1()->pdObject();
            //                t_object* obj2 = (t_object*)p->obj2()->pdObject();

            //                if (obj1 && obj2) {
            //                    int out1 = p->outletIndex();
            //                    int in2 = p->inletIndex();

            //                    if ((out1 >= 0) && (in2 >= 0))
            //                        cmp_delete_patchcord(obj1, out1, obj2, in2);
            //                    else
            //                        qDebug("object error. didn't delete pd patchcord");
            //                } else
            //                    qDebug("object error. didn't delete pd patchcord");

            _scene->removeItem(p);
            //qDebug() << "remove item";

            it = _canvasData->patchcords()->erase(it);

        } else
            ++it;
    }

    _canvasData->selectedPatchcords()->clear();
    update();
};

void PatchWindowController::deletePatchcordsFor(UIItem* obj)
{
    //for //(int i=0;i<data_.patchcords()->size();i++)
    std::vector<UIPatchcord*>::iterator it;
    for (it = _canvasData->patchcords()->begin(); it != _canvasData->patchcords()->end();) {
        if ((*it)->isConnectedToObject(obj)) {
            _scene->removeItem(*it);
            it = _canvasData->patchcords()->erase(it);
        } else
            ++it;
    }

    updateViewports();
}

void PatchWindowController::setFileName(QString fname)
{
    // TODO
    firstWindow()->setWindowFilePath(fname);
}
// ============

void PatchWindowController::selectBox(UIItem* box)
{
    qDebug() << "canvas selectbox";

    _canvasData->selectBox((UIObject*)box);

    firstWindow()->canvasView()->viewport()->update();
}

//void PatchWindowController::signalSelectBox(UIItem* box, QGraphicsSceneMouseEvent* event)
//{
//    // TODO
//    //}

//    /*
//    qDebug() << "select box";

//    if (CanvasView::getEditMode() == em_Unlocked) {
//        if (!(event->modifiers() & Qt::ShiftModifier))
//            if (_canvasData.selectedBoxes()->size() < 2)
//                if (_canvasData.selectedBoxes()->size() == 1)
//                    if (_canvasData.findBox(_canvasData.selectedBoxes(), (UIObject*)box) == -1) //fix
//                    {
//                        qDebug() << "deselect";
//                        _canvasData.deselectBoxes();

//                    } else {
//                        qDebug() << "edit";
//                        objectStartsEdit((void*)box);
//                    }
//                else
//                    qDebug() << "size" << _canvasData.selectedBoxes()->size();

//        selectBox(box);
//    }

//    //temporary
//    setDragObject(0);

//    viewport()->update();
//    */
//}

//////
///// \brief Canvas::s_MoveBox
///// \param box
///// \param event
///// \deprecated move to UIBox
//void PatchWindowController::signalMoveBox(UIItem* box, QGraphicsSceneMouseEvent* event)
//{
//    // TODO
//    /*
//    if (!(CanvasView::getEditMode() == em_Unlocked))
//        return;
//    for (int i = 0; i < (int)_canvasData.selectedBoxes()->size(); i++) {
//        UIObject* w = ((UIObject*)_canvasData.selectedBoxes()->at(i));
//        QPoint pos = (((UIObject*)_canvasData.selectedBoxes()->at(i))->pos().toPoint()) + mapToParent((event->pos().toPoint() - box->dragOffset));

//        if (_gridSnap) {
//            pos.setX(ceil(pos.x() / _grid->gridStep()) * _grid->gridStep());
//            pos.setY(ceil(pos.y() / _grid->gridStep()) * _grid->gridStep());
//        }

//        w->move(pos);

//        //todo
//        viewport()->update();
//    }

//    resizeToObjects();
//    */
//}

void PatchWindowController::patchcord(UIObject* obj1, int outlet, UIObject* obj2, int inlet)
{

    if (obj1->serverObject() && obj2->serverObject()) {
        if (((UIBox*)obj1)->errorBox()) {
            qDebug() << "errorbox";
        };

        if (((UIBox*)obj2)->errorBox()) {
            qDebug() << "errorbox";
        };

        Port* outport = obj1->outletAt(outlet);
        Port* inport = obj2->inletAt(inlet);

        UIPatchcord* pc = new UIPatchcord(obj1, outport, obj2, inport);

        if (obj1->pdOutletType(outlet))
            pc->setPatchcordType(cm_pt_signal);

        qDebug("server patchcord");

        qDebug() << "patchcord: " << obj1->serverObject() << outlet << obj2->serverObject() << inlet;

        _serverCanvas->createPatchcord(obj1->serverObject(), outlet, obj2->serverObject(), inlet);
        _canvasData->addPatchcord(pc);

        //        cmp_patchcord((t_object*)obj1->pdObject(), outlet, (t_object*)obj2->pdObject(), inlet);
        //        _canvasData.addPatchcord(pc); //patchcords()->push_back(pc);

        _scene->addItem(pc);
    } else
        qDebug("canvas patchcord error");
}

//void PatchWindowController::patchcord(UIObject* obj1, UIItem* outport, UIObject* obj2, UIItem* inport)
//{

//    //todo
//    /*
//    int n1 = ((Port*)outport)->portIndex();
//    int n2 = ((Port*)inport)->portIndex();
//    patchcord(obj1, n1, obj2, n2);
//    */
//}

void PatchWindowController::slotSelectObject(UIObject* object)
{
    if (object->isSelected() && (_canvasData->selectedBoxes()->size() == 1)) {
        firstWindow()->canvasView()->slotObjectStartsEdit((void*)object);
        return;
    }

    _canvasData->selectBox(object);
}
void PatchWindowController::slotPatchcord(UIObject* src, int nOut, UIObject* dest, int nIn)
{
    patchcord(src, nOut, dest, nIn);
}

void PatchWindowController::slotMousePress(QPoint pos)
{
    _canvasData->deselectBoxes();
    _canvasData->deselectPatchcords();
}
void PatchWindowController::slotMouseMove(QPoint pos) {}
void PatchWindowController::slotMouseRelease(QPoint pos) {}

void PatchWindowController::slotDeselectObjects()
{
    _canvasData->deselectBoxes();
    _canvasData->deselectPatchcords();
}

void PatchWindowController::slotSelectionFrame(QPoint start, QPoint end)
{
    _canvasData->selectBoxesInFrame(start, end);
}

void PatchWindowController::slotMoveSelectedBoxes(QPoint eventPos)
{
    for (int i = 0; i < (int)_canvasData->selectedBoxes()->size(); i++) {
        UIObject* w = ((UIObject*)_canvasData->selectedBoxes()->at(i));

        // TODO
        QPoint pos = (((UIObject*)_canvasData->selectedBoxes()->at(i))->pos().toPoint()) + eventPos; //mapToParent((event->pos().toPoint() - box->dragOffset));

        if (firstWindow()->canvasView()->gridSnap()) {
            pos.setX(ceil(pos.x() / firstWindow()->canvasView()->gridStep()) * firstWindow()->canvasView()->gridStep());
            pos.setY(ceil(pos.y() / firstWindow()->canvasView()->gridStep()) * firstWindow()->canvasView()->gridStep());
        }

        w->move(pos);

        //todo
        firstWindow()->canvasView()->viewport()->update();
    }
}
}
