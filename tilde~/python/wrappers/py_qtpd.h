// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef PY_TILDE_H
#define PY_TILDE_H

#include <QObject>
#include <QString>
#include <QStringList>

#include <PythonQt.h>

#include "PatchWindow.h"

#include "Preferences.h"

#include "FileSaver.h"
#include "UIObject.h"

#include "CanvasView.h"

// NEW
#include "ApplicationController.h"
#include "PatchWindowController.h"

#include "ceammc_atomlist.h"

using namespace tilde;

///////////////////////////////////////////////////////////////////////////////////////////////////////

class pyUIObjectDecorator : public QObject {
    Q_OBJECT

public Q_SLOTS:

    UIObject* new_UIObject(UIObject* parent) { return new UIObject(parent); }
    UIObject* new_UIObject() { return new UIObject(0); }
    void delete_UIObject(UIObject* obj) { delete obj; }

    void addInlet(UIObject* obj)
    {
        if (obj)
            obj->addInlet();
    }

    void addOutlet(UIObject* obj)
    {
        if (obj)
            obj->addOutlet();
    }

    void pdMessage(UIObject* obj, QString data)
    {
        // XPD-TODO
        // obj->serverObject()->message(data.toStdString());
    }

    // test
    void scale(UIObject* obj, float scale)
    {
        obj->setScale(scale);
    }

    ///////

