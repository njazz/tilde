// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIToggle.h"

#include "PropertyList.h"

#include <QPainter>
#include <QStyleOptionGraphicsItem>

#include "UIObjectData.h"

//#include "ceammc_atomlist.h"
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

        if (!serverObject()) {
            qDebug("msg: bad server object!");
        } else {
            //cmp_sendstring((t_pd*)pdObject(), ((std::string) "bang").c_str());
            //serverObject()->message("bang");


            // XPD-TODO
            // emit signalSendMessage(this->serverObject(), QString("bang"));

            //qDebug("server msg");
        }
    }
}

// ----------

void UIToggle::setPdMessage(QString message)
{
    fromQString(message);
}

/*
void UIToggle::updateUI(void* uiobj, ceammc::AtomList msg)
{
    //qDebug("update ui");
    UIToggle* x = (UIToggle*)uiobj;

    if (msg.size() > 0) {
        if (msg.at(0).isFloat())
            x->_value = msg.at(0).asFloat() > 0;
    }

    emit x->signalCallRepaint();
}
*/

void UIToggle::updateUI(t_cpd_list* list)
{
    // XPD-TODO

    /*
    if (list->size() > 0) {
        if (list->at(0).isFloat())
            _value = list->at(0).asFloat() > 0;
    }
    */

    emit signalCallRepaint();
}
}
