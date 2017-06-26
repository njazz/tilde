// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef PY_QTPD_H
#define PY_QTPD_H

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
#include "PatchWindowController.h"
#include "ApplicationController.h"



using namespace qtpd;

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
        obj->serverObject()->message(data.toStdString());
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

class pyPatchWindowDecorator : public QObject {
    Q_OBJECT

public Q_SLOTS:

    CanvasView* canvas(PatchWindow* w)
    {
        return w->canvasView();
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////

class pyObjectVecDecorator : public QObject {
    Q_OBJECT

public Q_SLOTS:

    objectVec* new_objectVec() { return new objectVec; }
    void delete_objectVec(objectVec* obj) { delete obj; }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////

class pyCanvasDecorator : public QObject {
    Q_OBJECT
    //public:

    //    explicit pyCanvasDecorator(QObject* parent = 0)
    //    {
    //         setParent(parent);
    //    }

public Q_SLOTS:

    UIObject* createObject(CanvasView* c, QString obj_data, int x, int y)
    {
        return  0;// TODO  c->CanvasView::createObject(obj_data, QPoint(x, y));
    }

    //todo templates
    void moveObject(CanvasView* o, int x, int y)
    {
        o->move(x, y);
    }

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

    void selectObject(CanvasView* c, UIObject* obj)
    {
        //TODO
        //c->selectBox(obj);
    }

    void selectAll(PatchWindowController* p)
    {
        // TODO
        //p->menuSelectAll();
    }

    void deselectAll(CanvasData* d)
    {
        d->deselectBoxes();
        // TODO
        //c->update();
    }

    void deleteObjectInCanvas(CanvasView* c, UIObject* obj)
    {
        // TODO

        //c->deleteObject(obj);
    }

    void patchcord(CanvasView* c, UIObject* obj1, int out1, UIObject* obj2, int in2)
    {
        //c->patchcord(obj1, out1, obj2, in2);
        //TODO
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

    patchcordVec patchcordsFor(CanvasView* c, UIObject* obj)
    {
        //return c->patchcordsForObject(obj);
    }

    void deletePatchcordsFor(CanvasView* c, UIObject* obj)
    {
        // TODO
        //c->deletePatchcordsFor(obj);
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
        c->scale(scale,scale);
    }

    // arrays: yet here
    void newArray(CanvasView* c, QString name, int size)
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
    CanvasView* _canvas;
    t_object* _pdObject;
    QStringList* _list;

public:
    explicit pyLocal(QObject* parent = 0){
        _canvas = 0;
        _pdObject = 0;
        _list = 0;
    };

    void setCanvas(CanvasView* c)
    {
        _canvas = c;
    };

    void setPdObject(t_object* obj)
    {
        _pdObject = obj;
    };

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
        if (!_pdObject) {
            /* TODO */ //cmp_post("Error: bad pd object");
            return;
        }

        std::string msg_ = "__output " + msg.toStdString();
        // TODO

        //cmp_sendstring((t_pd*)_pdObject, msg_);
    }

    QStringList input()
    {
        if (_list)
            return *_list;
    }

    CanvasView* canvas() { return _canvas; }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////

class pyQtpd : public QObject {
    Q_OBJECT

    ApplicationController* _appController;

public:
    explicit pyQtpd(QObject* parent = 0, ApplicationController* ctl = 0){_appController = ctl;};

public Q_SLOTS:
    PyObject* getMainModule()
    {
        return PythonQt::self()->getMainModule();
    }

    //todo separate classes / decorators

    PatchWindowController* newPatchWindow()
    {
        PatchWindowController* ret;
        ret = new PatchWindowController(_appController);
        ret->firstWindow()->show();
        //ret->show();
        return ret;
    };

    //////////
    // pdLib

    void startDsp()
    {
        // TODO
        //cmp_switch_dsp(true);
    }

    void stopDsp()
    {
        //TODO
        //cmp_switch_dsp(false);
    }

    QStringList getAudioAPIs()
    {
        std::string apis = "TODO"; // cmp_get_audio_apis();
        return QString(apis.c_str()).split(" ");
    }

    void post(QString msg)
    {
        /* TODO */ //cmp_post(msg.toStdString());
    }

    QStringList externals()
    {
        AtomList list; //TODO = cmp_get_loaded_list();
        QStringList ret;

        for (int i = 0; i < list.size(); i++) {
            ret += list.at(i).asString().c_str();
        }

        return ret;
    }

    void loadLib(QString lib)
    {
        //TODO
        //cmp_loadlib(lib.toStdString());
    }

    //////////
    // app preferences

    PropertyList* pref()
    {
        return (PropertyList*)&Preferences::inst();
    }
};

#endif // PY_QTPD_H
