// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_CANVAS_TYPES_H
#define CM_CANVAS_TYPES_H

#include "Clipboard.h"
#include "UIPatchcord.h"

#include "UIBox.h"

class ServerCanvas;

namespace qtpd {

typedef std::vector<UIObject*> objectVec;
typedef std::vector<UIPatchcord*> patchcordVec;

////
/// \brief shared canvas data model - boxes, patchcords
/// \details this should be developed better as a full data model for canvas
class CanvasData {

    objectVec _boxes;
    patchcordVec _patchcords;

    objectVec _selectedBoxes;
    patchcordVec _selectedPatchcords;

    Clipboard* _clipboard;

    portItemVec* _inlets;
    portItemVec* _outlets;

    // new 0517
    ServerCanvas* _serverCanvas;

    QString _fileName;

public:
    // new 0517
    ServerCanvas* serverCanvas() { return _serverCanvas; }
    void setServerCanvas(ServerCanvas* canvas) { _serverCanvas = canvas; }

    portItemVec* inlets() { return _inlets; }
    portItemVec* outlets() { return _outlets; }

    void setInlets(portItemVec* inlets) { _inlets = inlets; }
    void setOutlets(portItemVec* outlets) { _outlets = outlets; }

    void setFileName(QString fName) { _fileName = fName; }
    QString fileName() { return _fileName; }

    bool hasObjects()
    {
        return ((_boxes.size() > 0) || (_patchcords.size() > 0));
    }

    bool hasSelectedObjects()
    {
        return ((_selectedBoxes.size() > 0) || (_selectedPatchcords.size() > 0));
    }

    objectVec* boxes()
    {
        return &_boxes;
    }

    patchcordVec* patchcords()
    {
        return &_patchcords;
    }

    objectVec* selectedBoxes()
    {
        return &_selectedBoxes;
    }

    patchcordVec* selectedPatchcords()
    {
        return &_selectedPatchcords;
    }

    // ------------------------------

    void addUniqueBox(objectVec* boxes, UIObject* box)
    {
        int p = findBox(boxes, box);

        if (boxes->size())
            if (p >= 0) {
                boxes->erase(boxes->begin() + p);
            }

        boxes->push_back(box);
    }

    void addUniquePatchcord(patchcordVec* patchcords, UIPatchcord* pcord)
    {
        int p = findPatchcord(patchcords, pcord);

        if (patchcords->size())
            if (p >= 0) {
                patchcords->erase(patchcords->begin() + p);
            }

        patchcords->push_back(pcord);
    }

    int findBox(objectVec* boxes, UIObject* box)
    {
        //todo
        for (size_t i = 0; i < boxes->size(); i++) {
            if (boxes->at(i) == box)
                return i;
        }

        return -1;
    }

    int findPatchcord(patchcordVec* patchcords, UIPatchcord* pcord)
    {
        //todo
        for (size_t i = 0; i < patchcords->size(); i++) {
            if (patchcords->at(i) == pcord)
                return i;
        }

        return -1;
    }

    // ------------------------------

    void addPatchcord(UIPatchcord* pc)
    {
        addUniquePatchcord(&_patchcords, pc);
    }

    void selectPatchcord(UIPatchcord* pc) //pcord
    {
        addUniquePatchcord(&_selectedPatchcords, pc);
        pc->select();
    }

    void selectBox(UIObject* box)
    {
        addUniqueBox(&_selectedBoxes, box);
        box->select();
    }

    void deselectBoxes()
    {
        qDebug() << "deselect";

        for (int i = 0; i < (int)_boxes.size(); i++) {
            if (_boxes.at(i)) {
                ((UIBox*)_boxes.at(i))->deselect();
                ((UIBox*)_boxes.at(i))->update();
            }
        }

        _selectedBoxes.clear();
    }

    void deselectPatchcords()
    {
        patchcordVec::iterator it2;

        for (it2 = _patchcords.begin(); it2 != _patchcords.end(); ++it2) {

            ((UIPatchcord*)*it2)->deselect();
            ((UIPatchcord*)*it2)->setHover(false);
            ((UIPatchcord*)*it2)->update();
        }
    }

    // ----------

