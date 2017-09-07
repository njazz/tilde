// (c) 2017 Alex Nadzharov
// License: GPL3

#include "PatchWindowController.h"
#include "PatchWindow.h"

#include "FileParser.h"
#include "FileSaver.h"

#include "CanvasData.h"
#include "CanvasView.h"

#include "UIObject.h"
#include "UIPatchcord.h"

#include "ApplicationController.h"

#include "ServerWorker.h"

#include "UIBox.h"

#include "PropertiesWindow.h"

#include "ArrangeObjects.h"

#include "UIObjectData.h"
#include "objectObserver.h"

//#include <pdServer.hpp>

#include "xpd-transition/xpd-headers.h"

#include "undocommands.h"

#include "SizeBox.h"

namespace tilde {

PatchWindowController::PatchWindowController(ApplicationController* appController) //replace with parent (appcontroller)
{
    qDebug() << "1";

    _scene = new QGraphicsScene();
    _observer = ObserverPtr(new Observer());

    _appController = appController;

    //_serverInstance = appController->mainServerInstance();
    appController->mainServerInstance()->registerObserver(_observer);

    _canvasData = new CanvasData();
    _serverCanvas = appController->mainServerInstance()->createCanvas();

    //_canvasData->setServerCanvas(_serverCanvas);

    qDebug() << "1";

    newWindow();

    // fix that
    if (mainWindow()->canvasView())
        connect(mainWindow()->canvasView(), &CanvasView::signalPopupMenu, this, &PatchWindowController::openPropertiesWindow);

    _boxOnlyCanvas = 0;
    _boxOnlyScene = 0;

    _parentObject = 0;

    _undoStack = new QUndoStack;

    qDebug() << "1";

    //PatchWindowController(appController, serverInstance()->createCanvas());
};

PatchWindowController::PatchWindowController(ApplicationController* appController, CanvasPtr canvas = 0)
{

    _scene = new QGraphicsScene();
    _observer = ObserverPtr(new Observer());

    _appController = appController;

    appController->mainServerInstance()->registerObserver(_observer);

    _canvasData = new CanvasData();
    _serverCanvas = canvas;

    _boxOnlyCanvas = 0;
    _boxOnlyScene = 0;

    _undoStack = new QUndoStack;

    newWindow();

    connect(mainWindow()->canvasView(), &CanvasView::signalPopupMenu, this, &PatchWindowController::openPropertiesWindow);

    // TODO
    mainWindow()->canvasView()->setEditMode(em_Locked);
};

CanvasPtr PatchWindowController::serverCanvas() { return _serverCanvas; }

UIBox* PatchWindowController::asUIBox()
{
    UIBox* ret = new UIBox();

    ret->setSubpatchController(this);

    return ret;
}

ObjectId PatchWindowController::serverCanvasAsObject()
{

    return _serverCanvas->id(); //_serverCanvas->toServerObject();
}

void PatchWindowController::enableObjectsOnParent(UIObject* parentObject)
{
    _parentObject = parentObject;

    syncObjectsOnParent();
}

void PatchWindowController::disableObjectsOnParent()
{
    _parentObject = 0;
}

QUndoStack* PatchWindowController::undoStack()
{
    return _undoStack;
}

void PatchWindowController::addObjectToParent(UIObject* src)
{

    UIObject* dest = copyObject(src);

    doCreateObject(dest);

    if (dest) {

        t_editMode* readOnly = new t_editMode;
        *readOnly = em_Locked;

        dest->setEditModeRef(readOnly); //_parentObject->getEditModeRef()
        dest->setParentItem(_parentObject);
    }
}

void PatchWindowController::syncObjectsOnParent()
{
    objectVec::iterator it;

    for (it = _canvasData->boxes()->begin(); it != _canvasData->boxes()->end(); ++it) {

        addObjectToParent(*it);
    }

    _parentObject->update();
}

//ProcessPtr PatchWindowController::serverInstance() {
//    return _appController->mainServerInstance();
//}

vector<PatchWindow*> PatchWindowController::windows() { return _windows; };
PatchWindow* PatchWindowController::mainWindow() { return _windows[0]; };
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

void PatchWindowController::setAppController(ApplicationController* a)
{
    _appController = a;
    mainWindow()->setAppController(a);
}

void PatchWindowController::doCreateObject(UIObject* uiObject)
{

    uiObject->setParentController(this);
    uiObject->setParentCanvasView(_windows[0]->canvasView());

    uiObject->observer()->setObject(uiObject);

    uiObject->setEditModeRef(_windows[0]->canvasView()->getEditModeRef());

    if (uiObject->serverObjectPtr()) {
        //uiObject->serverObjectPtr()->registerObserver(uiObject->observer());

        connect(uiObject, &UIObject::signalSendMessage, this, &PatchWindowController::slotSendMessageToObject);
    }

    uiObject->sync();

    connect(uiObject, &UIObject::selectBox, _windows[0]->canvasView(), &CanvasView::slotSelectBox);
    connect(uiObject, &UIObject::moveBox, _windows[0]->canvasView(), &CanvasView::slotMoveBox);

    connect(uiObject, &UIObject::signalObjectHoverEnter, this, &PatchWindowController::slotObjectHoverEnter);
    connect(uiObject, &UIObject::signalObjectHoverLeave, this, &PatchWindowController::slotObjectHoverLeave);

    connect(uiObject->sizeBox(), &SizeBox::resizeBoxEvent, this, &PatchWindowController::slotResizeBoxes);

    _canvasData->addUniqueBox(_canvasData->boxes(), uiObject);
    _scene->addItem(uiObject);

    if (_parentObject) {
        addObjectToParent(uiObject);
    }
}

UIObject* PatchWindowController::createObject(string name, QPoint pos)
{
    UIObject* ret; // = createObjectWithoutUndo(name,pos);

    undoCreateObject* undo = new undoCreateObject(this, QString(name.c_str()), pos);
    _undoStack->push(undo);
    emit signalEnableUndo(true);

    ret = undo->object();

    return ret;
}

UIObject* PatchWindowController::createObjectWithoutUndo(string name, QPoint pos)
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

