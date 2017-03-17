// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_CANVAS_TYPES_H
#define CM_CANVAS_TYPES_H

#include "cm_object.h"
#include "cm_patchcord.h"

namespace qtpd {

typedef std::vector<UIObject*> objectVec;
typedef std::vector<Patchcord*> patchcordVec;

////
/// \brief shared canvas data - boxes, patchcords TODO rename
/// \details todo: merge with clipboard class's types
typedef struct structCanvasData {
    objectVec boxes_;
    patchcordVec patchcords_;

} tCanvasData;

////
/// \brief shared canvas data -> additional info (window title etc) TODO rename
/// \details todo: merge with clipboard class's types
typedef struct structCanvasDataPlus : structCanvasData {
    portVec* inlets_;
    portVec* outlets_;

} tCanvasDataPlus;
}

#endif // CM_CANVAS_TYPES_H
