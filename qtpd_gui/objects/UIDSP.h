// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CMO_DSP_H
#define CMO_DSP_H

#include <qlineedit.h>

#include "Port.h"
#include "UIObject.h"

#include "PdLink.h"

namespace qtpd {

////
/// \brief gui object: message box (ui.msg)
///
class UIDSP : public UIObject {
    Q_OBJECT

private:
    bool clicked_;
    bool value_;

public:
    explicit UIDSP(UIObject* parent = 0);
    UIDSP(QWidget* parent = 0)
    {
        UIDSP::UIDSP((UIObject*)parent);

        t_editMode* em = new t_editMode;
        *em = em_Locked;
        setEditModeRef(em);

        setFixedWidth(40);
        setFixedHeight(40);

        setMinimumBoxWidth(40);
        setMinimumBoxHeight(40);

        value_ = false;
    };

    static UIObject* createObject(std::string objectData, t_canvas* pdCanvas, UIWidget* parent = 0)
    {
        UIDSP* b = new UIDSP((UIObject*)parent);

        std::string data1 = b->properties()->extractFromPdFileString(objectData);
        b->setObjectData("ui.toggle");

        qDebug() << "obj data" << QString(data1.c_str());

        std::string message = "ui.dsp";

        //temp
        //        t_object* new_obj = 0;
        //        if (!pdCanvas) {
        //            qDebug("bad pd canvas instance");
        //        } else {
        //            QPoint pos = QPoint(0, 0);
        //            new_obj = cmp_create_object(pdCanvas, message, pos.x(), pos.y());
        //        }

        //        if (new_obj) {
        //            qDebug("created toggle %s | ptr %lu\n", message.c_str(), (long)new_obj);
        //            b->setPdObject(new_obj);
        //        } else {
        //            qDebug("Error: no such object %s", message.c_str());
        //        }

        //        b->addInlet();
        //        b->addOutlet();

        return (UIObject*)b;
    };

    void initProperties()
    {
        UIObject::initProperties();

        properties()->create("Value", "Preset", "0.1", 0.);
    }

    void paintEvent(QPaintEvent*)
    {
        QPainter p(this);

        p.setRenderHint(QPainter::HighQualityAntialiasing, true);

        if (value_) {

            p.setPen(QPen(QColor(0, 192, 255), 2, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
            //p.drawEllipse(QRect(1+lw/2, 1+lw/2, width()-2-lw,height()-2-lw));
            //            p.drawLine(2, 2, width() - 2, height() - 2);
            //            p.drawLine(width() - 2, 2, 2, height() - 2);
        } else {
            p.setPen(QPen(QColor(128, 128, 128), 2, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
        }

        float posx = width() * .4;
        float posy = height() / 2;

        //p.drawEllipse(QPoint(posx, posy), 3, 3);

        p.setFont(QFont(PREF_QSTRING("Font"), 8, 0, false));
        p.drawText(posx * .4, posy-4, width() - 2, height()/2 - 10, 0, "DSP", 0);

        p.drawArc(posx - 10, posy - 10, 20, 20, -60 * 16, 120 * 16);
        p.drawArc(posx - 17, posy - 17, 34, 34, -60 * 16, 120 * 16);

        if (isSelected()) {
            p.setPen(QPen(QColor(0, 192, 255), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        } else {
            p.setPen(QPen(QColor(128, 128, 128), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        }

        p.drawRect(0, 0, width(), height());
    }

    void resizeEvent(QResizeEvent* event)
    {
        UIObject::resizeEvent(event);
        setFixedHeight(width());
    }

    ///////////////////

    void mousePressEvent(QMouseEvent* ev)
    {

        //        if ( (getEditMode()==em_Unlocked) && isSelected())
        //        {
        //            editor_->setText(QString(getObjectData().c_str()));
        //            editor_->show();
        //            editor_->setFocus();
        //        }
        if (getEditMode() == em_Unlocked)
            emit selectBox(this);

        dragOffset = ev->pos();

        if (getEditMode() != em_Unlocked) {
            //            value_ = !value_;
            //            repaint();

            //            if (!pdObject()) {
            //                qDebug("msg: bad pd object!");
            //            } else {
            //                //                //lol
            //                //                cmp_sendstring((t_pd*)pdObject(), ((value_)?((std::string)"set 1").c_str():((std::string)"set 0").c_str()));

            //                cmp_sendstring((t_pd*)pdObject(), ((std::string) "bang").c_str());
            //            }

            value_ = !value_;

            cmp_switch_dsp(value_);

            repaint();
        }
    }

    void mouseReleaseEvent(QMouseEvent*)
    {
        //selected_ = false;

        //if (!getEditMode())
        //        {
        //            //clicked_ = false;
        //            repaint();
        //        }
    }

    void mouseMoveEvent(QMouseEvent* event)
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

        //        QFont myFont(PREF_QSTRING("Font"), 11);
        //        QFontMetrics fm(myFont);
        //        int new_w = fm.width(QString(getObjectData().c_str())) + 10;
        //        new_w = (new_w<25) ? 25 : new_w;
        //        setFixedWidth(new_w);
        //        editor_->setFixedWidth(width()-5);

        //        //temporary
        //        //move
        //        if (getEditMode() == em_Unlocked)
        //        {
        //            if (!getPdObject())
        //            {
        //                qDebug("msg: bad pd object!");
        //            }
        //            else
        //            {

        //                //std::string msg = ("set "+ getObjectData());
        //                //cmp_sendstring((t_pd*)getPdObject(), msg);
        //            }
        //        }
    }

    static void updateUI(void* uiobj, ceammc::AtomList msg)
    {
        //qDebug("update ui");
        //        UIDSP* x = (UIDSP*)uiobj;

        //        //        std::string obj_data;
        //        //        for (int i=0; i<msg.size();i++)
        //        //        {
        //        //            obj_data += msg.at(i).asString() + " ";
        //        //        }

        //        //x->setObjectData(obj_data);

        //        if (msg.size() > 0) {
        //            if (msg.at(0).isFloat())
        //                x->value_ = msg.at(0).asFloat() > 0;
        //            //            if (msg.at(0).isSymbol())
        //            //                if (msg.at(0).asSymbol() == gensym("bang"))
        //            //                    x->value_ = !x->value_;
        //        }

        //emit x->callRepaint();
    }

    void setPdObject(void* obj)
    {
        UIObject::setPdObject(obj);
        cmp_connectUI((t_pd*)pdObject(), (void*)this, &UIDSP::updateUI);
    }
};
}

#endif // CMO_MSG_H
