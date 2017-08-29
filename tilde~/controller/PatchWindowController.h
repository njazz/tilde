// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef PATCHWINDOWCONTROLLER
#define PATCHWINDOWCONTROLLER

// TODO
//#include <pdServer.hpp>

#include <QObject>
#include <QPoint>
#include <QUndoStack>

class QGraphicsScene;
class QGraphicsSceneMouseEvent;


#include "xpd-transition/xpd-headers.h"

//namespace xpd{
//class Observer;
//class Canvas;
//typedef void* ProcessPtr;
//class Object;
//}

using namespace xpd;

using namespace std;

namespace tilde {

class CanvasView;
class CanvasData;
class PatchWindow;
class UIObject;
class UIPatchcord;
class ApplicationController;

class UIItem;
class PatchWindowController;

class UIBox;

////
/// \brief The Patch window controller
///
class PatchWindowController : public QObject {
    Q_OBJECT

private:
    ApplicationController* _appController;

    CanvasData* _canvasData;
    ObserverPtr _observer; //ControllerObserver

    //ServerInstance* _serverInstance;
    CanvasPtr _serverCanvas;

    vector<PatchWindow*> _windows;
    QGraphicsScene* _scene;

    // reserved
    // vector<QGraphicsScene*> _scenes;

    // temporary
    void doSave(QString fileName);
    void doCreateObject(UIObject* uiObject);

    CanvasView* _boxOnlyCanvas;
    QGraphicsScene* _boxOnlyScene;
    UIObject* _parentObject;

    //TODO
    CanvasView* _activeCanvasView;

    QUndoStack* _undoStack;

public:
    PatchWindowController(ApplicationController* appController);
    PatchWindowController(ApplicationController* appController, CanvasPtr canvas); ///> this is for subpatches

    // ----------------------

    //ProcessPtr serverInstance();
    ObjectId serverCanvasAsObject();
    CanvasPtr serverCanvas();

    void setAppController(ApplicationController* a);
    ApplicationController* appController() { return _appController; }

    CanvasData* canvasData() { return _canvasData; };

    PatchWindow* mainWindow();

    vector<PatchWindow*> windows();     ///> unused/reserved
    PatchWindow* newWindow();           ///> unused/reserved

    // ----------------------

    UIObject* createObject(string name, QPoint pos);
    UIObject* createObjectWithoutUndo(string name, QPoint pos);

    void restoreUIBoxForSubpatch(PatchWindowController* controller, QString data, QPoint pos); ///> used in patch parsing with 'restore'

    void createPatchcord(UIObject* src, int out, UIObject* dest, int in);
    UIPatchcord* createPatchcordWithoutUndo(UIObject* src, int out, UIObject* dest, int in);

    // ------------

    void syncObjectsOnParent();
    UIObject* copyObject(UIObject* src);
    void addObjectToParent(UIObject* src);

    UIBox* asUIBox();

    void enableObjectsOnParent(UIObject* parentObject); // for GOP functionality
    void disableObjectsOnParent();

    // ----------------------

    QUndoStack* undoStack();

    // ----------------------

    void openFile(QString fileName);
    void saveFile(QString fileName);
    void saveFileDialog();

    void deleteSelectedPatchcords();
    void deletePatchcordsFor(UIItem* obj);
    void deletePatchcordsForObject(UIObject* o);

    void deleteObject(UIObject* o);
    void deleteObjectWithoutUndo(UIObject* o);

    void deleteSelectedObjects(vector<UIObject*>);
    void deleteSelectedObjects(); //

    void deleteSinglePatchcord(UIPatchcord* p);
    void deleteSelectedPatchcords(vector<UIPatchcord*>);

    void selectPatchcordsForSelectedBoxes();

    // ------------
    void dataCut();
    void dataCopy();
    void dataDuplicate();
    void dataPaste();
    void dataSelectAllObjects();

    // -----------------------
    void updateViewports();

    // =======================
    void setFileName(QString fname);
    void setNewFileName(QString fname);

    // moved from canvas-view
    void selectBox(UIItem* box);
    void moveSelectedBoxes(QPoint eventPos);

    void sizeBoxShow(UIObject* object);
    void sizeBoxHide();

    void enableUndo(bool v);

    //

    void sendMessageToObject(ObjectId object, QString msg);

public slots:
    void menuSave();
    void menuSaveAs();

    void menuCut();
    void menuCopy();
    void menuPaste();
    void menuDuplicate();
    void menuDelete();
    void menuSelectAll();

    void menuUndo();
    void menuRedo();

    void openPropertiesWindow();

    //
    void slotAlignLeft();
    void slotAlignRight();

    void slotAlignTop();
    void slotAlignBottom();

    void slotAlignCenter();

    void slotHDistribute();
    void slotVDistribute();

    void slotRecentMenuAction();

    void slotObjectHoverEnter();
    void slotObjectHoverLeave();

private slots:

    void slotSelectObject(UIObject* object);
    void slotPatchcord(UIObject* src, int nOut, UIObject* dest, int nIn);

    void slotMousePress(QPoint pos);
    void slotMouseMove(QPoint pos);
    void slotMouseRelease(QPoint pos);

    void slotDeselectObjects();

    void slotSelectionFrame(QPoint start, QPoint end);
    void slotMoveSelectedBoxes(QPoint eventPos);

    void slotResizeBoxes(int dx, int dy);

signals:

    Object* signalCreateObject(Canvas* canvas, string name); // check that

    void signalEnableUndo(bool v);
    void signalEnableRedo(bool v);
};
}

#endif // CM_PDLINK_H
