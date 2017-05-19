// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_PATCHCORD_H
#define CM_PATCHCORD_H

#include "Port.h"
#include "UIObject.h"

#include <math.h>

//#include <QWidget>
//#include <QtGui>

namespace qtpd {

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

    QPainterPath _path;

public:
    explicit UIPatchcord(UIItem* _obj1, UIItem* _out1, UIItem* _obj2, UIItem* _in2);

    void paint(QPainter* painter, const QStyleOptionGraphicsItem*, QWidget*);

    ////
    /// \group prop Properties
    /// @{

    QPoint startPoint();
    QPoint endPoint();

    void setPatchcordType(patchcordTypeEnum v) { _patchcordType = v; }

    UIObject* obj1() { return (UIObject*)_obj1; }
    UIObject* obj2() { return (UIObject*)_obj2; }

    int outletIndex() { return ((Port*)_out1) ? ((Port*)_out1)->portIndex() : -1; }
    int inletIndex() { return ((Port*)_in2) ? ((Port*)_in2)->portIndex() : -1; }

    QPainterPath shape() const { return _path; }

    bool isConnectedToObject(UIItem* obj) { return ((obj == _obj1) || (obj == _obj2)); }

    /** @}*/

    ////
    /// \group mouse Mouse
    /// @{

    void hoverEnterEvent(QGraphicsSceneHoverEvent*)
    {
        qDebug() << "hover patchcord";
        setHover(true);
        update();
    }

    void hoverLeaveEvent(QGraphicsSceneHoverEvent*)
    {
        setHover(false);
        update();
    }

    void mousePressEvent(QGraphicsSceneMouseEvent*)
    {
        qDebug() << "click patchcord";
        select(); //(true);
        update();
    }

    /** @}*/

signals:
    void selected(); ///> basic select signal - same as in UIObject class
    void shiftClicked(); ///> deletes object and makes new line from obj2 out 'new line'
    void altClicked(); ///> converts patchcord to send-receive pair
};
}

#endif // CM_PATCHCORD_H
