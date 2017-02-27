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

//    void paintEvent(QPaintEvent *)
//    {    QPainter p(this);
//         //p.setRenderHint(QPainter::SmoothPixmapTransform,true);
//         p.setPen(QPen((!this->selected_? QColor(0, 0, 0) : QColor(0,192,255)), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
//          p.drawLine(0,0,this->width(),this->height());
//    }

//    /////
//    //todo move
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

        float ty = ry * (pos.x() - start.x()) / rx + start.y();

        return (abs(pos.y() - ty)<5);

    }

};

#endif // CM_PATCHCORD_H
