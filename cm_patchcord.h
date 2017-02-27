#ifndef CM_PATCHCORD_H
#define CM_PATCHCORD_H

#include "cm_widget.h"

//#include <QWidget>
//#include <QtGui>

class cm_patchcord
{
private:

    cm_widget* obj1;
    cm_widget* out1;
    cm_widget* obj2;
    cm_widget* in2;

    enum {cm_pt_anything, cm_pt_signal} patchcordType;

public:
    bool mouseover;
    bool selected;
    //explicit cm_patchcord(cm_widget *parent = 0);

    cm_patchcord();
    cm_patchcord(cm_widget* obj1, cm_widget* out1, cm_widget* obj2, cm_widget* in2);

    QPoint getStartPoint()
    {

        QPoint start;
        start = QPoint( obj1->pos().x() + out1->pos().x() + out1->width()/2,
                        obj1->pos().y() + out1->pos().y() + out1->height()/2 );

        return start;
    }

    QPoint getEndPoint()
    {
        QPoint end;
        end = QPoint (obj2->pos().x() + in2->pos().x() + in2->width()/2,
                      obj2->pos().y() + in2->pos().y() + in2->height()/2);
        return end;

    }

    bool connectsObject(cm_widget* obj)
    {
        return ( (obj == this->obj1) || (obj == this->obj2) );
    }

    bool hover(QPoint pos)
    {
        QPoint start = this->getStartPoint();
        QPoint end = this->getEndPoint();

        float rx = end.x() - start.x();
        float ry = end.y() - start.y();

        float ty = ry * (pos.x() - start.x()) / rx + start.y()  ;
        float tx = rx * (pos.y() - start.y()) / ry + start.x()  ;

        bool rx1_res = (abs((float)pos.y() - ty)<7.) ;
        //bool rx0_res = (abs(pos.x() - (int)tx)<7) ;

        bool rx0_res = ( (
                             (pos.y() > start.y())
                             &&
                             (pos.y() < end.y())
                             )
                         &&
                         (pos.x() == start.x())
                         );

        return (rx>0) ? rx1_res : rx0_res;


    }

};

#endif // CM_PATCHCORD_H
