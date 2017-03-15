#ifndef PY_QTPD_H
#define PY_QTPD_H

#include <QObject>

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

    void moveObject (UIObject* obj, int x, int y)
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

};

#endif // PY_QTPD_H
