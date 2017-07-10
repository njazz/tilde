#include "undocommands.h"

#include "PatchWindowController.h"
#include "UIObject.h"

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
    _controller->deleteObject(_object);
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
    _p =
            _controller->createPatchcordWithoutUndo(_obj1, _out1, _obj2, _in2);
};

// -------

undoChangeProperty::undoChangeProperty(PropertyList* list, Property* property){};

void undoChangeProperty::undo(){};
void undoChangeProperty::redo(){};

// -------

undoDeleteObject::undoDeleteObject(PatchWindowController* ctrl, QString objectData){};

void undoDeleteObject::undo(){};
void undoDeleteObject::redo(){};

// -------

undoDeletePatchcord::undoDeletePatchcord(PatchWindowController* ctrl, UIPatchcord* p){};

void undoDeletePatchcord::undo(){};
void undoDeletePatchcord::redo(){};
}
