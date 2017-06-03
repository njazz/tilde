// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef PATCHWINDOWCONTROLLER
#define PATCHWINDOWCONTROLLER

#include "CanvasData.h"
#include "PatchWindow.h"

#include "UIObject.h"
#include "UIPatchcord.h"

// TODO
#include "../API_prototype/serverAPIprototype.h"

//#include "ControllerObserver.h"

namespace qtpd {

//class CanvasData;

class PatchWindowController : public QObject {
private:
    CanvasData* _canvasData;
    QGraphicsScene* _scene;
    Observer* _observer; //ControllerObserver
    ServerInstance* _serverInstance;
    ServerCanvas* _serverCanvas;

    vector<PatchWindow*> _windows;
    vector<QGraphicsScene*> _scenes;

    void doSave(QString fileName);

public:
    PatchWindowController(ServerInstance* instance); //replace with parent (appcontroller)

    PatchWindowController* createSubpatchWindowController();

    ServerInstance* instance();

    CanvasData* canvasData();

    vector<PatchWindow*> windows();
    vector<QGraphicsScene*> scenes();

    PatchWindow* newWindow();

    void openFile(QString fileName);

    void saveFile(QString fileName);
    void saveFileDialog();

    //

    // ----------

    void deleteSelectedObjects()
    {
        qDebug("del selected");

        objectVec::iterator it;
        for (it = _canvasData->selectedBoxes()->begin(); it != _canvasData->selectedBoxes()->end(); ++it)

        {
            //
            UIObject* box = *it;
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

            deletePatchcordsFor(box);

            _scene->removeItem(box);
            updateViewports();

            _canvasData->boxes()->erase(std::remove(_canvasData->boxes()->begin(), _canvasData->boxes()->end(), *it), _canvasData->boxes()->end());
            //selectionData_.boxes()->erase(std::remove(selectionData_.boxes()->begin(), selectionData_.boxes()->end(), *it), selectionData_.boxes()->end());
        }

        _canvasData->selectedBoxes()->clear();
    }

    void deletePatchcordsFor(UIItem* obj)
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
    //
    void createObjectMaker();
    //
    bool createObject(string name, QPoint pos);

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

    //
    void updateViewports()
    {
        vector<PatchWindow*>::iterator it;
        for (it = _windows.begin(); it != _windows.end(); ++it) {
            PatchWindow* w = *it;

            w->canvasView()->viewport()->update();
        }
    }

public slots:
    void menuSave();
    void menuSaveAs();
};
}

#endif // CM_PDLINK_H
