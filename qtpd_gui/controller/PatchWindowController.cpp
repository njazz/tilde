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
    //_canvasData = new CanvasData();
};

ServerInstance* PatchWindowController::instance() { return _serverInstance; }

//CanvasData* PatchWindowController::canvasData() { return _canvasData; }

vector<PatchWindow*> PatchWindowController::windows() { return _windows; };
vector<QGraphicsScene*> PatchWindowController::scenes() { return _scenes; };

PatchWindow* PatchWindowController::newWindow()
{
    PatchWindow* ret = PatchWindow::newWindow();

    _windows.push_back(ret);
    ret->canvas->setScene(_scene);

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
bool PatchWindowController::createObject(string name, QPoint pos){
    //ServerObject* serverObject = _canvasData->serverCanvas->createObject(name);
    //UIObject* uiObject = ObjectLoader::createUIObject(name);
    //syncData(serverObject, uiObject);
};

bool PatchWindowController::connect(UIObject* src, int out, UIObject* dest, int in){};
void PatchWindowController::deletePatchcordsForObject(UIObject* o){};
void PatchWindowController::deleteObject(UIObject* o){};
//
bool PatchWindowController::syncData(ServerObject* serverObject, UIObject* uiObject){};
//
void PatchWindowController::deleteSelectedObjects(vector<UIObject*>){};
void PatchWindowController::deleteSelectedPatchcords(vector<UIPatchcord*>){};
//
void PatchWindowController::clickPort(){}; //?
//
void PatchWindowController::update(){}; // <<-- from observer
}
