// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_UIInstance_H
#define CM_UIInstance_H

#include <QLineEdit>
#include <QMainWindow>
#include <QtGui>

#include "Port.h"

#include "UIObject.h"

//lazy way
//todo proper pattern
#include "OpenFileProxy.h"

#include "OOPDHeaders.h"

namespace qtpd {

////
/// \brief gui object: oopd class
///
class UIInstance : public UIObject {

    Q_OBJECT

private:
    OPInstance* _opInstance;
    OPClass* _opClass;

    // todo move?
    t_outlet* _out1;

    bool _hasType; //temp
    QString _className;

public:
    explicit UIInstance(UIObject* parent = 0);
    //~UIInstance();

    static UIObject* createObject(std::string objectData, t_canvas* pd_Canvas, UIWidget* parent = 0)
    {
        //TODO fix all constructors
        //t_canvas* pd_Canvas;

        //temporary fix
        if (objectData == "")
            objectData = "pdclass";

        UIInstance* b = new UIInstance((UIObject*)parent);

        QStringList list = QString(objectData.c_str()).split(" ");

        const char* obj_name = objectData.c_str();
        std::string data1 = b->properties()->extractFromPdFileString(obj_name); //test

        // todo cleanup
        const char* obj_name2 = data1.c_str();

        // fix size changes
        b->setObjectData(data1);
        b->autoResize();

        qDebug() << QString(data1.c_str()) << "data1";

        t_object* new_obj = 0;
        int in_c = 1, out_c = 0;

        b->setHelpName("pdinstance-help.pd");

        if (!pd_Canvas) {
            qDebug("bad pd canvas instance");
            b->setErrorBox(true);
        } else {
            new_obj = cmp_create_object(pd_Canvas, "pdinstance", 0, 0);
        }


        // new class w/canvas
        //        if (list.size() > 1) {
        //            b->_opClass = new OPClass(list.at(1).toStdString());
        //        } else {
        //            b->_opClass = new OPClass();
        //        }

        if (new_obj) {
            in_c = cmp_get_inlet_count(new_obj);
            out_c = cmp_get_outlet_count(new_obj);

            b->setPdObject(new_obj);

            cmp_connectUI((t_pd*)new_obj, (void*)b, &UIInstance::updateUI);

        } else {
            qDebug("Error: no pd object");
            b->setErrorBox(true);
            in_c = 1;
            out_c = 0;
        }

        for (int i = 0; i < in_c; i++)
            b->addInlet();
        for (int i = 0; i < out_c; i++)
            b->addOutlet();

        //

        if (list.size()>1)
        {
            //cmp_post("loading type");
            std::string typeName = list.at(1).toStdString();
            //weird
            AtomList msg(gensym("settype"));
            msg.append(gensym(typeName.c_str()));

            b->msgSetType(msg);
        }

        connect(b, &UIInstance::updateUISignal, b, &UIInstance::updateUISlot);

        return (UIObject*)b;
    };

