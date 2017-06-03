// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CMO_SLIDER_H
#define CMO_SLIDER_H

#include <qlineedit.h>

#include "Port.h"
#include "UIObject.h"

#include "PdLink.h"

#include <QGraphicsView>

namespace qtpd {

////
/// \brief gui object: slider (ui.slider)
///
class UISlider : public UIObject {
    Q_OBJECT

private:
    bool _clicked;
    float _value; ///> 0..1 here
    float _isHorizontal;

public:
    explicit UISlider();

    static UIObject* createObj(QString data)
    {
        UISlider* ret = new UISlider();

        QStringList l = data.split(" ");l.removeFirst();
        data = l.join(" ");
        ret->setObjectData(data);

        return ret;
    }

    static UIObject* createObject(QString objectData, t_canvas* pdCanvas, QGraphicsView* parent = 0)
    {
        UISlider* b = new UISlider();
        //b->setCanvas((void*)parent);

        QString data1 = b->properties()->extractFromPdFileString(objectData);
        b->setObjectData("ui.slider");

        qDebug() << "obj data" << QString(data1);

        std::string message = "ui.sliders";

        //temp
        t_object* new_obj = 0;
        if (!pdCanvas) {
            qDebug("bad pd canvas instance");
        } else {
            QPoint pos = QPoint(0, 0);
            new_obj = cmp_create_object(pdCanvas, message, pos.x(), pos.y());
        }

        if (new_obj) {
            qDebug("created slider %s | ptr %lu\n", message.c_str(), (long)new_obj);
            //b->setPdObject(new_obj);
        } else {
            qDebug("Error: no such object %s", message.c_str());
        }

        b->addInlet();
        b->addOutlet();

        b->resizeEvent();

        return (UIObject*)b;
    };

    void initProperties()
    {
        //cmp_post("init slider prop");
        UIObject::initProperties();

        properties()->create("Value", "Preset", "0.1", 0.);

        properties()->create("Offset", "Slider", "0.1", 0.);
        properties()->create("Range", "Slider", "0.1", 127.);
    }

    virtual void paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*)
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

    float valueFromPoint(QPoint pos)
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

    void mousePressEvent(QGraphicsSceneMouseEvent* ev)
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
            std::string val_str = std::to_string(val);

            // TODO-PD_OBJECT
//            if (!pdObject()) {
//                qDebug("msg: bad pd object!");
//            } else {
//                cmp_sendstring((t_pd*)pdObject(), ((std::string) "set " + val_str).c_str());
//                cmp_sendstring((t_pd*)pdObject(), ((std::string) "bang ").c_str());
//            }
        }
    }

    void mouseReleaseEvent(QGraphicsSceneMouseEvent*) {}

    void mouseMoveEvent(QGraphicsSceneMouseEvent* event)
    {
        if (event->buttons() & Qt::LeftButton) {
            emit moveBox(this, event);
        }
        event->ignore();

        std::string val_str;
        //todo move!
        if (getEditMode() != em_Unlocked) {

            float val = valueFromPoint(event->pos().toPoint());
            val_str = std::to_string(val);

            setCursor(QCursor(Qt::PointingHandCursor));
        } else {
            setCursor(QCursor(Qt::ArrowCursor));
        }

        // TODO-PD_OBJECT
//        if (pdObject()) {
//            cmp_sendstring((t_pd*)pdObject(), ((std::string) "set " + val_str).c_str());
//            cmp_sendstring((t_pd*)pdObject(), ((std::string) "bang ").c_str());
//        }
    }

    ///////

    void setPdMessage(QString message)
    {
        setObjectData(message);
    }

    static void updateUI(void* uiobj, ceammc::AtomList msg)
    {
        //qDebug("update ui");
        UISlider* x = (UISlider*)uiobj;

        if (msg.size() > 0) {
            if (msg.at(0).isFloat())
                x->_value = msg.at(0).asFloat();

            //            if (x->_value < 0)
            //                x->_value = 0;
            //            if (x->_value > 1)
            //                x->_value = 1;
        }

        emit x->callRepaint();
    }

//    void setPdObject(void* obj)
//    {
//        UIObject::setPdObject(obj);
//        cmp_connectUI((t_pd*)pdObject(), (void*)this, &UISlider::updateUI);
//    }

    void resizeEvent()
    {
        UIObject::resizeEvent();

        _isHorizontal = width() > height();
    }

    virtual void setServerObject(ServerObject* o)
    {
        UIObject::setServerObject(o);
        if (o)
            o->connectUI(this, &UISlider::updateUI);
    };
};
}

#endif // CMO_MSG_H
