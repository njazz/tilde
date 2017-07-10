#include "undocommands.h"

#include "PatchWindowController.h"
#include "UIObject.h"

namespace qtpd {

undoCreateObject::undoCreateObject(PatchWindowController* ctrl, QString objectData, QPoint pos)
{
    _controller = ctrl;
    _objectData = objectData;
    _pos = new QPoint(pos);
    _object=0;
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

undoCreatePatchcord::undoCreatePatchcord(PatchWindowController* ctrl, UIObject* obj1, int out1, UIObject* obj2, int in2){};

void undoCreatePatchcord::undo(){};
void undoCreatePatchcord::redo(){};

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
