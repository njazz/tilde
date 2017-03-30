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
    UIWidget* _obj1;
    UIWidget* _out1;
    UIWidget* _obj2;
    UIWidget* _in2;

    patchcordTypeEnum patchcordType_;

public:
    bool mouseover;
    bool selected;
    //explicit cm_patchcord(cm_widget *parent = 0);

    //cm_patchcord();
    explicit Patchcord(UIWidget* _obj1, UIWidget* _out1, UIWidget* _obj2, UIWidget* _in2);

    QPoint startPoint()
    {

        QPoint start = QPoint(0, 0);

        if (_obj1 && _out1)
            start = QPoint(_obj1->pos().x() + _out1->pos().x() + _out1->width() / 2,
                _obj1->pos().y() + _out1->pos().y() + _out1->height() / 2);

        return start;
    }

    QPoint endPoint()
    {
        QPoint end = QPoint(0, 0);
        if (_obj2 && _in2)
            end = QPoint(_obj2->pos().x() + _in2->pos().x() + _in2->width() / 2,
                _obj2->pos().y() + _in2->pos().y() + _in2->height() / 2);
        return end;
    }

    //// will not be unused if drawed by the class itself
    patchcordTypeEnum patchcordType() { return patchcordType_; }
    void setPatchcordType(patchcordTypeEnum v) { patchcordType_ = v; }

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
            return ((Port*)_out1)->portIndex;
        else
            return -1;
    }

    int inletIndex()
    {
        if ((Port*)_in2)
            return ((Port*)_in2)->portIndex;
        else
            return -1;
    }

    ////

    bool connectsObject(UIWidget* obj)
    {
        return ((obj == _obj1) || (obj == _obj2));
    }

    bool hover(QPoint pos)
    {
        QPoint start = startPoint();
        QPoint end = endPoint();

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

//    std::string asPdFileString(Patchcord* pcord)
//    {
//        //TODO

//        int obj1i = findObjectIndex(pcord->obj1());
//        int obj2i = findObjectIndex(pcord->obj2());

//        if ((obj1i >= 0) && (obj2i >= 0)) {
//            std::string ret;

//            ret += std::to_string(obj1i) + " ";
//            ret += std::to_string(pcord->outletIndex()) + " ";

//            ret += std::to_string(obj2i) + " ";
//            ret += std::to_string(pcord->inletIndex()) + " ";

//            return ret;

//        } else
//            qDebug("patchcord to string error");

//        return "";
//    }
};
}

#endif // CM_PATCHCORD_H