    //applicationController::post("create: " + name);

    UIObject* uiObject = ObjectLoader::inst().createUIObject(name.c_str());

    if (!uiObject) {
        qDebug() << "bad ui object!";
        return 0;
    }

    //ObjectPtr serverObject = _appController->slotCreateObject(_serverCanvas, name); //emit signalCreateObject(_serverCanvas, name);

    ObjectId serverObject = _appController->slotCreateObject(_serverCanvas, name);

    if (!serverObject) {
        //qDebug() << "bad server object!";
        //        ApplicationController::post("bad server object!");
        //        return 0;
    }

    uiObject->setServerObjectId(serverObject);

    //uiObject->move(pos.x(), pos.y());

    uiObject->fromQString(name.c_str());

    uiObject->properties()->set("Position", pos);

    doCreateObject(uiObject);

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

void PatchWindowController::restoreUIBoxForSubpatch(PatchWindowController* controller, QString data, QPoint pos)
{
    UIObject* uiObject = controller->asUIBox();

    // already have server object here

    if (!uiObject) {
        qDebug() << "bad subpatch ui object!";
        return;
    }

    //uiObject->move(pos.x(), pos.y());

    uiObject->fromQString(data);
    uiObject->properties()->set("Position", pos);

    // TODO move inside controller->subpatchBox

    // XPD-TODO
    // uiObject->setServerObject(controller->serverCanvasAsObject());

    qDebug() << "server canvas as object:" << (long)controller->serverCanvasAsObject();

    doCreateObject(uiObject);

    return;
}

void PatchWindowController::deleteSinglePatchcord(UIPatchcord* p)
{
    qDebug() << "del single patchcord";

    shared_ptr<PdCanvas> p_ = static_pointer_cast<PdCanvas, Canvas>(_serverCanvas);

    qDebug() << (long)p->obj1()->serverObjectId() << " : " << (long)p->obj2()->serverObjectId() << " : " << p->outletIndex() << " : " << p->inletIndex();

    bool r = p_->disconnect(p->obj1()->serverObjectId(), p->outletIndex(), p->obj2()->serverObjectId(), p->inletIndex());

    if (!r)
        qDebug() << "failed!";

    _scene->removeItem(p);
    p->remove();
    _canvasData->deletePatchcord(p);
    _scene->update();
}

//bool PatchWindowController::patchcord(UIObject* src, int out, UIObject* dest, int in){};
void PatchWindowController::deletePatchcordsForObject(UIObject* o)
{
    // TODO
    deletePatchcordsFor((UIItem*)o);
};

void PatchWindowController::deleteObject(UIObject* o)
{
    undoDeleteObject* undo = new undoDeleteObject(this, o);
    _undoStack->push(undo);
    emit signalEnableUndo(true);
}

void PatchWindowController::deleteObjectWithoutUndo(UIObject* o)
{
    //    _canvasData->deselectBoxes();
    //    _canvasData->selectBox(o);
    //    deleteSelectedObjects();

    deletePatchcordsFor(o);

    _scene->removeItem(o);
    updateViewports();

    _canvasData->boxes()->erase(std::remove(_canvasData->boxes()->begin(), _canvasData->boxes()->end(), o), _canvasData->boxes()->end());
};
//
//bool PatchWindowController::syncData(ServerObject* serverObject, UIObject* uiObject){};
//
void PatchWindowController::deleteSelectedObjects(vector<UIObject*>){};
void PatchWindowController::deleteSelectedPatchcords(vector<UIPatchcord*>){};
//

void PatchWindowController::selectPatchcordsForSelectedBoxes()
{
    patchcordVec::iterator it;

    objectVec::iterator objIt;

    for (objIt = _canvasData->boxes()->begin(); objIt != _canvasData->boxes()->end(); ++objIt) {

        UIObject* obj = *objIt;

        for (it = _canvasData->patchcords()->begin(); it != _canvasData->patchcords()->end(); ++it) {
            UIPatchcord* p = *it;

            if ((p->obj1() == obj) || (p->obj2() == obj)) {
                //p->select();
                _canvasData->selectPatchcord(p);
            }
        }
    }
}

////
/// \brief first save of the patch
void PatchWindowController::menuSave()
{
    QString fname;

    if ((_canvasData->fileName() != "") && (!_canvasData->firstSave()))
        fname = _canvasData->fileName();
    else
        fname = QFileDialog::getSaveFileName(_windows[0], QString("Save patch as..."), QString("~/"), QString("*.pd"), 0, 0);

    doSave(fname);
}

void PatchWindowController::menuSaveAs()
{
    QString fname = QFileDialog::getSaveFileName(_windows[0], QString("Save patch as..."), QString("~/"), QString("*.pd"), 0, 0);

    doSave(fname);
}

void PatchWindowController::menuCut()
{
    selectPatchcordsForSelectedBoxes();
    dataCut();
};

void PatchWindowController::menuCopy()
{
    selectPatchcordsForSelectedBoxes();
    dataCopy();
};

void PatchWindowController::menuPaste()
{
    dataPaste();
};

void PatchWindowController::menuDuplicate()
{
    dataDuplicate();
};

void PatchWindowController::menuDelete()
{
    deleteSelectedObjects();
    deleteSelectedPatchcords();
};

void PatchWindowController::menuSelectAll()
{
    dataSelectAllObjects();
};

void PatchWindowController::menuUndo()
{
    //serverInstance()->
    ApplicationController::post("menu undo stub");
    _undoStack->undo();
    emit signalEnableRedo(_undoStack->canRedo());
}

void PatchWindowController::menuRedo()
{
    //serverInstance()->
    ApplicationController::post("menu undo stub");
    _undoStack->redo();

    emit signalEnableUndo(_undoStack->canUndo());
}

void PatchWindowController::openPropertiesWindow()
{
    PropertiesWindow* pw = new PropertiesWindow(_canvasData->properties());
    pw->setWindowController(this);
    pw->show();
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

    qDebug() << "*** copy\n"
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

    int objCount = canvasData()->boxes()->size();

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

            if (subList.at(1) == "connect") {
                if (subList.size() >= 4)
                    if (objCount > 0) {
                        int x = ((QString)subList.at(2)).toInt();
                        int y = ((QString)subList.at(4)).toInt();

                        subList[2] = QString::number(x + objCount);
                        subList[4] = QString::number(y + objCount);
                    }
            }

            qDebug() << "paste" << subList;

            Clipboard::inst()->setStringAt(i, subList.join(" "));

            PatchWindowController* tc = FileParser::parserWindowController();
            FileParser::setParserWindowController(this);
            FileParser::parseQString(Clipboard::inst()->at(i));
            FileParser::setParserWindowController(tc);
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

//void PatchWindowController::dataDeselectAll()
//{
//    _canvasData->deselectBoxes();
//    _canvasData->deselectPatchcords();
//}

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

        deleteObject(box);

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

            //            _scene->removeItem(p);
            //            //qDebug() << "remove item";

            //            it = _canvasData->patchcords()->erase(it);

            deleteSinglePatchcord(p);

            p->remove();

        } else
            ++it;
    }

    _canvasData->selectedPatchcords()->clear();
    //update();
    mainWindow()->canvasView()->update();
};

