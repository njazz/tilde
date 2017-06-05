// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef PATCHWINDOWCONTROLLER
#define PATCHWINDOWCONTROLLER

// TODO
#include "../API_prototype/serverAPIprototype.h"

#include <QObject>

class QGraphicsScene;
class QGraphicsSceneMouseEvent;

namespace qtpd {

class CanvasData;
class PatchWindow;
class UIObject;
class UIPatchcord;
class ApplicationController;

class UIItem;

class PatchWindowController : public QObject {
private:
    ApplicationController* _appController;

    CanvasData* _canvasData;
    Observer* _observer; //ControllerObserver

    //ServerInstance* _serverInstance;
    ServerCanvas* _serverCanvas;

    vector<PatchWindow*> _windows;
    QGraphicsScene* _scene;

    // reserved
    // vector<QGraphicsScene*> _scenes;

    // temporary
    void doSave(QString fileName);


public:
    PatchWindowController(ApplicationController* appController); //replace with parent (appcontroller)

    PatchWindowController* createSubpatchWindowController();

    ServerInstance* serverInstance();

    void setAppController(ApplicationController* a);
    CanvasData* canvasData() { return _canvasData; };

    vector<PatchWindow*> windows();
    PatchWindow* firstWindow();

    // reserved
    // vector<QGraphicsScene*> scenes();

    PatchWindow* newWindow();

    //
    bool syncData(ServerObject* serverObject, UIObject* uiObject);

    void openFile(QString fileName);
    void saveFile(QString fileName);
    void saveFileDialog();
    //
    //void createObjectMaker();
    //
    UIObject* createObject(string name, QPoint pos);
    //
    void patchcord(UIObject* src, int out, UIObject* dest, int in);
    //void patchcord(UIObject* obj1, UIItem* outport, UIObject* obj2, UIItem* inport);

    // ------------
    void deleteSelectedObjects();

    // TODO
    void deleteSelectedPatchcords();
    void deletePatchcordsFor(UIItem* obj);
    void deletePatchcordsForObject(UIObject* o);
    void deleteObject(UIObject* o);
    void deleteSelectedObjects(vector<UIObject*>);
    void deleteSelectedPatchcords(vector<UIPatchcord*>);

    // ------------
    void dataCut();
    void dataCopy();
    void dataDuplicate();
    void dataPaste();
    void dataSelectAllObjects();

    //
    void clickPort(); //?
    //
    void update(); // <<-- from observer
    //
    void updateViewports();

    // =======================
    void setFileName(QString fname);

    // moved from canvas-view
    void selectBox(UIItem* box);

    void moveSelectedBoxes(QPoint eventPos);

public slots:
    void menuSave();
    void menuSaveAs();

    void menuCut()
    {
        dataCut();
    };

    void menuCopy()
    {
        dataCopy();
    };

    void menuPaste()
    {
        dataPaste();
    };

    void menuDuplicate()
    {
        dataDuplicate();
    };

    void menuDelete()
    {
        deleteSelectedObjects();
        deleteSelectedPatchcords();
    };

    void menuSelectAll()
    {
        dataSelectAllObjects();
    };

    //
//    void signalSelectBox(UIItem* box, QGraphicsSceneMouseEvent* event);
//    void signalMoveBox(UIItem* box, QGraphicsSceneMouseEvent* event);

private slots:
    void slotSelectObject(UIObject* object);
    void slotPatchcord(UIObject* src, int nOut, UIObject* dest, int nIn);

    void slotMousePress(QPoint pos);
    void slotMouseMove(QPoint pos);
    void slotMouseRelease(QPoint pos);

    void slotDeselectObjects();

    void slotSelectionFrame(QPoint start, QPoint end);
    void slotMoveSelectedBoxes(QPoint eventPos);
};
}

#endif // CM_PDLINK_H
