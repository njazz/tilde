// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CMO_TOGGLE_H
#define CMO_TOGGLE_H

#include <qlineedit.h>

#include "UIObject.h"
#include "Port.h"

#include "PdLink.h"

namespace qtpd {

////
/// \brief gui object: message box (ui.msg)
///
class UIToggle : public UIObject {
    Q_OBJECT

private:
    bool _clicked;
    bool _value;

public:
    explicit UIToggle(UIObject* parent = 0);

    static UIObject* createObject(std::string objectData, t_canvas* pdCanvas, UIWidget* parent = 0)
    {
        UIToggle* b = new UIToggle((UIObject*)parent);

        std::string data1 = b->properties()->extractFromPdFileString(objectData);
        b->setObjectData("ui.toggle");

        qDebug() << "obj data" << QString(data1.c_str());

        std::string message = "ui.toggle";

        //temp
        t_object* new_obj = 0;
        if (!pdCanvas) {
            qDebug("bad pd canvas instance");
        } else {
            QPoint pos = QPoint(0, 0);
            new_obj = cmp_create_object(pdCanvas, message, pos.x(), pos.y());
        }

        if (new_obj) {
            qDebug("created toggle %s | ptr %lu\n", message.c_str(), (long)new_obj);
            b->setPdObject(new_obj);
        } else {
            qDebug("Error: no such object %s", message.c_str());
        }

        //b->setFixedSize(20,20);
        //b->setPdMessage("");

        b->addInlet();
        b->addOutlet();

        return (UIObject*)b;
    };

    void initProperties()
    {
        UIObject::initProperties();

        properties()->create("Value", "Preset", "0.1", 0.);
    }

    void paintEvent(QPaintEvent*)
    {
        QPainter p(viewport());

        if (_value) {
            float lw = 2; //+width()/20.;
            p.setPen(QPen(QColor(0, 192, 255), lw, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
            //p.drawEllipse(QRect(1+lw/2, 1+lw/2, width()-2-lw,height()-2-lw));
            p.drawLine(2, 2, width() - 2, height() - 2);
            p.drawLine(width() - 2, 2, 2, height() - 2);
        }

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
            emit selectBox(this, ev);

        dragOffset = ev->pos();

        if (getEditMode() != em_Unlocked) {
            //            value_ = !value_;
            //            if (scene()) scene()->update(sceneRect());

            if (!pdObject()) {
                qDebug("msg: bad pd object!");
            } else {
                //                //lol
                //                cmp_sendstring((t_pd*)pdObject(), ((value_)?((std::string)"set 1").c_str():((std::string)"set 0").c_str()));

                cmp_sendstring((t_pd*)pdObject(), ((std::string) "bang").c_str());
            }
        }
    }

    void mouseReleaseEvent(QMouseEvent*)
    {
        //selected_ = false;

        //if (!getEditMode())
        //        {
        //            //clicked_ = false;
        //            if (scene()) scene()->update(sceneRect());
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
        UIToggle* x = (UIToggle*)uiobj;

        //        std::string obj_data;
        //        for (int i=0; i<msg.size();i++)
        //        {
        //            obj_data += msg.at(i).asString() + " ";
        //        }

        //x->setObjectData(obj_data);

        if (msg.size() > 0) {
            if (msg.at(0).isFloat())
                x->_value = msg.at(0).asFloat() > 0;
            //            if (msg.at(0).isSymbol())
            //                if (msg.at(0).asSymbol() == gensym("bang"))
            //                    x->value_ = !x->value_;
        }

        emit x->callRepaint();
        //x->if (scene()) scene()->update(sceneRect());
    }

    void setPdObject(void* obj)
    {
        UIObject::setPdObject(obj);
        cmp_connectUI((t_pd*)pdObject(), (void*)this, &UIToggle::updateUI);
    }

    //    std::string asPdFileString()
    //    {return "ui.toggle "+ objectData();}
};
}

#endif // CMO_MSG_H
