// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef cmo_float_H
#define cmo_float_H

#include "Port.h"
#include "UIObject.h"

#include <QGraphicsView>
#include <QLineEdit>

//#include "cm_pdlink.h"

namespace qtpd {

////
/// \brief gui object: float number box (ui.float)
///
class UIFloat : public UIObject {
    Q_OBJECT

private:
    float _startY;

public:
    explicit UIFloat(); //UIObject* parent = 0);

    static UIObject* createObject(QString objectData, t_canvas* pdCanvas, QGraphicsView* parent = 0)
    {
        UIFloat* b = new UIFloat(); //(UIObject*)parent);
        b->setCanvas((void*)parent);

        std::string data1 = b->properties()->extractFromPdFileString(objectData);
        b->setObjectData("ui.float"); //todo

        b->autoResize();

        std::string message = "ui.float";

        //temp
        t_object* new_obj = 0;
        if (!pdCanvas) {
            qDebug("bad pd canvas instance");
        } else {
            QPoint pos = QPoint(0, 0);
            new_obj = cmp_create_object(pdCanvas, message, pos.x(), pos.y());
        }

        if (new_obj) {
            qDebug("created msgbox %s | ptr %lu\n", message.c_str(), (long)new_obj);
            b->setPdObject(new_obj);
        } else {
            qDebug("Error: no such object %s", message.c_str());
        }

        b->setPdMessage(objectData.toStdString());

        b->addInlet();
        b->addOutlet();

        b->autoResize();

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

        QPolygon poly;
        poly << QPoint(0, 0) << QPoint(width() - 5, 0) << QPoint(width(), 5) << QPoint(width(), height()) << QPoint(0, height());

        p->setPen(QPen(QColor(220, 220, 220), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        QPainterPath tmpPath;
        tmpPath.addPolygon(poly);
        QBrush br = QBrush(QColor(220, 220, 220), Qt::SolidPattern);
        p->fillPath(tmpPath, br);

        if (isSelected()) {
            p->setPen(QPen(QColor(0, 192, 255), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        }

        else {
            p->setPen(QPen(QColor(128, 128, 128), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        }

        p->drawPolygon(poly);

        QTextOption* op = new QTextOption;
        op->setAlignment(Qt::AlignLeft);
        p->setPen(QPen(QColor(0, 0, 0), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

        p->setFont(QFont(PREF_QSTRING("Font"), 11, 0, false));
        p->drawText(2, 3, width() - 2, height() - 3, 0, objectData().c_str(), 0);
    }

    void autoResize()
    {
        QFont myFont(PREF_QSTRING("Font"), 11);
        QFontMetrics fm(myFont);

        setWidth((int)fm.width(QString("00.00")) + 5); //todo
        if (width() < minimumBoxWidth())
            setWidth(minimumBoxWidth());
    }

    ///////////////////

    void mousePressEvent(QGraphicsSceneMouseEvent* ev)
    {

        _startY = ev->pos().y();

        if ((getEditMode() == em_Unlocked)) {
            emit selectBox(this, ev);
            dragOffset = ev->pos().toPoint();
        }
    }

    void mouseReleaseEvent(QGraphicsSceneMouseEvent*)
    {
    }

    void mouseMoveEvent(QGraphicsSceneMouseEvent* event)
    {
        if ((event->buttons() & Qt::LeftButton) && (getEditMode() == em_Unlocked)) {
            emit moveBox(this, event);
        }

        if ((event->buttons() & Qt::LeftButton) && (getEditMode() != em_Unlocked)) {
            //todo fix
            setObjectData(std::to_string(::atof(objectData().c_str()) - event->pos().y() + _startY)); //- startY
            autoResize();
            _startY = event->pos().y();

            std::string send = "set " + objectData();
            cmp_sendstring((t_pd*)pdObject(), send.c_str());
            cmp_sendstring((t_pd*)pdObject(), ((std::string) "bang").c_str());

            update();
        }

        event->ignore();

        //todo move!
        if (getEditMode() != em_Unlocked) {
            setCursor(QCursor(Qt::UpArrowCursor));
        } else {
            setCursor(QCursor(Qt::ArrowCursor));
        }
    }

    ///////

    void setPdMessage(std::string message)
    {
        setObjectData(message);
        autoResize();

        QFont myFont(PREF_QSTRING("Font"), 11);
        QFontMetrics fm(myFont);
        int new_w = fm.width(QString(objectData().c_str())) + 10;
        new_w = (new_w < 25) ? 25 : new_w;
        setWidth(new_w);

        //temporary
        //move
        if (getEditMode() == em_Unlocked) {
            if (!pdObject()) {
                qDebug("msg: bad pd object!");
            } else {

                std::string msg = ("set " + objectData());
                cmp_sendstring((t_pd*)pdObject(), msg);
            }
        }
    }

    static void updateUI(void* uiobj, ceammc::AtomList msg)
    {
        UIFloat* x = (UIFloat*)uiobj;

        if (msg.size() > 0) {
            x->setObjectData(msg.at(0).asString());
            emit x->callRepaint();
        }
    }

    void setPdObject(void* obj)
    {
        UIObject::setPdObject(obj);
        cmp_connectUI((t_pd*)pdObject(), (void*)this, &UIFloat::updateUI);
    }

    std::string asPdFileString()
    {
        // THE fix
        std::string ret;

        ret = "#X obj ";
        ret += std::to_string(x()) + " " + std::to_string(y()) + " ";
        ret += "ui.float ";
        ret += ((objectData() == "") ? ((std::string) "") : (objectData() + " ")) + properties()->asPdFileString();

        return ret;
    }
};
}

#endif // cmo_float_H
