// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CMO_DSP_H
#define CMO_DSP_H

#include <qlineedit.h>

#include "Port.h"
#include "UIObject.h"

#include <QGraphicsView>
#include <QStyleOptionGraphicsItem>

#include "Preferences.h"



namespace qtpd {

////
/// \brief gui object: dsp switch box (ui.dsp)
///
class UIDSP : public UIObject {
    Q_OBJECT

private:
    bool _clicked;
    bool _value;

    QGraphicsView* _widget;

public:
    explicit UIDSP()
    {
        deselect();
        _clicked = false;

        _value = false;

        qDebug() << "uidsp";

        t_editMode* em = new t_editMode;
        *em = em_Locked;
        setEditModeRef(em);

        setWidth(40);
        setHeight(40);

        //setMinimumBoxWidth(40);
        //setMinimumBoxHeight(40);

        //setObjectSizeMode(os_Fixed);

        _objectDataModel.setObjectSize(os_Fixed, 40, 40);

        _widget = new QGraphicsView();
        _widget->setScene(new QGraphicsScene(0, 0, 40, 40, _widget));
        _widget->scene()->addItem(this);
        _widget->setFixedSize(40, 40);
        _widget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        _widget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        _widget->setStyleSheet("QGraphicsView { border-style: none; }");
        _value = false;
    };

    static UIObject* createObj(QString data)
    {
        UIDSP* ret = new UIDSP();

        //        QStringList l = data.split(" ");l.removeFirst();
        //        data = l.join(" ");

        ret->setObjectData(data);

        return ret;
    }
    static UIObject* createObject(QString objectData, t_canvas*, QGraphicsView* parent = 0)
    {
        UIDSP* b = new UIDSP();
        //b->setCanvas((void*)parent);

        QString data1 = b->properties()->extractFromPdFileString(objectData);
        b->setObjectData("ui.dsp");

        qDebug() << "obj data" << QString(data1);

        //std::string message = "ui.dsp";

        return (UIObject*)b;
    };

    QGraphicsView* widget()
    {
        return _widget;
    }

    void initProperties()
    {
        UIObject::initProperties();

        properties()->create("Value", "Preset", "0.1", 0.);
    }

    // ---------------

    virtual void paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*)
    {
        p->setClipRect(option->exposedRect);

        QBrush brush(bgColor());
        p->setBrush(brush);
        p->drawRect(boundingRect());
        p->setBrush(QBrush());

        p->setRenderHint(QPainter::HighQualityAntialiasing, true);

        if (_value) {

            p->setPen(QPen(QColor(0, 192, 255), 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));

        } else {
            p->setPen(QPen(QColor(128, 128, 128), 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
        }

        float posx = width() * .4;
        float posy = height() / 2;

        p->setFont(QFont(PREF_QSTRING("Font"), 8, 0, false));
        p->drawText(posx * .4, posy - 4, width() - 2, height() / 2 - 10, 0, "DSP", 0);

        p->drawArc(posx - 10, posy - 10, 20, 20, -60 * 16, 120 * 16);
        p->drawArc(posx - 17, posy - 17, 34, 34, -60 * 16, 120 * 16);

        if (isSelected()) {
            p->setPen(QPen(QColor(0, 192, 255), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        } else {
            p->setPen(QPen(QColor(128, 128, 128), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        }

        p->drawRect(0, 0, width(), height());
    }

    // ------------------------------------------------

    void mousePressEvent(QGraphicsSceneMouseEvent* ev);

    void mouseReleaseEvent(QGraphicsSceneMouseEvent*)
    {
    }

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

    // ------------------------------------------------

    void setPdMessage(QString message)
    {
        setObjectData(message);
    }

    //    static void updateUI(void* , ceammc::AtomList )
    //    {
    //    }

    //    void setPdObject(void* obj)
    //    {
    //        UIObject::setPdObject(obj);
    //        //cmp_connectUI((t_pd*)pdObject(), (void*)this, &UIDSP::updateUI);
    //    }

//    virtual void setServerObject(ServerObject* o)
//    {
//        UIObject::setServerObject(o);
//        if (o)
//            o->connectUI(this, &UIDSP::updateUI);
//    };
};
}

#endif // CMO_MSG_H
