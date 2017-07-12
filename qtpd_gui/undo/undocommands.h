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
class QPoint;

namespace qtpd {
// -------

class PatchWindowController;
class Property;
class PropertyList;
class UIObject;
class UIPatchcord;

class undoCreateObject : public QUndoCommand {
    PatchWindowController* _controller;
    QString _objectData;
    UIObject* _object;
    QPoint* _pos;

public:
    undoCreateObject(PatchWindowController* ctrl, QString objectData, QPoint pos);

    UIObject* object();

    void undo();
    void redo();
};

// -------

class undoCreatePatchcord : public QUndoCommand {
    PatchWindowController* _controller;
    UIObject* _obj1;
    int _out1;
    UIObject* _obj2;
    int _in2;
    UIPatchcord* _p;

public:
    undoCreatePatchcord(PatchWindowController* ctrl, UIObject* obj1, int out1, UIObject* obj2, int in2);

    //    UIPatchcord* patchcord();

    void undo();
    void redo();
};

// -------

class undoChangeProperty : public QUndoCommand {
    Property* _property;
    Property* _oldValue;
    Property* _newValue;

public:
    undoChangeProperty(PropertyList* list, Property* property, Property* oldValue, Property* newValue);

    void undo();
    void redo();
};

// -------

class undoDeleteObject : public QUndoCommand {
    PatchWindowController* _controller;
    QString _objectData;
    UIObject* _object;
    QPoint* _pos;

public:
    undoDeleteObject(PatchWindowController* ctrl, UIObject* object);

    void undo();
    void redo();
};

// -------

class undoDeletePatchcord : public QUndoCommand {
public:
    undoDeletePatchcord(PatchWindowController* ctrl, UIPatchcord* p);

    void undo();
    void redo();
};
}

#endif // UNDOCOMMANDS_H
