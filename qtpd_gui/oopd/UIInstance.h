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

//#include "cm_pdlink.h"

#include "OOPD.h"

namespace qtpd {

////
/// \brief gui object: oopd class
///
class UIInstance : public UIObject {

    Q_OBJECT

private:
    OPInstance* _opInstance;
    OPClass* _opClass;

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

        b->setHelpName("pdclass-help.pd");

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

        p.setFont(QFont(PREF_QSTRING("Font"), properties()->get("FontSize")->asFontSize(), 0, false));
        p.drawText(2, 3, width() - 2, height() - 3, 0, objectData().c_str(), 0);

        if (isSelected()) {
            p.setPen(QPen(QColor(0, 192, 255), 2, (errorBox()) ? Qt::DashLine : Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
            p.drawRect(0, 0, width(), height());
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

        emit selectBox(this);
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

    static void updateUI(void* uiobj, ceammc::AtomList msg)
    {
        // message handling here - probably move somewhere else?

        if (msg.size() < 1)
            return;
        if (!msg.at(0).isSymbol())
            return;

        // ===========

        if ((msg.at(0).asString() == "new") && (msg.size() > 1)) {

            qDebug() << "new instance";

            UIInstance* x = ((UIInstance*)uiobj);

            x->_opClass = OOPD::inst()->classByName(msg.at(1).asString());

            if (!x->_opClass) {
                cmp_post("class not found: ");
                cmp_post(msg.at(1).asString());
                return;
            }

            x->_opInstance = new OPInstance(x->_opClass);
            cmp_post("new instance");

            if (x->pdObject()) {
                t_outlet* out1 = cmp_get_outlet((t_object*)x->pdObject(), 0);
                if (out1)
                    x->_opInstance->addInstanceOut(out1);
                else
                    cmp_post("instance pd object outlet error");
            }

            //cmp_get_inlet/outlet
            x->_opInstance->addInstanceOut(0);
        }

        // ===========

        if (msg.at(0).asString() == "free") {

            UIInstance* x = ((UIInstance*)uiobj);
            if (x->_opInstance) {
                if (x->pdObject()) {
                    t_outlet* out1 = cmp_get_outlet((t_object*)x->pdObject(), 0);
                    if (out1)

                        x->_opInstance->freeInstanceOut(out1);
                    else
                        cmp_post("instance pd object outlet error");
                }

                x->_opInstance->freeInstanceOut(0);
                delete x->_opInstance;
            }

            x->_opInstance = 0;
            cmp_post("free instance");
        }

        // =========
        // methods
        UIInstance* x = ((UIInstance*)uiobj);
        if (x->_opInstance) {
            x->_opInstance->callMethod(msg);
        }

        if (msg.at(0).asString() == "setobject") {
        }

        if (msg.at(0).asString() == "getobject") {
        }

        //        if (msg.at(0).asString() == "addproperty") {
        //        }

        //        if (msg.at(0).asString() == "delproperty") {
        //        }

        //        if (msg.at(0).asString() == "addmethod") {
        //        }

        //        if (msg.at(0).asString() == "delmethod") {
        //        }

        emit((UIInstance*)uiobj)->updateUISignal();
    }

signals:

    void mouseMoved();
    void rightClicked();

    //void editObject(UIObject* box);
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