void PatchWindowController::deletePatchcordsFor(UIItem* obj)
{
    //for //(int i=0;i<data_.patchcords()->size();i++)
    std::vector<UIPatchcord*>::iterator it;
    for (it = _canvasData->patchcords()->begin(); it != _canvasData->patchcords()->end();) {

        UIPatchcord* p = *it;

        if (p->isConnectedToObject(obj)) {

            //ApplicationController::post("remove patchcord");

            //            undoDeletePatchcord* undo = new undoDeletePatchcord(this, p);
            //            _undoStack->push(undo);
            //            emit signalEnableUndo(true);

            _scene->removeItem(p);

            //_canvasData->patchcords()->erase(std::remove(_canvasData->patchcords()->begin(), _canvasData->patchcords()->end(), *it), _canvasData->patchcords()->end());
            //canvasData()->deletePatchcord(p);

            deleteSinglePatchcord(p);

            //p->remove();

            _scene->update();
            //it = _canvasData->patchcords()->erase(it);
        } else
            ++it;
    }

    updateViewports();
}

void PatchWindowController::setFileName(QString fname)
{
    // TODO
    //firstWindow()->setWindowFilePath(fname);

    _canvasData->setFileName(fname);
    mainWindow()->setWindowTitle(fname);
}
void PatchWindowController::setNewFileName(QString fname)
{
    setFileName(fname);
    _canvasData->setFirstSave(true);
}

