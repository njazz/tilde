// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_PATCHCORD_H
#define CM_PATCHCORD_H

#include "cm_object.h"
#include "cm_port.h"

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
class Patchcord {
private:
    UIWidget* obj1_;
    UIWidget* out1_;
    UIWidget* obj2_;
    UIWidget* in2_;

    patchcordTypeEnum patchcordType_;

public:
    bool mouseover;
    bool selected;
    //explicit cm_patchcord(cm_widget *parent = 0);

    //cm_patchcord();
    explicit Patchcord(UIWidget* obj1_, UIWidget* out1_, UIWidget* obj2_, UIWidget* in2_);

    QPoint startPoint()
    {

        QPoint start = QPoint(0, 0);

        if (obj1_ && out1_)
            start = QPoint(obj1_->pos().x() + out1_->pos().x() + out1_->width() / 2,
                obj1_->pos().y() + out1_->pos().y() + out1_->height() / 2);

        return start;
    }

    QPoint endPoint()
    {
        QPoint end = QPoint(0, 0);
        if (obj2_ && in2_)
            end = QPoint(obj2_->pos().x() + in2_->pos().x() + in2_->width() / 2,
                obj2_->pos().y() + in2_->pos().y() + in2_->height() / 2);
        return end;
    }

    //// will not be unused if drawed by the class itself
    patchcordTypeEnum patchcordType() { return this->patchcordType_; }
    void setPatchcordType(patchcordTypeEnum v) { this->patchcordType_ = v; }

    ////

    UIObject* obj1()
    {
        return (UIObject*)this->obj1_;
    }

    UIObject* obj2()
    {
        return (UIObject*)this->obj2_;
    }

    int outletIndex()
    {
        if ((Port*)this->out1_)
            return ((Port*)this->out1_)->portIndex;
        else
            return -1;
    }

    int inletIndex()
    {
        if ((Port*)this->in2_)
            return ((Port*)this->in2_)->portIndex;
        else
            return -1;
    }

    ////

    bool connectsObject(UIWidget* obj)
    {
        return ((obj == this->obj1_) || (obj == this->obj2_));
    }

    bool hover(QPoint pos)
    {
        QPoint start = this->startPoint();
        QPoint end = this->endPoint();

        float rx = end.x() - start.x();
        float ry = end.y() - start.y();

        float ty = ry * (pos.x() - start.x()) / rx + start.y();

        bool rx1_res = (fabs((float)pos.y() - ty) < 7.);

        bool rx0_res = ((
                            (pos.y() > start.y())
                            && (pos.y() < end.y()))
            && (pos.x() == start.x()));

        return (rx > 0) ? rx1_res : rx0_res;
    }
};
}

#endif // CM_PATCHCORD_H