    ////
    /// \brief paint event
    ///
    void paintEvent(QPaintEvent*)
    {
        QPainter p(this);
        p.setRenderHint(QPainter::HighQualityAntialiasing, true);
        p.scale(scale(), scale());

        QColor c1 = (_opInstance) ? QColor(0, 192, 255) : QColor(255, 0, 0);
        p.setPen(QPen(c1, 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        p.drawRect(0, 1, width(), height() - 2);

        //remove this later
        if (subpatchWindow()) {
            p.setPen(QPen(QColor(192, 192, 192), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
            p.drawRect(0, 2, width(), height() - 4);
        }

        QColor rectColor = (errorBox()) ? QColor(255, 0, 0) : properties()->get("BorderColor")->asQColor(); //QColor(128, 128, 128);
        p.setPen(QPen(rectColor, 2, (errorBox()) ? Qt::DashLine : Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        p.drawRect(0, 0, width(), height());
        QTextOption* op = new QTextOption;
        op->setAlignment(Qt::AlignLeft);
        p.setPen(QPen(QColor(0, 0, 0), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));



        if (isSelected()) {
            p.setPen(QPen(QColor(0, 192, 255), 2, (errorBox()) ? Qt::DashLine : Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
            p.drawRect(0, 0, width(), height());
        }

        // -----------

        if (_hasType) {

            p.setFont(QFont(PREF_QSTRING("Font"), properties()->get("FontSize")->asFontSize(), 0, false));
            p.drawText(2, 3, width() - 2, 20 - 3, Qt::AlignCenter, "<"+_className  +">", 0);

            int y=20;
            p.setPen(QPen(QColor(192, 192, 192), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
            p.drawLine(0,y,width(),y);

            for (int i=0;i<_opClass->getPropertyList().size();i++)
            {
                p.setPen(QPen(QColor(0, 0, 0), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
                p.drawText(2, 3 + y, width() - 2, 20 - 3, Qt::AlignCenter, "•"+QString(_opClass->getPropertyList().at(i).asString().c_str()), 0);

                y += 20;
            }

            p.setPen(QPen(QColor(192, 192, 192), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
            p.drawLine(0,y,width(),y);

            for (int i=0;i<_opClass->getMethodList().size();i++)
            {
                p.setPen(QPen(QColor(0, 0, 0), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
                p.drawText(2, 3 + y, width() - 2, 20 - 3, Qt::AlignCenter, QString(_opClass->getMethodList().at(i).asString().c_str()), 0);

                y += 20;
            }

        } else {

            p.setFont(QFont(PREF_QSTRING("Font"), properties()->get("FontSize")->asFontSize(), 0, false));
            p.drawText(2, 3, width() - 2, height() - 3, 0, objectData().c_str(), 0);
        }
    }

    ////
    /// \brief mouse down
    /// \param ev
    ///
    void mousePressEvent(QMouseEvent* ev)
    {
        //context menu
        if (ev->button() == Qt::RightButton) {
            QPoint pos = mapToGlobal(ev->pos());
            showPopupMenu(pos);
            ev->accept();
            return;
        }

        //open canvas for subpatch
        if (getEditMode() != em_Unlocked) {
            if (subpatchWindow()) {
                subpatchWindow()->show();
            }
        }

        //window opening. Fix
        if (getEditMode() != em_Unlocked) {
            if (_opInstance)
                _opInstance->showWindow();
        }

        if ((getEditMode() == em_Unlocked) && isSelected()) {
            //            editor_->setText(QString(objectData().c_str()));
            //            editor_->show();
            //            editor_->setFocus();

            emit editObject(this);
            return;
        }

        emit selectBox(this, ev);
        dragOffset = ev->pos();
    }

    ////
    /// \brief mouse up
    ///
    void mouseReleaseEvent(QMouseEvent*)
    {
        repaint();
    }

    ////
    /// \brief mouse move
    /// \param event
    ///
    void mouseMoveEvent(QMouseEvent* event)
    {
        if (event->buttons() & Qt::LeftButton) {
            emit moveBox(this, event);
        }
        event->ignore();

        if ((getEditMode() != em_Unlocked) && (subpatchWindow())) {
            setCursor(QCursor(Qt::PointingHandCursor));
        } else {
            setCursor(QCursor(Qt::ArrowCursor));
        }
    }

    void setPdMessage(std::string message)
    {
        setObjectData(message);
        autoResize();

        QFont myFont(PREF_QSTRING("Font"), 11);
        QFontMetrics fm(myFont);
        int new_w = fm.width(QString(objectData().c_str())) + 10;
        new_w = (new_w < 25) ? 25 : new_w;
        setFixedWidth(new_w);
        //editor_->setFixedWidth(width() - 5);

        //todo: del object and create new + patchcords

        //
        setInletsPos();
        setOutletsPos();
    }

    // ---------------------------------------------

    void msgNew(ceammc::AtomList msg)
    {
        qDebug() << "new instance";

        _opClass = OOPD::inst()->classByName(msg.at(1).asString());

        if (!_opClass) {
            cmp_post("class not found: ");
            cmp_post(msg.at(1).asString());
            return;
        }

        _opInstance = new OPInstance(_opClass);
        cmp_post("new instance");

        if (pdObject()) {
            _out1 = cmp_get_outlet((t_object*)pdObject(), 0);

            if (_out1)
                _opInstance->addInstanceOut(_out1);
            else
                cmp_post("instance pd object outlet error");
        }

        //cmp_get_inlet/outlet
        _opInstance->addInstanceOut(0);
    }

    //

    void setInletsPos();
    void setOutletsPos();

    //
    void typedInlets()
    {
        addInlet();
    }

    void msgFree(AtomList msg)
    {

        if (_opInstance) {
            if (pdObject()) {
                t_outlet* out1 = cmp_get_outlet((t_object*)pdObject(), 0);
                if (out1)

                    _opInstance->freeInstanceOut(out1);
                else
                    cmp_post("instance pd object outlet error");
            }

            _opInstance->freeInstanceOut(0);
            //delete _opInstance;
            _opInstance->release();
        }

        _opInstance = 0;
        cmp_post("free instance");
    }

    void msgSetObject(AtomList msg)
    {
        cmp_post("pdobject");

        if (msg.size() < 2) {
            cmp_post("setobject: needs pdobject pointer");
            return;
        }

        qDebug() << "symbol: " << msg.at(1).asSymbol()->s_name;

        _opInstance = OPInstance::fromObjectSymbol(msg.at(1).asSymbol());

        _opInstance->retain();

        qDebug() << "instance: " << _opInstance;

        repaint();
    }

    void msgGetObject(AtomList msg)
    {

        t_symbol* s = _opInstance->getObjectSymbol();

        if (_out1) {
            AtomList list1;
            list1.append(gensym("pdobject"));
            list1.append(s);

            list1.output(_out1);

        } else {
            cmp_post("instance outlet error!");
        }
    }

    void msgSetType(AtomList msg)
    {
        if (msg.size() < 2) {
            _hasType = false;
            _opInstance = 0;
            _opClass = 0;
            setFixedHeight(20);
            repaint();
            return;
        } else {
            _opClass = OOPD::inst()->classByName(msg.at(1).asString());
            // not working:
            //_opClass = OOPD::inst()->classBySymbol(msg.at(1).asSymbol());

            //resize
            if (_opClass) {
                AtomList list;
                list = _opClass->getMethodList();
                list.append(_opClass->getPropertyList());

                setFixedHeight(20 * (list.size() + 1));



                // inlets and outlets
                for (int i=0;i<_opClass->getPropertyList().size();i++)
                {
                    cmp_sendstring((t_pd*)pdObject(), "__newin");
                    cmp_sendstring((t_pd*)pdObject(), "__newout");
                    addInlet();
                    addOutlet();
                }

                for (int i=0;i<_opClass->getMethodList().size();i++)
                {
                    cmp_sendstring((t_pd*)pdObject(), "__newin");
                    cmp_sendstring((t_pd*)pdObject(), "__newout");
                    addInlet();
                    addOutlet();
                }

                _hasType = true;

                // ports position
                setInletsPos();
                setOutletsPos();


                _className = msg.at(1).asString().c_str();

            } else {
                cmp_post("class not found!");
                cmp_post(msg.at(1).asString().c_str());
                setFixedHeight(20);
            }

            repaint();
        }
    }

    // ---------------------------------------------

    static void updateUI(void* uiobj, ceammc::AtomList msg)
    {
        // message handling here - probably move somewhere else?

        if (msg.size() < 1)
            return;
        if (!msg.at(0).isSymbol())
            return;

        UIInstance* x = ((UIInstance*)uiobj);
        // =========
        // methods
        if (x->_opInstance) {
            x->_opInstance->callMethod(msg);
            //return;
        }

        // ===========

        if ((msg.at(0).asString() == "new") && (msg.size() > 1)) {
            x->msgNew(msg);
        }

        if (msg.at(0).asString() == "free") {
            x->msgFree(msg);
        }

        if (msg.at(0).asString() == "pdobject") {
            x->msgSetObject(msg);
        }

        if (msg.at(0).asString() == "getobject") {
            x->msgGetObject(msg);
        }

        if (msg.at(0).asString() == "settype") {
            x->msgSetType(msg);
        }

        // properties
        QString qmsg = msg.at(0).asString().c_str();

        if (qmsg.at(0) == "@") {
            qmsg.remove(0, 1);

            if (qmsg.at(qmsg.size() - 1) == "?") {
                if (x->_opInstance) {
                    qmsg.remove(qmsg.size() - 1, 1);
                    t_symbol* propertyName = gensym(qmsg.toStdString().c_str());
                    // getter
                    //AtomList list = x->_opInstance->getAtomListProperty(propertyName);

                    x->_opInstance->callGetter(propertyName);

                    //                    if (x->_out1) {
                    //                        list.output(x->_out1);
                    //                    } else {
                    //                        cmp_post("bad pdobject outlet pointer");
                    //}
                }
            } else {
                if (x->_opInstance) {
                    // setter

                    AtomList list1 = msg;
                    list1.remove(0);
                    t_symbol* propertyName = gensym(qmsg.toStdString().c_str());

                    qDebug() << "Property name: " << propertyName->s_name;
                    //x->_opInstance->setAtomListProperty(propertyName, list1);
                    x->_opInstance->callSetter(propertyName, list1);
                }
            }
        }

        emit((UIInstance*)uiobj)->updateUISignal();
    }

signals:

    void
    mouseMoved();
    void rightClicked();

signals:
    void updateUISignal();

private slots:
    void updateUISlot()
    {
        repaint();
    }
};
}

#endif // CM_UIInstance_H