    void cut()
    {
        _clipboard->inst()->clear();
        _clipboard->inst()->append(boxesAsPdFileStrings(&_selectedBoxes));
        _clipboard->inst()->append(patchcordsAsPdFileStrings(&_selectedPatchcords));

        // todo move delete objects to this class; put here
    }

    void copy()
    {
        _clipboard->inst()->clear();
        _clipboard->inst()->append(boxesAsPdFileStrings(&_selectedBoxes));
        _clipboard->inst()->append(patchcordsAsPdFileStrings(&_selectedPatchcords));
    }

    void paste()
    {
        // todo move here
    }

    // -------
    int findObjectIndex(UIObject* obj)
    {
        //UIObject* obj1;
        std::vector<UIObject*>::iterator iter = std::find(_boxes.begin(), _boxes.end(), obj);
        size_t index = std::distance(_boxes.begin(), iter);
        if (index != _boxes.size()) {
            return index;
        }
        return -1;
    }

    // ------------------------------
    QStringList boxesAsPdFileStrings(objectVec* boxes)
    {
        QStringList ret;

        //std::vector<UIObject*> objects = _boxes;
        objectVec::iterator it;

        for (it = boxes->begin(); it != boxes->end(); ++it) {

            std::string out1 = ((UIObject*)*it)->asPdFileString();
            out1 += ";\r\n";

            ret.append(out1.c_str());
        }

        return ret;
    }

    std::string patchcordAsPdFileString(UIPatchcord* pcord)
    {
        //TODO

        int obj1i = findObjectIndex(pcord->obj1());
        int obj2i = findObjectIndex(pcord->obj2());

        if ((obj1i >= 0) && (obj2i >= 0)) {
            std::string ret;

            ret += std::to_string(obj1i) + " ";
            ret += std::to_string(pcord->outletIndex()) + " ";

            ret += std::to_string(obj2i) + " ";
            ret += std::to_string(pcord->inletIndex()) + " ";

            return ret;

        } else
            qDebug("patchcord to string error");

        return "";
    }

    QStringList patchcordsAsPdFileStrings(patchcordVec* patchcords)
    {
        QStringList ret;
        //patchcordVec patchcords = patchcords;
        patchcordVec::iterator it2;

        for (it2 = patchcords->begin(); it2 != patchcords->end(); ++it2) {
            // check for subpatches
            std::string out1 = "#X connect ";
            out1 += patchcordAsPdFileString(*it2);

            //ut1 = ((Patchcord*)*it2)->asPdFileString();
            out1 += ";\r\n";

            ret.append(out1.c_str());
        }

        return ret;
    }

    t_patchcordAsNumbers patchcordAsNumbers(UIPatchcord* pcord)
    {
        //TODO

        t_patchcordAsNumbers ret;

        int obj1i = findObjectIndex(pcord->obj1());
        int obj2i = findObjectIndex(pcord->obj2());

        if ((obj1i >= 0) && (obj2i >= 0)) {
            //std::string ret;

            ret.obj1 = (obj1i);
            ret.out1 = pcord->outletIndex();

            ret.obj2 = (obj2i);
            ret.in2 = pcord->inletIndex();

        } else {
            qDebug("patchcord to string error");
            ret.obj1 = 0;
            ret.obj2 = 0;
            ret.out1 = 0;
            ret.in2 = 0;
        }

        return ret;
    }

    QStringList objectsAsPdFileStrings()
    {

        QStringList ret = boxesAsPdFileStrings(&_boxes);
        ret += patchcordsAsPdFileStrings(&_patchcords);

        return ret;
    }

    QString canvasAsPdFileString()
    {
        // TODO
        return QString("#N canvas 0 0 400 300 10;\r\n");

        //        std::string ret;

        //        ret = "#N canvas ";
        //        ret += std::to_string(x()) + " ";
        //        ret += std::to_string(y()) + " ";
        //        ret += std::to_string(width()) + " ";
        //        ret += std::to_string(height()) + " ";
        //        ret += "10; \r\n";

        //        return ret;
    }

    QStringList asPdFileStrings()
    {
        QStringList ret;
        ret.append(canvasAsPdFileString());
        ret += objectsAsPdFileStrings();

        return ret;
    }

    // -------
};
}

#endif // CM_CANVAS_TYPES_H
