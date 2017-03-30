// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_CANVAS_TYPES_H
#define CM_CANVAS_TYPES_H

#include "cm_object.h"
#include "cm_patchcord.h"

#include <set>

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

public:
//    objectVec boxes;
//    patchcordVec patchcords;

    objectVec* boxes()
    {
        return &_boxes;
    }

    patchcordVec* patchcords()
    {
        return &_patchcords;
    }

    void addUniqueBox(UIObject* box)
    {
        int p = findBox(box);

        if (_boxes.size())
            if (p >= 0) {
                _boxes.erase(_boxes.begin() + p);
            }

        _boxes.push_back(box);
    }

    void addPatchcord(Patchcord* pc)
    {
        _patchcords.push_back(pc);
    }

    int findBox(UIObject* box)
    {
        //todo
        for (int i = 0; i < _boxes.size(); i++) {
            if (_boxes.at(i) == box)
                return i;
        }

        return -1;
    }

    QStringList boxesAsPdFileStrings()
    {
        QStringList ret;

        std::vector<UIObject*> objects = _boxes;
        std::vector<UIObject*>::iterator it;

        for (it = objects.begin(); it != objects.end(); ++it) {

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

    QStringList patchcordsAsPdFileStrings()
    {
        QStringList ret;
            std::vector<Patchcord*> patchcords = _patchcords;
            std::vector<Patchcord*>::iterator it2;

            for (it2 = patchcords.begin(); it2 != patchcords.end(); ++it2) {
                // check for subpatches
                std::string out1 = "#X connect ";
                out1 += patchcordAsPdFileString(*it2);

                //ut1 = ((Patchcord*)*it2)->asPdFileString();
                out1 += ";\r\n";

                ret.append(out1.c_str());
            }

        return ret;

    }

};

////
/// \brief shared canvas data -> additional info (window title etc) TODO rename
/// \details todo: merge with clipboard class's types
class canvasDataPlus : public canvasData {

public:
    portVec* inlets;
    portVec* outlets;
};
}

#endif // CM_CANVAS_TYPES_H
