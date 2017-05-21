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

class PatchWindowController {
    CanvasData* _canvasData;
    QGraphicsScene* _scene;
    Observer* _observer;    //ControllerObserver
    ServerInstance* _instance;

    vector<PatchWindow*> _windows;
    vector<QGraphicsScene*> _scenes;

public:
    PatchWindowController(ServerInstance* instance); //replace with parent (appcontroller)

    ServerInstance* instance();

    CanvasData* canvasData();

    vector<PatchWindow*> windows();
    vector<QGraphicsScene*> scenes();

    void loadFile();
    void saveFile();

    PatchWindowController* createSubpatchWindow();
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
};
}

#endif // CM_PDLINK_H
