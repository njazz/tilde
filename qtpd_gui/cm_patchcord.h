#ifndef CM_PATCHCORD_H
#define CM_PATCHCORD_H

#include "cm_object.h"
#include"cm_port.h"

#include <math.h>

//#include <QWidget>
//#include <QtGui>

namespace cm
{

typedef enum {cm_pt_anything, cm_pt_signal} patchcordTypeEnum;
////
/// \brief gui patchcord class
///
class Patchcord
{
private:

    UIWidget* obj1;
    UIWidget* out1;
    UIWidget* obj2;
    UIWidget* in2;

    patchcordTypeEnum patchcordType_;

public:
    bool mouseover;
    bool selected;
    //explicit cm_patchcord(cm_widget *parent = 0);

    //cm_patchcord();
    explicit Patchcord(UIWidget* obj1, UIWidget* out1, UIWidget* obj2, UIWidget* in2);

    QPoint getStartPoint()
    {

        QPoint start = QPoint(0,0);

        if (obj1 && out1)
            start = QPoint( obj1->pos().x() + out1->pos().x() + out1->width()/2,
                            obj1->pos().y() + out1->pos().y() + out1->height()/2 );

        return start;
    }

    QPoint getEndPoint()
    {
        QPoint end = QPoint(0,0);
        if (obj2 && in2)
            end = QPoint (obj2->pos().x() + in2->pos().x() + in2->width()/2,
                          obj2->pos().y() + in2->pos().y() + in2->height()/2);
        return end;

    }

    //// will not be unused if drawed by the class itself
    patchcordTypeEnum patchcordType(){return this->patchcordType_;}
    void setPatchcordType(patchcordTypeEnum v){this->patchcordType_=v;}

    ////

    UIObject* getObj1()
    {
        return (UIObject*)this->obj1;
    }

    UIObject* getObj2()
    {
        return (UIObject*)this->obj2;
    }

    int getOutIdx()
    {
        return ((Port*)this->out1)->portIndex;
    }

    int getInIdx()
    {
        return ((Port*)this->in2)->portIndex;
    }

    ////

    bool connectsObject(UIWidget* obj)
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

        bool rx1_res = (fabs((float)pos.y() - ty)<7.) ;

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
}

#endif // CM_PATCHCORD_H
