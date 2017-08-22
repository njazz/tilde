// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UISlider.h"

#include "PropertyList.h"
#include "UIObjectData.h"
#include <QStyleOptionGraphicsItem>

#include "ceammc_atomlist.h"

namespace tilde {

UISlider::UISlider()
{
    setSize(20, 100);

    deselect();
    _clicked = false;

    objectData()->setObjectSize(os_Free, 20, 20);

    _value = false;

    initProperties();

    resizeEvent();
}

UIObject* UISlider::createObj(QString data)
{
    UISlider* ret = new UISlider();

    //        QStringList l = data.split(" ");l.removeFirst();
    //        data = l.join(" ");

    ret->fromQString(data);

    return ret;
}

void UISlider::initProperties()
{
    //cmp_post("init slider prop");
    UIObject::initProperties();

    properties()->create("Value", "Preset", "0.1", 0.);

    properties()->create("Offset", "Slider", "0.1", 0.);
    properties()->create("Range", "Slider", "0.1", 127.);
}

void UISlider::paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*)
{
    p->setClipRect(option->exposedRect);

    QBrush brush(bgColor());
    p->setBrush(brush);
    p->drawRect(boundingRect());
    p->setBrush(QBrush());

    float raw_value = (_value - properties()->get("Offset")->asFloat()) / properties()->get("Range")->asFloat();

    if (_isHorizontal) {
        float x = raw_value * width();
        float lw = 3;
        p->setPen(QPen(QColor(0, 192, 255), lw, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
        p->drawLine(x, 1, x, height() - 2);

    } else {
        float y = (1 - raw_value) * height();
        float lw = 3;
        p->setPen(QPen(QColor(0, 192, 255), lw, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
        p->drawLine(1, y, width() - 2, y);
    }

    if (isSelected()) {
        p->setPen(QPen(QColor(0, 192, 255), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
    } else {
        p->setPen(QPen(QColor(128, 128, 128), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
    }

    p->drawRect(0, 0, width(), height());
}

// ---------------------------------------------------------------

float UISlider::valueFromPoint(QPoint pos)
{
    float ret;

    if (_isHorizontal)
        ret = pos.x() / width();
    else
        ret = 1 - pos.y() / height();

    if (ret < 0)
        ret = 0;
    if (ret > 1)
        ret = 1;

    ret = ret * properties()->get("Range")->asFloat() + properties()->get("Offset")->asFloat();

    return ret;
}

void UISlider::mousePressEvent(QGraphicsSceneMouseEvent* ev)
{

    if (getEditMode() == em_Unlocked)
        emit selectBox(this, ev);

    if (ev->button() == Qt::RightButton) {

        QPoint pos;

        if (scene()
            && !scene()->views().isEmpty()
            && scene()->views().first()
            && scene()->views().first()->viewport()) {

            QGraphicsView* v = scene()->views().first();
            pos = v->viewport()->mapToGlobal(ev->pos().toPoint());

            // TODO
            showPopupMenu(pos + this->pos().toPoint());
            ev->accept();
        }

        return;
    }

    dragOffset = ev->pos().toPoint();

    if (getEditMode() != em_Unlocked) {

        float val = valueFromPoint(ev->pos().toPoint());
        QString val_str = std::to_string(val).c_str();

        if (!serverObject()) {
            qDebug("msg: bad pd object!");
        } else {
            //                cmp_sendstring((t_pd*)pdObject(), ((std::string) "set " + val_str).c_str());
            //                cmp_sendstring((t_pd*)pdObject(), ((std::string) "bang ").c_str());
            // serverObject()->message(((std::string) "set " + val_str));
            // serverObject()->message(((std::string) "bang " + val_str));

            // XPD-TODO
            // emit signalSendMessage(this->serverObject(), QString("set " + val_str));
            // emit signalSendMessage(this->serverObject(), QString("bang "));
        }
    }
}

void UISlider::mouseReleaseEvent(QGraphicsSceneMouseEvent*) {}

void UISlider::mouseMoveEvent(QGraphicsSceneMouseEvent* event)
{
    if (event->buttons() & Qt::LeftButton) {
        emit moveBox(this, event);
    }
    event->ignore();

    //std::string val_str;
    //todo move!
    if (getEditMode() != em_Unlocked) {

        float val = valueFromPoint(event->pos().toPoint());
        //val_str = std::to_string(val);

        setCursor(QCursor(Qt::PointingHandCursor));
    } else {
        setCursor(QCursor(Qt::ArrowCursor));
    }

    // TODO-PD_OBJECT
    //        if (pdObject()) {
    //            cmp_sendstring((t_pd*)pdObject(), ((std::string) "set " + val_str).c_str());
    //            cmp_sendstring((t_pd*)pdObject(), ((std::string) "bang ").c_str());

    if (serverObject()) {
        float val = valueFromPoint(event->pos().toPoint());

        QString val_str = std::to_string(val).c_str();

        // XPD-TODO
        // emit signalSendMessage(this->serverObject(), QString("set " + val_str));
        // emit signalSendMessage(this->serverObject(), QString("bang "));
    }

    //        }
}

// ----------

void UISlider::setPdMessage(QString message)
{
    fromQString(message);
}

void UISlider::updateUI(AtomList* msg)
{
    if (msg->size() > 0) {
        if (msg->at(0).isFloat())
            _value = msg->at(0).asFloat();

        //            if (x->_value < 0)
        //                x->_value = 0;
        //            if (x->_value > 1)
        //                x->_value = 1;
    }

    emit signalCallRepaint();
}

void UISlider::resizeEvent()
{
    UIObject::resizeEvent();

    _isHorizontal = width() > height();
}
}
