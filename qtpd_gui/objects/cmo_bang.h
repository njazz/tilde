// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CMO_BANG_H
#define CMO_BANG_H

#include <QLineEdit>
#include <QTimer>

#include "cm_object.h"
#include "cm_port.h"

#include "cm_pdlink.h"

namespace qtpd {

////
/// \brief gui object: message box (ui.msg)
///
class UIBang : public UIObject {
    Q_OBJECT

private:
    bool clicked_;

    QTimer* timer_;

public:
    explicit UIBang(UIObject* parent = 0);

    static UIObject* createObject(std::string objectData, t_canvas* pdCanvas, UIWidget* parent = 0)
    {
        UIBang* b = new UIBang((UIObject*)parent);

        std::string data1 = b->properties()->extractFromPdFileString(objectData);
        b->setObjectData("");

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

    void paintEvent(QPaintEvent*)
    {
        QPainter p(this);

        if (this->clicked_) {
            float lw = 2 + this->width() / 20.;
            p.setPen(QPen(QColor(0, 192, 255), lw, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
            p.drawEllipse(QRect(1 + lw / 2, 1 + lw / 2, this->width() - 2 - lw, this->height() - 2 - lw));

        } else {
            p.setPen(QPen(QColor(220, 220, 220), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
            p.drawEllipse(QRect(1, 1, this->width() - 2, this->height() - 2));
        }

        if (this->isSelected()) {
            p.setPen(QPen(QColor(0, 192, 255), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        } else {
            p.setPen(QPen(QColor(128, 128, 128), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        }

        p.drawRect(0, 0, this->width(), this->height());
    }

    void resizeEvent(QResizeEvent* event)
    {
        UIObject::resizeEvent(event);
        this->setFixedHeight(this->width());
    }
    ///////////////////

    void mousePressEvent(QMouseEvent* ev)
    {

        emit selectBox(this);
        this->dragOffset = ev->pos();

        if (!(this->getEditMode() == em_Unlocked)) {
            this->clicked_ = true;
            this->repaint();

            this->timerStart();
        }

        //temporary
        //move
        if (this->getEditMode() != em_Unlocked) {
            if (!this->pdObject()) {
                qDebug("msg: bad pd object!");
            } else {
                cmp_sendstring((t_pd*)this->pdObject(), ((std::string) "bang").c_str());
            }
        }
    }

    void mouseReleaseEvent(QMouseEvent*)
    {
    }

    void mouseMoveEvent(QMouseEvent* event)
    {
        if (event->buttons() & Qt::LeftButton) {
            emit moveBox(this, event);
        }
        event->ignore();

        //todo move!
        if (this->getEditMode() != em_Unlocked) {
            this->setCursor(QCursor(Qt::PointingHandCursor));
        } else {
            this->setCursor(QCursor(Qt::ArrowCursor));
        }
    }

    ///////

    static void updateUI(void* uiobj, ceammc::AtomList)
    {
        //qDebug("update ui");
        UIBang* x = (UIBang*)uiobj;

        if (!x->clicked_) {
            x->timerStart();
            x->clicked_ = true;
            x->repaint();
        }
    }

    void setPdObject(void* obj)
    {
        UIObject::setPdObject(obj);

        cmp_connectUI((t_pd*)this->pdObject(), (void*)this, &UIBang::updateUI);
        qDebug("connectUI");
    }

    //    std::string asPdFileString()
    //    {
    //        return "ui.bang "+ this->objectData();
    //    }

    void timerStart()
    {
        {
            //this->timer_->start(100);
            emit setBangTimer(100);
        }
    }

signals:
    void setBangTimer(int msec);

private slots:
    void timerAction()
    {
        this->clicked_ = false;
        //this->repaint();
        emit callRepaint();
    }
};
}

#endif // CMO_MSG_H
