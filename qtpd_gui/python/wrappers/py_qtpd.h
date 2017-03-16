#ifndef PY_QTPD_H
#define PY_QTPD_H

#include <QObject>
#include <QString>
#include <QStringList>

#include <PythonQt.h>

#include "cm_patchwindow.h"

using namespace qtpd;

class pyQtpd : public QObject
{
    Q_OBJECT

public:
    explicit pyQtpd(QObject *parent = 0){};

public Q_SLOTS:
    PyObject* getMainModule(){
        return PythonQt::self()->getMainModule();
      }

    //todo separate classes / decorators

    PatchWindow* newPatchWindow()
    {
        PatchWindow* ret;
        ret = PatchWindow::newWindow();
        ret->show();
        return ret;
    };

    Canvas* canvasForWindow(PatchWindow* w)
    {
        return w->canvas;
    }

    UIObject* createObject(Canvas* c, QString obj_name, QString obj_data, int x, int y)
    {
        return c->createObject(obj_name.toStdString(),obj_data.toStdString(), QPoint(x,y));
    }

    //////////
    // edit

    void selectObject(Canvas* c, UIObject* obj)
    {
        c->selectBox(obj);
    }

    void selectAll(Canvas* c)
    {
        c->selectAll();
    }

    void deselectAll(Canvas* c)
    {
        c->deselectBoxes();
    }

    void moveObject(UIObject* obj, int x, int y)
    {
        obj->move(x,y);
    }

    void deleteObjectInCanvas(Canvas* c, UIObject* obj)
    {
        c->deleteBox(obj);
    }

    void patchcord(Canvas* c, UIObject* obj1, int out1, UIObject* obj2, int in2)
    {
        c->patchcord(obj1,out1,obj2,in2);
    }

    ////////////
    // lower level

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
        if (obj->pdObject())
        {
            cmp_sendstring((t_pd*)obj->pdObject(), data.toStdString());
        }
    }

    //////////
    // pdLib

    void startDsp()
    {
        cmp_switch_dsp(true);
    }

    void stopDsp()
    {
        cmp_switch_dsp(false);
    }

    void post(QString msg)
    {
        cmp_post(msg.toStdString());
    }


    ///////
    // properties

    PropertyList* new_PropertyList()
    {
        return new PropertyList();
    }

    PropertyList* prop(UIObject* obj)
    {
        return obj->properties();
    }

    QStringList names(PropertyList* list)
    {
        return list->names();
    }

    QString getP(UIObject* obj, QString name)
    {
        return obj->properties()->get(name.toStdString())->asQString();
    }

    void setP(UIObject* obj, QString name, QString data)
    {
        obj->properties()->set(name.toStdString(),data);
    }

    QStringList pnames(UIObject* obj)
    {
        return obj->properties()->names();
    }


};

#endif // PY_QTPD_H
