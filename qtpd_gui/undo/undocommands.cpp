#include "undocommands.h"

#include "PatchWindowController.h"
#include "UIObject.h"
#include <QDebug>

namespace qtpd {

undoCreateObject::undoCreateObject(PatchWindowController* ctrl, QString objectData, QPoint pos)
{
    _controller = ctrl;
    _objectData = objectData;
    _pos = new QPoint(pos);
    _object = 0;
};

void undoCreateObject::undo()
{
    _controller->deleteObjectWithoutUndo(_object);
};

UIObject* undoCreateObject::object()
{
    return _object;
}

void undoCreateObject::redo()
{
    _object = _controller->createObjectWithoutUndo(_objectData.toStdString(), *_pos);
};

// -------

undoCreatePatchcord::undoCreatePatchcord(PatchWindowController* ctrl, UIObject* obj1, int out1, UIObject* obj2, int in2)
{
    _controller = ctrl;
    _obj1 = obj1;
    _out1 = out1;
    _obj2 = obj2;
    _in2 = in2;
    _p = 0;
};

void undoCreatePatchcord::undo()
{
    _controller->deletePatchcord(_p);
};

//UIPatchcord* undoCreatePatchcord::patchcord()
//{
//    return _p;
//}
void undoCreatePatchcord::redo()
{
    _p = _controller->createPatchcordWithoutUndo(_obj1, _out1, _obj2, _in2);
};

// -------

undoChangeProperty::undoChangeProperty(PropertyList* list, Property* property){};

void undoChangeProperty::undo(){};
void undoChangeProperty::redo(){};

// -------

undoDeleteObject::undoDeleteObject(PatchWindowController* ctrl, UIObject* object)
{
    _controller = ctrl;
    _object = object;
    _objectData = object->toQString();
    _pos = new QPoint(object->pos().toPoint());
    //qDebug() << "undo qstring" << _objectData;
};

void undoDeleteObject::undo()
{
    qDebug() << "undo";
    _controller->createObjectWithoutUndo(_objectData.toStdString(), *_pos);
};

void undoDeleteObject::redo()
{
    _controller->deleteObjectWithoutUndo(_object);
};

// -------

undoDeletePatchcord::undoDeletePatchcord(PatchWindowController* ctrl, UIPatchcord* p){};

void undoDeletePatchcord::undo(){};
void undoDeletePatchcord::redo(){};
}
