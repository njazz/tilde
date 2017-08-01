// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef COMMON_TYPES_H
#define COMMON_TYPES_H

#include <QPoint>

namespace tilde {

////
/// \brief edit mode types
typedef enum {
    em_Unlocked,
    em_Locked,
    em_Temporary ///> control-click on an object
} t_editMode;

////
/// \brief  port type - in or out
typedef enum { portInlet,
    portOutlet } UIPortType;

////
/// \brief object box size constraints
typedef enum {
    os_Fixed,
    os_FixedHeight,
    os_FixedWidth, ///> this is used only in vertical radio (ui.matrix)
    os_Free,
    os_Square,
    os_NoAutoResize ///> probably remove later
} t_objectSize;
}

#endif // COMMON_TYPES_H
