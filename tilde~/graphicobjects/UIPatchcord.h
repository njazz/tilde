// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_PATCHCORD_H
#define CM_PATCHCORD_H

#include "UIObject.h"

#include <math.h>

#include "Port.h"

class ServerPatchcord;

namespace tilde {

////
/// \brief patchcord as numbers
/// \deprecated todo: merge that
typedef struct _patchcordAsNumbers {
    int obj1;
    int obj2;
    int out1;
    int in2;
} t_patchcordAsNumbers;

////
/// \brief patchcord type  - message / signal, can be extended later
typedef enum { cm_pt_anything = 0,
    cm_pt_signal = 1 } patchcordTypeEnum;

////
/// \brief Patchcord QGraphicsObject class
/// \details gui representation of Pd patchcord
///
class UIPatchcord : public UIItem {
private:
    UIItem* _obj1;
    UIItem* _out1;
    UIItem* _obj2;
    UIItem* _in2;

    patchcordTypeEnum _patchcordType;

    QPainterPath _shape;

    ServerPatchcord* _serverPatchcord;

public:
    explicit UIPatchcord(UIItem* _obj1, UIItem* _out1, UIItem* _obj2, UIItem* _in2);
    ~UIPatchcord();

    void paint(QPainter* painter, const QStyleOptionGraphicsItem*, QWidget*);

    QPoint startPoint();
    QPoint endPoint();

    void setPatchcordType(patchcordTypeEnum v);

    //workaround
    void remove();

    UIObject* obj1();
    UIObject* obj2();

    int outletIndex();
    int inletIndex();

    bool isConnectedToObject(UIItem* obj);

    void hoverEnterEvent(QGraphicsSceneHoverEvent*);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent*);

    void mousePressEvent(QGraphicsSceneMouseEvent*);

    void setServerPatchcord(ServerPatchcord* p) { _serverPatchcord = p; }
    ServerPatchcord* serverPatchcord() { return _serverPatchcord; }

    //void deleteServerPatchcord();       ///> we don't delete server patchcord when we delete boxes - server does that automatically

signals:
    void selected(); ///> basic select signal - same as in UIObject class
    void shiftClicked(); ///> deletes object and makes new line from obj2 out 'new line'
    void altClicked(); ///> converts patchcord to send-receive pair
};
}

#endif // CM_PATCHCORD_H
