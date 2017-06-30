// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef PATCHWINDOWCONTROLLER
#define PATCHWINDOWCONTROLLER

// TODO
#include <pdServer.hpp>

#include <QObject>
#include <QPoint>

class QGraphicsScene;
class QGraphicsSceneMouseEvent;

namespace qtpd {

class CanvasView;
class CanvasData;
class PatchWindow;
class UIObject;
class UIPatchcord;
class ApplicationController;

class UIItem;
class PatchWindowController;

class UIBox;

// STUB
//class ControllerObserver : public Observer
//{
//private:
//    PatchWindowController* _patchController;
//public:
//    void setPatchController(PatchWindowController* c){_patchController = c;}
//    virtual void update()
//    {
//        //something

//    };
//}

class PatchWindowController : public QObject {
    Q_OBJECT

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

    void doCreateObject(UIObject* uiObject);

    CanvasView* _boxOnlyCanvas;
    QGraphicsScene* _boxOnlyScene;

public:
    PatchWindowController(ApplicationController* appController); //replace with parent (appcontroller)

    // for subpatches
    PatchWindowController(ApplicationController* appController, ServerCanvas* canvas);

    //PatchWindowController* createSubpatchWindowController();

    //new
    UIBox* subpatchBox();
    ServerObject* serverCanvasAsObject();

    CanvasView* boxOnlyCanvas(); // for GOP functionality

    ServerInstance* serverInstance();

    void setAppController(ApplicationController* a);
    ApplicationController* appController() { return _appController; }

    CanvasData* canvasData() { return _canvasData; };

    vector<PatchWindow*> windows();
    PatchWindow* firstWindow();

    // reserved
    // vector<QGraphicsScene*> scenes();

    PatchWindow* newWindow();

    //
    // UNUSED
    bool syncData(ServerObject* serverObject, UIObject* uiObject);

    void openFile(QString fileName);
    void saveFile(QString fileName);
    void saveFileDialog();

    //
    UIObject* createObject(string name, QPoint pos);
    void creatBoxForSubpatch(PatchWindowController* controller, QString data, QPoint pos);

    //
    void patchcord(UIObject* src, int out, UIObject* dest, int in);

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

    void menuCut();
    void menuCopy();
    void menuPaste();
    void menuDuplicate();
    void menuDelete();
    void menuSelectAll();

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

signals:
    ServerObject* signalCreateObject(ServerCanvas* canvas, string name);
};
}

#endif // CM_PDLINK_H
