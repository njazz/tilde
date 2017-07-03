// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_CANVAS_TYPES_H
#define CM_CANVAS_TYPES_H

#include "Clipboard.h"
#include "UIPatchcord.h"

class ServerCanvas;

namespace qtpd {

class UIBox;

typedef std::vector<UIObject*> objectVec;
typedef std::vector<UIPatchcord*> patchcordVec;

////
/// \brief shared canvas data model - boxes, patchcords

class CanvasData {

    objectVec _boxes;
    patchcordVec _patchcords;

    objectVec _selectedBoxes;
    patchcordVec _selectedPatchcords;

    Clipboard* _clipboard;

    portItemVec* _inlets;
    portItemVec* _outlets;

    // new 0517
    //ServerCanvas* _serverCanvas;

    QString _fileName;
    QString _filePath;

    PropertyList* _properties;

public:
    CanvasData();

    portItemVec* inlets() { return _inlets; }
    portItemVec* outlets() { return _outlets; }

    void setInlets(portItemVec* inlets) { _inlets = inlets; }
    void setOutlets(portItemVec* outlets) { _outlets = outlets; }

    void setFileName(QString fName) { _fileName = fName; }
    QString fileName() { return _fileName; }

    void setFilePath(QString filePath) { _filePath = filePath; }
    QString filePath() { return _filePath; };

    PropertyList* properties() { return _properties; };
    void setProperties(PropertyList* p) { _properties = p; };
    //

    bool hasObjects() { return ((_boxes.size() > 0) || (_patchcords.size() > 0)); }
    bool hasSelectedObjects() { return ((_selectedBoxes.size() > 0) || (_selectedPatchcords.size() > 0)); }

    objectVec* boxes() { return &_boxes; }
    patchcordVec* patchcords() { return &_patchcords; }
    objectVec* selectedBoxes() { return &_selectedBoxes; }
    patchcordVec* selectedPatchcords() { return &_selectedPatchcords; }

    // ------------------------------

    void addUniqueBox(objectVec* boxes, UIObject* box);
    void addUniquePatchcord(patchcordVec* patchcords, UIPatchcord* pcord);
    int findBox(objectVec* boxes, UIObject* box);
    int findPatchcord(patchcordVec* patchcords, UIPatchcord* pcord);

    //
    void selectBoxesInFrame(QPoint start, QPoint end);
    void moveSelectedBoxes(QPoint pos, bool gridSnap);

    // ------------------------------

    void addBox(UIObject* box) { addUniqueBox(&_boxes, box); }
    void addPatchcord(UIPatchcord* pc) { addUniquePatchcord(&_patchcords, pc); }

    // ------------------------------

    void selectBox(UIObject* box);
    void selectPatchcord(UIPatchcord* pc);
    void deselectBoxes();
    void deselectPatchcords();

    // ----------

    void cut();
    void copy();
    void paste();

    // -------

    int findObjectIndex(UIObject* obj);
    UIObject* getObjectByIndex(int idx);
    patchcordVec patchcordsForObject(UIObject* obj);

    // ------------------------------

    QStringList boxesAsPdFileStrings(objectVec* boxes);
    std::string patchcordAsPdFileString(UIPatchcord* pcord);
    QStringList patchcordsAsPdFileStrings(patchcordVec* patchcords);
    t_patchcordAsNumbers patchcordAsNumbers(UIPatchcord* pcord);

    QStringList objectsAsPdFileStrings();
    QString canvasAsPdFileString();
    QStringList asPdFileStrings();

    // -------
};
}

#endif // CM_CANVAS_TYPES_H
