#ifndef UNDOCOMMANDS_H
#define UNDOCOMMANDS_H

#include <QUndoCommand>


// template
//class undoCommands : public QUndoCommand
//{
//public:
//    undoCommands();

//    void undo();
//    void redo();
//};

class QString;

namespace qtpd {
// -------

class PatchWindowController;
class Property;
class PropertyList;
class UIObject;
class UIPatchcord;

class undoCreateObject : public QUndoCommand {
public:
    undoCreateObject(PatchWindowController* ctrl, QString objectData){};

    void undo(){};
    void redo(){};
};

// -------

class undoCreatePatchcord : public QUndoCommand {
public:
    undoCreatePatchcord(PatchWindowController* ctrl, UIObject* obj1, int out1, UIObject* obj2, int in2){};

    void undo(){};
    void redo(){};
};

// -------

class undoChangeProperty : public QUndoCommand {
public:
    undoChangeProperty(PropertyList* list, Property* property){};

    void undo(){};
    void redo(){};
};

// -------

class undoDeleteObject : public QUndoCommand {
public:
    undoDeleteObject(PatchWindowController* ctrl, QString objectData){};

    void undo(){};
    void redo(){};
};

// -------

class undoDeletePatchcord : public QUndoCommand {
public:
    undoDeletePatchcord(PatchWindowController* ctrl, UIPatchcord* p){};

    void undo(){};
    void redo(){};
};

//class undoChangeProperty : public QUndoCommand {
//public:
//    undoAddObject(PropertyList* list, Property* property);

//    void undo();
//    void redo();
//};

}

#endif // UNDOCOMMANDS_H
