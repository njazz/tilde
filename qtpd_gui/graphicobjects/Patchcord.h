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
/// \brief more basic patchcord structure. later merge that
typedef struct structPatchcordNumbers_ {
    int obj1;
    int obj2;
    int out1;
    int in2;
} structPatchcordNumbers;

typedef enum { cm_pt_anything,
    cm_pt_signal } patchcordTypeEnum;
////
/// \brief gui patchcord class
///
class Patchcord : public UIItem {
private:
    UIItem* _obj1;
    UIItem* _out1;
    UIItem* _obj2;
    UIItem* _in2;

    patchcordTypeEnum _patchcordType;

    QPainterPath _path;

public:
    explicit Patchcord(UIItem* _obj1, UIItem* _out1, UIItem* _obj2, UIItem* _in2);

    void paint(QPainter* painter, const QStyleOptionGraphicsItem*, QWidget*)
    {
        QColor b_pc_color = (_patchcordType == cm_pt_signal) ? QColor(128, 160, 192) : QColor(0, 0, 0);
        // cleanup
        QColor pc_color = (hover()) ? QColor(255, 192, 0) : b_pc_color;
        if (isSelected())
            pc_color = QColor(0, 192, 255);

        painter->setRenderHint(QPainter::HighQualityAntialiasing, true);
        painter->setPen(QPen(pc_color, 1 + (_patchcordType == cm_pt_signal), Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

        //todo option

        QPainterPath path;
        // todo fix
        QPoint end = endPoint();
        QPoint start = startPoint();

        qDebug() << "pc points" << start << end;

        QPoint b1 = QPoint(start.x() + (end.x() - start.x()) * .5, fabs(end.y() - start.y()) * .5 + start.y());
        QPoint b2 = QPoint(end.x() - (end.x() - start.x()) * .5, -fabs(end.y() - start.y()) * .5 + end.y());

        //TODO
        //spaghetti lol
        if (start.y() > end.y()) {
            if (b1.y() - start.y() > 80) {
                b1.setY(start.y() + 80);
            }

            if (b2.y() - end.y() < -80) {
                b2.setY(end.y() - 80);
            }
        }

        //               if (b1.x() - start.x() < 20)
        //                {
        //                    b1.setX(start.x() + 20);
        //                }

        //                if (b2.x() - end.x() < -20)
        //                {
        //                    b2.setX(end.x() - 20);
        //                }

        path.moveTo(start);
        path.cubicTo(b1, b2, end);

        painter->drawPath(path);
        _path = path;
    }

    QPoint startPoint();

    QPoint endPoint();

    // will not be unused if drawed by the class itself
    //    patchcordTypeEnum patchcordType() { return _patchcordType; }

    void setPatchcordType(patchcordTypeEnum v) { _patchcordType = v; }

    ////

    UIObject* obj1()
    {
        return (UIObject*)_obj1;
    }

    UIObject* obj2()
    {
        return (UIObject*)_obj2;
    }

    int outletIndex()
    {
        if ((Port*)_out1)
            return ((Port*)_out1)->portIndex();
        else
            return -1;
    }

    int inletIndex()
    {
        if ((Port*)_in2)
            return ((Port*)_in2)->portIndex();
        else
            return -1;
    }

    // -----

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
        setSelected(true);
        update();
    }

    QPainterPath shape() const
    {
        return _path;
    }

    // -------

    ////

    bool connectsObject(UIItem* obj)
    {
        return ((obj == _obj1) || (obj == _obj2));
    }

signals:
    void selected();
    void shiftClicked(); // delete and make new line from obj2 out 'new line'
    void altClicked(); // convert to send-receive
};
}

#endif // CM_PATCHCORD_H
