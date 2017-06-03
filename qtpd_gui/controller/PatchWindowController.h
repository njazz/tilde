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

#include "FileParser.h"

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

    CanvasData* canvasData() {return _canvasData;};

    vector<PatchWindow*> windows();
    vector<QGraphicsScene*> scenes();

    PatchWindow* newWindow();
    void openFile(QString fileName);
    void saveFile(QString fileName);
    void saveFileDialog();

    //

    // ----------

    void dataCut()
    {

        if (!_canvasData->hasSelectedObjects())
            return;

        _canvasData->cut();

        deleteSelectedObjects();
    }

    void dataCopy()
    {
        if (!_canvasData->hasSelectedObjects())
            return;

        _canvasData->cut();

        qDebug() << "***copy\n"
                 << Clipboard::inst()->get();
    }

    void dataDuplicate()
    {
        dataCopy();
        dataPaste();
    }

    void dataPaste()
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

    void dataSelectAllObjects()
    {
        qDebug("select all");
        objectVec::iterator it;
        for (it = _canvasData->boxes()->begin(); it != _canvasData->boxes()->end(); ++it) {
            _canvasData->selectBox(*it);



        }

        //selectionData_.patchcords()_ = data_.patchcords()_;
    }

    // ------------

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

    // TODO
    void deleteSelectedPatchcords(){

        qDebug() << "del selected patchcords";

        //cleanup
        //for (int i=0;i<data_.patchcords()->size(); i++)
        std::vector<UIPatchcord*>::iterator it;
        for (it = _canvasData->patchcords()->begin(); it != _canvasData->patchcords()->end();) {
            UIPatchcord* p = *it;

            if (p->isSelected()) {

                t_object* obj1 = (t_object*)p->obj1()->pdObject();
                t_object* obj2 = (t_object*)p->obj2()->pdObject();

                if (obj1 && obj2) {
                    int out1 = p->outletIndex();
                    int in2 = p->inletIndex();

                    if ((out1 >= 0) && (in2 >= 0))
                        cmp_delete_patchcord(obj1, out1, obj2, in2);
                    else
                        qDebug("object error. didn't delete pd patchcord");
                } else
                    qDebug("object error. didn't delete pd patchcord");

                _scene->removeItem(p);
                //qDebug() << "remove item";

                it = _canvasData->patchcords()->erase(it);

            } else
                ++it;
        }

        _canvasData->selectedPatchcords()->clear();
        update();

    };

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
};
}

#endif // CM_PDLINK_H