    PropertyList* prop(UIObject* obj)
    {
        return (PropertyList*)obj->properties();
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////

//class pyPatchWindowDecorator : public QObject {
//    Q_OBJECT

//public Q_SLOTS:

//    CanvasView* canvas(PatchWindow* w)
//    {
//        return w->canvasView();
//    }
//};

///////////////////////////////////////////////////////////////////////////////////////////////////////

class pyObjectVecDecorator : public QObject {
    Q_OBJECT

public Q_SLOTS:

    objectVec* new_objectVec() { return new objectVec; }
    void delete_objectVec(objectVec* obj) { delete obj; }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////

class pyWindowControllerDecorator : public QObject {
    Q_OBJECT
    //public:

    //    explicit pyCanvasDecorator(QObject* parent = 0)
    //    {
    //         setParent(parent);
    //    }

public Q_SLOTS:

    UIObject* createObject(PatchWindowController* c, QString obj_data, int x, int y)
    {
        c->createObject(obj_data.toStdString(), QPoint(x, y));
    }

    //todo templates
    //    void moveObject(CanvasView* o, int x, int y)
    //    {
    //        o->move(x, y);
    //    }

    void moveObject(UIObject* o, int x, int y)
    {
        o->move(x, y);
    }

    void resizeObject(UIObject* o, int w, int h)
    {
        o->setSize(w, h);
    }

    //////////
    // edit

    void selectObject(PatchWindowController* c, UIObject* obj)
    {
        c->selectBox(obj);
    }

    void selectAll(PatchWindowController* p)
    {
        p->menuSelectAll();
    }

    void deselectAll(PatchWindowController* d)
    {
        d->canvasData()->deselectBoxes();
        d->canvasData()->deselectPatchcords();
    }

    void deleteObject(PatchWindowController* c, UIObject* obj)
    {
        c->deleteObject(obj);
    }

    void patchcord(PatchWindowController* c, UIObject* obj1, int out1, UIObject* obj2, int in2)
    {
        c->createPatchcordWithoutUndo(obj1, out1, obj2, in2);
    }

    //////////
    // objects

    // TODO
    objectVec* objects(CanvasData* c)
    {
        return c->boxes();
    }

    objectVec* selectedObjects(CanvasData* c)
    {
        return c->selectedBoxes();
    }

    //////////
    // patchcords

    patchcordVec* patchcords(CanvasData* c)
    {
        return c->patchcords();
    }

    patchcordVec* selectedPatchcords(CanvasData* c)
    {
        return c->selectedPatchcords();
    }

    patchcordVec patchcordsFor(PatchWindowController* c, UIObject* obj)
    {
        return c->canvasData()->patchcordsForObject(obj);
    }

    void deletePatchcordsFor(PatchWindowController* c, UIObject* obj)
    {
        c->deletePatchcordsFor(obj);
    }

    //////////
    // file

    QStringList pdPatch(CanvasData* c)
    {
        return c->asPdFileStrings();
    }

    // test
    void scale(CanvasView* c, float scale)
    {
        c->scale(scale, scale);
    }

    // arrays: yet here
    void newArray(PatchWindowController* c, QString name, int size)
    {
        // TODO
        // c->canvasData()->serverCanvas()->createArray();

        //        if (c->pdObject()) {
        //            t_canvas* pdCanvas = (t_canvas*)c->pdObject();
        //            //yet this way:
        //            cmp_new_array(pdCanvas, gensym(name.toStdString().c_str()), (t_floatarg)size, 1, 1);
        //        }
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////

class pyPropertyListDecorator : public QObject {
    Q_OBJECT

public Q_SLOTS:
    QString get(PropertyList* p, QString name)
    {
        return p->PropertyList::get(name)->asQString();
    }

    void set(PropertyList* p, QString name, QString data)
    {
        p->PropertyList::set(name.toStdString(), data);
    }

    QStringList names(PropertyList* p)
    {
        return p->PropertyList::names();
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////

class pyLocal : public QObject {
    Q_OBJECT

private:
    QStringList* _list;

    PatchWindowController* _windowController;
    ServerObject* _serverObject;

public:
    explicit pyLocal(QObject* parent = 0)
    {
        _list = 0;
        _serverObject = 0;
    };

    void setWindowController(PatchWindowController* c)
    {
        _windowController = c;
    }

    void setServerObject(ServerObject* o)
    {
        _serverObject = o;
    }

    //    void setPdObject(t_object* obj)
    //    {
    //        _pdObject = obj;
    //    };

    void setInput(QStringList* list)
    {
        _list = list;
    }

public Q_SLOTS:
    PyObject* getMainModule()
    {
        return PythonQt::self()->getMainModule();
    }

    void output(QString msg)
    {
        if (!_serverObject) {
            ApplicationController::post("Python: server object error!");
            return;
        }

        string msg_ = "-py-output " + msg.toStdString();

        // XPD-TODO
        // _serverObject->message(msg_);

    }

    QStringList input()
    {
        if (_list)
            return *_list;
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////

class pyTilde : public QObject {
    Q_OBJECT

    ApplicationController* _appController;

public:
    explicit pyTilde(ApplicationController* ctl = 0)
    {
        qDebug() << "new pyTilde" << ctl;
        _appController = ctl;
    };

public Q_SLOTS:
    PyObject* getMainModule()
    {
        return PythonQt::self()->getMainModule();
    }

    //todo separate classes / decorators

    PatchWindowController* newPatchWindow()
    {
        if (!_appController) {
            ApplicationController::post("Python: App controller error!");
            return 0;
        }
        PatchWindowController* ret;
        ret = new PatchWindowController(_appController);
        ret->mainWindow()->show();
        //ret->show();
        return ret;
    };

    //////////
    // pdLib

    void startDsp()
    {
        // XPD-TODO
        // ServerInstance::dspOn();
    }

    void stopDsp()
    {
        // XPD-TODO
        // ServerInstance::dspOff();
    }

    QStringList getAudioAPIs()
    {
        // XPD-TODO
        string apis;// = ServerInstance::getAudioAPIs();
        return QString(apis.c_str()).split(" ");
    }

    void post(QString msg)
    {
        ApplicationController::post(msg);
    }

    QStringList loadedExternals()
    {
        // XPD_TODO
        //AtomList list; //TODO = cmp_get_loaded_list();
        QStringList ret;

        /*
        for (int i = 0; i < list.size(); i++) {
            ret += list.at(i).asString().c_str();
        }
        */

        return ret;
    }

    void loadLib(QString lib)
    {
        // XPD-TODO
        // ServerInstance::loadLibrary(lib.toStdString());
    }

    //////////
    // app preferences

    PropertyList* pref()
    {
        return (PropertyList*)&Preferences::inst();
    }
};

#endif // PY_TILDE_H
