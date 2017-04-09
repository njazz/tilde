#ifndef COMMON_TYPES_H
#define COMMON_TYPES_H

#include <QPoint>

namespace qtpd {

////
/// \brief edit mode types
///
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
///
typedef enum {
    os_Fixed,
    os_FixedHeight,
    os_Free,
    os_Square
} t_objectSize;
}

#endif // COMMON_TYPES_H