// ============

void PatchWindowController::selectBox(UIItem* box)
{
    qDebug() << "canvas selectbox";

    _canvasData->selectBox((UIObject*)box);

    mainWindow()->canvasView()->viewport()->update();
}

void PatchWindowController::sizeBoxShow(UIObject* object)
{
    //z-position fix
    //    if (!firstWindow()->canvasView()->sizeBox()->scene())
    //        firstWindow()->canvasView()->scene()->addItem(firstWindow()->canvasView()->sizeBox());

    //    firstWindow()->canvasView()->sizeBox()->move(
    //        object->pos().toPoint().x() + object->boundingRect().width() - 7,
    //        object->pos().toPoint().y() + object->boundingRect().height() - 7);

    //    firstWindow()->canvasView()->sizeBox()->show();
}

void PatchWindowController::sizeBoxHide()
{
    //    if (firstWindow()->canvasView()->sizeBox()->scene())
    //        firstWindow()->canvasView()->scene()->removeItem(firstWindow()->canvasView()->sizeBox());

    //    firstWindow()->canvasView()->sizeBox()->hide();
}

void PatchWindowController::enableUndo(bool v)
{
    emit signalEnableUndo(v);
}

void PatchWindowController::slotObjectHoverEnter()
{

    UIObject* b = (UIObject*)QObject::sender();
    sizeBoxShow(b);
}

void PatchWindowController::slotObjectHoverLeave()
{
    //sizeBoxHide();
}

void PatchWindowController::createPatchcord(UIObject* obj1, int outlet, UIObject* obj2, int inlet)
{
    undoCreatePatchcord* undo = new undoCreatePatchcord(this, obj1, outlet, obj2, inlet);
    _undoStack->push(undo);
    emit signalEnableUndo(true);
}

UIPatchcord* PatchWindowController::createPatchcordWithoutUndo(UIObject* obj1, int outlet, UIObject* obj2, int inlet)
{

    if (obj1->serverObjectId() && obj2->serverObjectId()) {
        if (((UIBox*)obj1)->errorBox()) {
            qDebug() << "starting object is errorbox";
            return 0;
        };

        if (((UIBox*)obj2)->errorBox()) {
            qDebug() << "errorbox";
            return 0;
        };

        Port* outport = obj1->outletAt(outlet);
        Port* inport = obj2->inletAt(inlet);

        UIPatchcord* pc = new UIPatchcord(obj1, outport, obj2, inport);

        _serverCanvas->connect(obj1->serverObjectId(), outlet, obj2->serverObjectId(), inlet);

        if (obj1->pdOutletClass(outlet))
            pc->setPatchcordType(cm_pt_signal);

        //qDebug("server patchcord");

        _canvasData->addPatchcord(pc);

        _scene->addItem(pc);

        return pc;
    } else
        qDebug("canvas patchcord error");

    return 0;
}

