// (c) 2017 Alex Nadzharov
// License: GPL3

#include "PatchWindowController.h"

#include "CanvasData.h"

#include "FileParser.h"
#include "FileSaver.h"

namespace qtpd {

PatchWindowController::PatchWindowController(ServerInstance* instance) //replace with parent (appcontroller)
{
    //_canvasData->serverCanvas = instance->createCanvas();
    _scene = new QGraphicsScene();
    _observer = new Observer();
    instance->registerObserver(_observer);
    _serverInstance = instance;
    _canvasData = new CanvasData();

    _serverCanvas = _serverInstance->createCanvas();
    _canvasData->setServerCanvas(_serverCanvas);

};

ServerInstance* PatchWindowController::instance() { return _serverInstance; }

//CanvasData* PatchWindowController::canvasData() { return _canvasData; }

vector<PatchWindow*> PatchWindowController::windows() { return _windows; };
vector<QGraphicsScene*> PatchWindowController::scenes() { return _scenes; };

PatchWindow* PatchWindowController::newWindow()
{
    PatchWindow* ret = PatchWindow::newWindow();

    ret->setController(this);

    ret->show();

    _windows.push_back(ret);
    //ret->canvasView()->setScene(_scene);
    _scene = ret->canvasView()->scene();

    return ret;
}

void PatchWindowController::openFile(QString fileName)
{

    FileParser::open(fileName, _canvasData);
}

void PatchWindowController::saveFile(QString fileName)
{
    //todo dialog
    FileSaver::save(fileName, _canvasData);
}

void PatchWindowController::saveFileDialog(){};

PatchWindowController* PatchWindowController::createSubpatchWindowController(){};
//
void PatchWindowController::createObjectMaker(){};
//
UIObject* PatchWindowController::createObject(string name, QPoint pos)
{
    qDebug("* create object *");

    if (!_canvasData) {
        qDebug("** canvas data error!");
        return 0;
    }
    if (!_canvasData->serverCanvas()) {
        qDebug("** server canvas error!");
        return 0;
    }

    ServerObject* serverObject = _canvasData->serverCanvas()->createObject(name);

    UIObject* uiObject = ObjectLoader::inst().createUIObject(name.c_str());

    uiObject->setParentCanvasView(_windows[0]->canvasView());
    uiObject->setServerObject(serverObject);
    uiObject->sync();

    uiObject->setEditModeRef(_windows[0]->canvasView()->getEditModeRef());



    // TODO

    //connect(uiObject, &UIObject::selectBox, _windows[0]->canvasView(), &CanvasView::s_SelectBox);
    //connect(uiObject, &UIObject::moveBox, _windows[0]->canvasView(), &CanvasView::s_MoveBox);

    //uiObject->setEditModeRef( _windows[0]->canvasEditMode()); //Canvas::getEditModeRef());
    //connect(uiObject, &UIObject::editObject, this, &CanvasView::objectStartsEdit);

    uiObject->move(pos.x(), pos.y());
    _canvasData->addUniqueBox(_canvasData->boxes(), uiObject);
    _scene->addItem(uiObject);

    connect(uiObject, &UIObject::selectBox, _windows[0]->canvasView(), &CanvasView::s_SelectBox);
    connect(uiObject, &UIObject::moveBox, _windows[0]->canvasView(), &CanvasView::s_MoveBox);


    // check port count
    /*
    if (list.count()) {
        if (
            (list.at(0) == "inlet") || (list.at(0) == "inlet~") || (list.at(0) == "outlet") || (list.at(0) == "outlet~")) {
            //qDebug("ports");
            emit updatePortCount();
            //

            portLocalCountUpdated();
        }
    }
    */

    //resizeToObjects();

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

bool PatchWindowController::patchcord(UIObject* src, int out, UIObject* dest, int in){};
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
}
