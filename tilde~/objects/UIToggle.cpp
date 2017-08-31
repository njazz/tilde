// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIToggle.h"

#include "PropertyList.h"

#include <QPainter>
#include <QStyleOptionGraphicsItem>

#include "UIObjectData.h"

#include "../../xpd-transition/xpd-headers.h"

namespace tilde {

UIToggle::UIToggle()
{
    setSize(20, 20);
    objectData()->setObjectSize(os_Square, 20, 20);

    deselect();
    _clicked = false;
    _value = false;

    resizeEvent();
}

UIObject* UIToggle::createObj(QString data)
{
    UIToggle* ret = new UIToggle();

    ret->fromQString(data);

    return ret;
}

void UIToggle::initProperties()
{
    UIObject::initProperties();

    properties()->create("Value", "Preset", "0.1", 0.);
}

void UIToggle::paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*)
{
    p->setClipRect(option->exposedRect);

    QBrush brush(bgColor());
    p->setBrush(brush);
    p->drawRect(boundingRect());
    p->setBrush(QBrush());

    if (_value) {
        float lw = 2; //+width()/20.;
        p->setPen(QPen(QColor(0, 192, 255), lw, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
        p->drawLine(2, 2, width() - 2, height() - 2);
        p->drawLine(width() - 2, 2, 2, height() - 2);
    }

    if (isSelected()) {
        p->setPen(QPen(QColor(0, 192, 255), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
    } else {
        p->setPen(QPen(QColor(128, 128, 128), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
    }

    p->drawRect(0, 0, width(), height());
}

void UIToggle::resizeEvent()
{

    setHeight(width());
    UIObject::resizeEvent();
}

// ---------------------------------------------------------------

void UIToggle::objectPressEvent(QGraphicsSceneMouseEvent* ev)
{

    if (getEditMode() == em_Unlocked)
        emit selectBox(this, ev);

    dragOffset = ev->pos().toPoint();

    if (getEditMode() != em_Unlocked) {

        //            if (!pdObject()) {
        //                qDebug("msg: bad pd object!");
        //            } else {
        //                cmp_sendstring((t_pd*)pdObject(), ((std::string) "bang").c_str());
        //            }

        if (!serverObjectId()) {
            qDebug("msg: bad server object!");
        } else {
            //cmp_sendstring((t_pd*)pdObject(), ((std::string) "bang").c_str());
            //serverObject()->message("bang");

            emit signalSendMessage(this->serverObjectId(), QString("bang"));

            //qDebug("server msg");
        }
    }
}

// ----------

void UIToggle::setPdMessage(QString message)
{
    fromQString(message);
}

void UIToggle::updateUI(t_cpd_list* list)
{
    //qDebug() << " <<< toggle";

    if (cpd_list_size(list) > 0) {

        t_cpd_atom* a = cpd_list_at(list, 0);
        //if (cpd_atom_is_float(a))
        _value = cpd_atom_get_float(a) > 0;
    }

    for (int i = 0; i < cpd_list_size(list); i++) {
        t_cpd_atom* a = cpd_list_at(list, i);
        t_cpd_symbol* s = cpd_atom_get_symbol(a);
        if (s) {
            std::string str = cpd_symbol_name(s);
            printf("value %d %s\n", i, str.c_str());
        } else {
            float f = cpd_atom_get_float(a);
            printf("value-s %d %f\n", i, f);
        }
    }

    emit signalCallRepaint();
}
}
