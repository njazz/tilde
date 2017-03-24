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

public:
    objectVec boxes_;
    patchcordVec patchcords_;

    void addUniqueBox(UIObject* box)
    {
        int p = findBox(box);

        if (boxes_.size())
            if (p >= 0) {
                boxes_.erase(boxes_.begin() + p);
            }

        boxes_.push_back(box);
    }

    int findBox(UIObject* box)
    {
        //todo
        for (int i = 0; i < boxes_.size(); i++) {
            if (boxes_.at(i) == box)
                return i;
        }

        return -1;
    }
};

////
/// \brief shared canvas data -> additional info (window title etc) TODO rename
/// \details todo: merge with clipboard class's types
class canvasDataPlus : public canvasData {

public:
    portVec* inlets_;
    portVec* outlets_;
};
}

#endif // CM_CANVAS_TYPES_H