void PatchWindowController::slotSelectObject(UIObject* object)
{
    if (object->isSelected() && (_canvasData->selectedBoxes()->size() == 1)) {
        mainWindow()->canvasView()->slotObjectStartsEdit((void*)object);
        return;
    }

    if (_canvasData->selectedBoxes()->size() < 2)
        _canvasData->selectBox(object);
}
void PatchWindowController::slotPatchcord(UIObject* src, int nOut, UIObject* dest, int nIn)
{
    createPatchcord(src, nOut, dest, nIn);
}

void PatchWindowController::slotMousePress(QPoint pos)
{
    // this slot is probably redundant

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

        if (mainWindow()->canvasView()->gridSnap()) {
            pos.setX(ceil(pos.x() / mainWindow()->canvasView()->gridStep()) * mainWindow()->canvasView()->gridStep());
            pos.setY(ceil(pos.y() / mainWindow()->canvasView()->gridStep()) * mainWindow()->canvasView()->gridStep());
        }

        //w->move(pos);

        w->properties()->set("Position", pos);
    }

    //todo
    mainWindow()->canvasView()->viewport()->update();
}

void PatchWindowController::slotResizeBoxes(int dx, int dy)
{
    // TODO

    for (int i = 0; i < _canvasData->selectedBoxes()->size(); i++) {
        UIObject* o = (UIObject*)_canvasData->selectedBoxes()->at(i);

        QRect r = o->boundingRect().toRect();

        if (o->objectData()->objectSizeMode() != os_Fixed)
            o->setWidth(o->boundingRect().width() + dx);
        if (o->objectData()->objectSizeMode() == os_Free)
            o->setHeight(o->boundingRect().height() + dy);

        if (o->objectData()->objectSizeMode() == os_Square) {
            o->setHeight(o->boundingRect().width());
        }

        o->PROPERTY_SET("Size", o->boundingRect().size().toSize());
    }
}

void PatchWindowController::slotAlignLeft()
{
    ArrangeObjects::alignLeft(_canvasData->selectedBoxes());
}

void PatchWindowController::slotAlignRight()
{
    ArrangeObjects::alignRight(_canvasData->selectedBoxes());
}

void PatchWindowController::slotAlignTop()
{
    ArrangeObjects::alignTop(_canvasData->selectedBoxes());
}

void PatchWindowController::slotAlignBottom()
{
    ArrangeObjects::alignBottom(_canvasData->selectedBoxes());
}

void PatchWindowController::slotAlignCenter()
{
    ArrangeObjects::alignCenter(_canvasData->selectedBoxes());
}

void PatchWindowController::slotHDistribute()
{
    ArrangeObjects::distributeHorizontal(_canvasData->selectedBoxes());
}
void PatchWindowController::slotVDistribute()
{
    ArrangeObjects::distributeVertical(_canvasData->selectedBoxes());
}

void PatchWindowController::slotRecentMenuAction()
{
    QAction* a = (QAction*)QObject::sender();

    openFile(a->text());
}

void PatchWindowController::slotSendMessageToObject(ObjectId object, QString msg)
{
    UIObject* obj = (UIObject*)QObject::sender();
    QString dest = obj->properties()->get("SendSymbol")->asQString();

    // XPD-TODO
    /*
    if (dest != "")
        ServerInstance::sendMessage(dest.toStdString(), msg.toStdString());
        */

    // XPD-TODO

    PdObject* objectP = const_cast<PdObject*>(reinterpret_cast<const PdObject*>(serverCanvas()->objects().findObject(object)));

    if (msg.split(" ").first() == "bang") {
        objectP->sendBang();
        return;
    }

    bool ok = false;
    float f = msg.toFloat(&ok);
    if (ok) {
        objectP->sendFloat(f);
        return;
    }

    if (msg.split(" ").length() == 1) {
        objectP->sendSymbol(msg.toStdString());
        return;
    }

    // lists otherwise
    Arguments args;
    // TODO replace

    QStringList sl = msg.split(" ");
    for (int i=0;i<sl.size();i++)
    {
        QString ms = sl.at(i);

        bool ok = false;
        float f = ms.toFloat(&ok);
        if (ok)
            args.add(f);
        else
            args.add(ms.toStdString());
    }

    qDebug()<< msg;
    //objectP->sendList(args);

    objectP->sendStringAsList(msg.toStdString());
}
}
