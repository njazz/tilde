// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef UI_PROPERTY
#define UI_PROPERTY

#include <QLineEdit>
#include <QMainWindow>
#include <QtGui>

#include "Port.h"

#include "UIObject.h"

//lazy way
//todo proper pattern
#include "OpenFileProxy.h"

//#include "cm_pdlink.h"

#include "OOPDHeaders.h"

namespace qtpd {

////
/// \brief gui object: oop method box
///
class UIProperty : public UIObject {

    Q_OBJECT

private:
    // for abstracions
    bool _isAbstraction;
    QString _abstractionPath;

    OPClass* _opClass;
    OPInstance* _opInstance;

    std::string _propertyName;

public:
    explicit UIProperty(UIObject* parent = 0);
    //~UIProperty();

    static UIObject* createObject(std::string objectData, t_canvas* pd_Canvas, UIWidget* parent = 0)
    {
        //TODO fix all constructors
        //t_canvas* pd_Canvas;

        if (objectData == "")
            objectData = "property";

        UIProperty* b = new UIProperty((UIObject*)parent);

        //truncate "ui.obj". todo cleanup
        QStringList list = QString(objectData.c_str()).split(" ");

        const char* obj_name = objectData.c_str();
        std::string data1 = b->properties()->extractFromPdFileString(obj_name); //test
        const char* obj_name2 = data1.c_str();

        // fix size changes
        b->setObjectData(data1);
        b->autoResize();

        //std::string methodName;
        if (list.size() < 2) {
            cmp_post("missing argument: method name");
            b->setErrorBox(true);
            return (UIObject*)b;

        } else {
            b->_propertyName = ((QString)list.at(1)).toStdString();
        }

        t_object* new_obj = 0;
        int in_c = 0, out_c = 0;

        if (!pd_Canvas) {
            qDebug("bad pd canvas instance");
            b->setErrorBox(true);
        } else {
            //temp pos = 0;
            QPoint pos = QPoint(0, 0);
            new_obj = cmp_create_object(pd_Canvas, "pdproperty", pos.x(), pos.y());
        }

        if (new_obj) {
            in_c = cmp_get_inlet_count(new_obj);
            out_c = cmp_get_outlet_count(new_obj);

            b->setPdObject(new_obj);

            cmp_connectUI((t_pd*)new_obj, (void*)b, &UIProperty::updateUI);

            b->setHelpName("property-help.pd");

        } else {
            qDebug("Error: no such object 'pdproperty'");
            b->setErrorBox(true);
            in_c = 1;
            out_c = 1;
        }

        qDebug() << "inc outc" << in_c << out_c;

        for (int i = 0; i < in_c; i++)
            b->addInlet();
        for (int i = 0; i < out_c; i++)
            b->addOutlet();

        // OOPD

        // not very clean
        t_canvas* cnv = (t_canvas*)((UIObject*)parent)->pdObject();

        if (OOPD::inst()->canvasIsPatch(cnv)) {
            //fix that
            cmp_post("property in basic patch");
            //b->setErrorBox(true);
        }

        b->_opClass = OOPD::inst()->classByCanvas(cnv);
        b->_opInstance = OOPD::inst()->instanceByCanvas(cnv);

        qDebug() << "this canvas: " << (long)cnv;
        qDebug() << "class: " << (long)b->_opClass << "inst:" << (long)b->_opInstance;

        if (b->_opClass) {

            qDebug("property in class");

            //b->_opClass->addMethod(b->_methodName, "");
            b->_opClass->addProperty(b->_propertyName, "");
        }

        if (b->_opInstance) {
            qDebug("property in instance");

            t_outlet* out1 = cmp_get_outlet((t_object*)b->pdObject(), 1);
            t_outlet* out2 = cmp_get_outlet((t_object*)b->pdObject(), 2);
            if (out1 && out2) {

                b->_opInstance->addProperty(gensym(b->_propertyName.c_str()), out1, out2);
            } else
                cmp_post("property pd object outlet error");
        }

        connect(b, &UIProperty::updateUISignal, b, &UIProperty::updateUISlot);

        return (UIObject*)b;
    };

    ////
    /// \brief paint event
    ///
    void paintEvent(QPaintEvent*)
    {
        QPainter p(viewport());
        p.setRenderHint(QPainter::HighQualityAntialiasing, true);
        p.scale(scale(), scale());

        //remove this later
        if (subpatchWindow()) {
            p.setPen(QPen(QColor(192, 192, 192), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
            p.drawRect(0, 2, width(), height() - 4);
        }

        QColor rectColor = (errorBox()) ? QColor(255, 0, 0) : properties()->get("BorderColor")->asQColor(); //QColor(128, 128, 128);
        p.setPen(QPen(rectColor, 2 + _isAbstraction, (errorBox()) ? Qt::DashLine : Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
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

        //abstraction opening. Fix
        if (getEditMode() != em_Unlocked) {
            if (_isAbstraction) {
                OpenFileProxy::openAbstraction(_abstractionPath);
            }
        }

        if ((getEditMode() == em_Unlocked) && isSelected()) {

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
        if (scene()) scene()->update(sceneRect());
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
        UIProperty* b = (UIProperty*)uiobj;

        //qDebug() << "method out";

        if (b->_opInstance) {
            if (msg.at(0).asSymbol() == gensym("bang")) {
                //cmp_post("bang!");

                AtomList _prop = b->_opInstance->getAtomListProperty(gensym(b->_propertyName.c_str()));
                QStringList list1;
                for (int i = 0; i < _prop.size(); i++) {
                    list1.append(_prop.at(i).asString().c_str());
                }

                cmp_sendstring((t_pd*)b->pdObject(), (std::string) "__output " + list1.join(" ").toStdString());
            } else if (msg.at(0).asSymbol() == gensym("set")) {
                cmp_post("set!");
                //AtomList msg2 = msg;
                //msg2.at(0) = gensym(b->_propertyName.c_str());
                b->_opInstance->setAtomListProperty(gensym(b->_propertyName.c_str()), msg);//.subList(1,msg.size()-1));
                //b->_opInstance->callSetter(msg2);

            } else {
                AtomList fullMsg(gensym(b->_propertyName.c_str()));
                fullMsg.append(msg);
                b->_opInstance->multipleOutput(fullMsg);
            }
        }

        emit b->updateUISignal();
    }

signals:

    void mouseMoved();
    void rightClicked();

    void updateUISignal();

private slots:
    void updateUISlot()
    {
        if (scene()) scene()->update(sceneRect());
    }
};
}

#endif // CM_BOX_H
