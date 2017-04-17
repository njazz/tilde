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
/// \brief gui object: message box (ui.msg)
///
class UISlider : public UIObject {
    Q_OBJECT

private:
    bool _clicked;
    bool _value;

public:
    explicit UISlider();

    static UIObject* createObject(QString objectData, t_canvas* pdCanvas, QGraphicsView* parent = 0)
    {
        UISlider* b = new UISlider();
        b->setCanvas((void*)parent);

        std::string data1 = b->properties()->extractFromPdFileString(objectData);
        b->setObjectData("ui.toggle");

        qDebug() << "obj data" << QString(data1.c_str());

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
            b->setPdObject(new_obj);
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
        UIObject::initProperties();

        properties()->create("Value", "Preset", "0.1", 0.);
    }

    virtual void paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*)
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



    // ---------------------------------------------------------------

    void mousePressEvent(QGraphicsSceneMouseEvent* ev)
    {

        if (getEditMode() == em_Unlocked)
            emit selectBox(this, ev);

        dragOffset = ev->pos().toPoint();

        if (getEditMode() != em_Unlocked) {

            if (!pdObject()) {
                qDebug("msg: bad pd object!");
            } else {
                cmp_sendstring((t_pd*)pdObject(), ((std::string) "bang").c_str());
            }
        }
    }

    void mouseReleaseEvent(QGraphicsSceneMouseEvent*) {}

    void mouseMoveEvent(QGraphicsSceneMouseEvent* event)
    {
        if (event->buttons() & Qt::LeftButton) {
            emit moveBox(this, event);
        }
        event->ignore();

        //todo move!
        if (getEditMode() != em_Unlocked) {
            setCursor(QCursor(Qt::PointingHandCursor));
        } else {
            setCursor(QCursor(Qt::ArrowCursor));
        }
    }

    ///////

    void setPdMessage(std::string message)
    {
        setObjectData(message);
    }

    static void updateUI(void* uiobj, ceammc::AtomList msg)
    {
        //qDebug("update ui");
        UISlider* x = (UISlider*)uiobj;

        if (msg.size() > 0) {
            if (msg.at(0).isFloat())
                x->_value = msg.at(0).asFloat() > 0;
        }

        emit x->callRepaint();
    }

    void setPdObject(void* obj)
    {
        UIObject::setPdObject(obj);
        cmp_connectUI((t_pd*)pdObject(), (void*)this, &UISlider::updateUI);
    }
};
}

#endif // CMO_MSG_H
