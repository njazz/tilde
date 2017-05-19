#ifndef CLIENTAPIPROTOTYPE_H
#define CLIENTAPIPROTOTYPE_H

#include <QGraphicsObject>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QMainWindow>

#include <QtGui>

#include "serverAPIprototype.h"

using namespace std;

class UIItem : QGraphicsObject // !! QGraphicsItem
{
public:
    bool selected();
    bool hover();
    bool editMode();
    QSize size();
    QPoint position();
    QColor bgColor();
};

class UISizeBox : UIItem {
public:
    QPoint prevPos;
    enum objectSizeType { osType1,
        osType2 };
};

class UIPort : UIItem {
public:
    int portType;
    int portClass; // message, signal
    int portIndex;
};

class CanvasView;
class CanvasData;

class UIObject : UIItem {
public:
    vector<UIPort*> inlets();
    vector<UIPort*> outlets();
    UISizeBox* sizeBox();
    void popupMenu(); // ?
    CanvasView* parentCanvas();
    CanvasData* subCanvasData();
};

class UINewPatchcord : QGraphicsObject {
public:
    QPoint startPoint();
    QPoint endPoint();
};

class UIPatchcord : UIItem {
public:
    UIObject* source;
    UIObject* dest;
    UIPort* sourcePort;
    UIPort* destPort;
};

class CanvasData {
public:
    ServerCanvas* serverCanvas;
    vector<UIObject*> objects;
    vector<UIPatchcord*> patchcords;
    vector<UIObject*> selectedObjects;
    vector<UIPatchcord*> selectedPatchcords;
    string clipboardString;
};

class CanvasView : QGraphicsView {
public:
    bool gridEnabled;
    int gridStep;
    bool editMode;
    QGraphicsScene* scene();
};

class PatchWindow : QMainWindow {
public:
    CanvasView* canvas;
};

typedef void (*loaderFunction)();

class ObjectLoader {
public:
    void registerUIClass(string className, loaderFunction f);
    static UIObject* createUIObject(string name);
};

class PatchWindowController;

class ObjectMaker : QWidget {
    Q_OBJECT
public:
    PatchWindowController* parentController;
signals:
    void doneEditing();
};

class PatchWindowController {
    CanvasData* _canvasData;

public:
    PatchWindowController()
    {
        _canvasData->serverCanvas = instance->createCanvas();
        // create scene
        // register observer
    };

    ServerInstance* instance;
    CanvasData* canvasData;
    vector<PatchWindow*> windows;
    vector<QGraphicsScene*> scenes;
    void loadFile();
    void saveFile();
    PatchWindowController* createSubpatchWindow();
    //
    void createObjectMaker();
    //
    bool createObject(string name, QPoint pos)
    {
        ServerObject* serverObject = _canvasData->serverCanvas->createObject(name);
        UIObject* uiObject = ObjectLoader::createUIObject(name);
        syncData(serverObject, uiObject);
    };

    bool connect(UIObject* src, int out, UIObject* dest, int in);
    void deletePatchcordsForObject(UIObject* o);
    void deleteObject(UIObject* o);
    //
    bool syncData(ServerObject* serverObject, UIObject* uiObject);
    //
    void deleteSelectedObjects(vector<UIObject*>);
    void deleteSelectedPatchcords(vector<UIPatchcord*>);
    //
    void clickPort(); //?
    //
    void update(); // <<-- from observer
};

class FileLoader {
    CanvasData* openFile(string);
};

class ControllerObserver : Observer {
public:
    ControllerObserver(PatchWindowController* Controller = 0){};

    virtual void update(); // controller->updateDspOn()
};

class ApplicationController {
private:
    TheServer* _server;

public:
    ServerInstance* newServerInstance();
    PatchWindow* newCanvas();
    void loadFile();
    PatchWindow* createPatchWindow();
    ControllerObserver* controllerObserver();
};

#endif // CLIENTAPIPROTOTYPE_H
