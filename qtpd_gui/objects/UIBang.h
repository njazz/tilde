// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CMO_BANG_H
#define CMO_BANG_H

#include <QLineEdit>
#include <QTimer>

#include "Port.h"
#include "UIObject.h"

#include "PdLink.h"

#include <QGraphicsView>

namespace qtpd {

////
/// \brief gui object: message box (ui.msg)
///
class UIBang : public UIObject {
    Q_OBJECT

private:
    bool _clicked;
    QTimer* _timer;

public:
    explicit UIBang(); //UIObject* parent = 0);

    static UIObject* createObject(std::string objectData, t_canvas* pdCanvas, QGraphicsView* parent = 0)
    {
        UIBang* b = new UIBang(); //(UIObject*)parent);
        b->setCanvas((void*)parent);

        std::string data1 = b->properties()->extractFromPdFileString(objectData);
        b->setObjectData("ui.bang");

        std::string message = "ui.bang";

        //temp
        t_object* new_obj = 0;
        if (!pdCanvas) {
            qDebug("bad pd canvas instance");
        } else {
            QPoint pos = QPoint(0, 0);
            new_obj = cmp_create_object(pdCanvas, message, pos.x(), pos.y());
        }

        if (new_obj) {
            qDebug("created bang %s | ptr %lu\n", message.c_str(), (long)new_obj);
            b->setPdObject(new_obj);
        } else {
            qDebug("Error: no such object %s", message.c_str());
        }

        b->addInlet();
        b->addOutlet();

        return (UIObject*)b;
    };

    //void paintEvent(QPaintEvent*)
    virtual void paint(QPainter* p, const QStyleOptionGraphicsItem*, QWidget*)
    {
        //QPainter p(viewport());

        if (_clicked) {
            float lw = 2 + width() / 20.;
            p->setPen(QPen(QColor(0, 192, 255), lw, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
            p->drawEllipse(QRect(1 + lw / 2, 1 + lw / 2, width() - 2 - lw, height() - 2 - lw));

        } else {
            p->setPen(QPen(QColor(220, 220, 220), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
            p->drawEllipse(QRect(1, 1, width() - 2, height() - 2));
        }

        if (isSelected()) {
            p->setPen(QPen(QColor(0, 192, 255), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        } else {
            p->setPen(QPen(QColor(128, 128, 128), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        }

        p->drawRect(0, 0, width(), height());
    }

    void resizeEvent(QResizeEvent* event)
    {
        //UIObject::resizeEvent(event);
        setHeight(width());
    }
    ///////////////////

    void mousePressEvent(QGraphicsSceneMouseEvent* ev)
    {

        emit selectBox(this, ev);
        dragOffset = ev->pos().toPoint();

        if (!(getEditMode() == em_Unlocked)) {
            _clicked = true;
            update();

            timerStart();
        }

        //temporary
        //move
        if (getEditMode() != em_Unlocked) {
            if (!pdObject()) {
                qDebug("msg: bad pd object!");
            } else {
                cmp_sendstring((t_pd*)pdObject(), ((std::string) "bang").c_str());
            }
        }
    }

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

    ///////

    static void updateUI(void* uiobj, ceammc::AtomList)
    {
        //qDebug("update ui");
        UIBang* x = (UIBang*)uiobj;

        if (!x->_clicked) {
            x->timerStart();
            x->_clicked = true;
            x->update(); //x->sceneRect());
        }
    }

    void setPdObject(void* obj)
    {
        UIObject::setPdObject(obj);

        cmp_connectUI((t_pd*)pdObject(), (void*)this, &UIBang::updateUI);
        qDebug("connectUI");
    }

    //    std::string asPdFileString()
    //    {
    //        return "ui.bang "+ objectData();
    //    }

    void timerStart()
    {
        {
            emit setBangTimer(100);
        }
    }

signals:
    void setBangTimer(int msec);

private slots:
    void timerAction()
    {
        _clicked = false;
        // viewport()->update();
        emit callRepaint();
    }
};
}

#endif // CMO_MSG_H
