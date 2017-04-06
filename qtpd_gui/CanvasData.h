// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_CANVAS_TYPES_H
#define CM_CANVAS_TYPES_H

//#include "UIObjectItem.h"
#include "Patchcord.h"

#include <set>

#include "Clipboard.h"

namespace qtpd {

typedef std::vector<UIObject*> objectVec;
typedef std::vector<Patchcord*> patchcordVec;

typedef std::set<UIObject*> objectSet;
//patchcord set?

////
/// \brief shared canvas data - boxes, patchcords TODO rename
/// \details todo: merge with clipboard class's types. todo: should be replaced by proper container
class canvasData {

    objectVec _boxes;
    patchcordVec _patchcords;

    objectVec _selectedBoxes;
    patchcordVec _selectedPatchcords;

    Clipboard* _clipboard;

public:
    //    objectVec boxes;
    //    patchcordVec patchcords;

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

    int findBox(objectVec* boxes, UIObject* box)
    {
        //todo
        for (size_t i = 0; i < boxes->size(); i++) {
            if (boxes->at(i) == box)
                return i;
        }

        return -1;
    }

    void addPatchcord(Patchcord* pc)
    {
        _patchcords.push_back(pc);
    }

    // ------------------------------
    void selectBox(UIObject* box)
    {
        addUniqueBox(&_selectedBoxes, box);
        box->select();
    }

    void selectPatchcord(Patchcord* )//pcord
    {
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

    // -------

    std::string patchcordAsPdFileString(Patchcord* pcord)
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

    QStringList objectsAsPdFileStrings()
    {

        QStringList ret = boxesAsPdFileStrings(&_boxes);
        ret += patchcordsAsPdFileStrings(&_patchcords);

        return ret;
    }
};

////
/// \brief shared canvas data -> additional info (window title etc) TODO rename
/// \details todo: merge with clipboard class's types
class canvasDataPlus : public canvasData {

public:
    portItemVec* inlets;
    portItemVec* outlets;
};
}

#endif // CM_CANVAS_TYPES_H
