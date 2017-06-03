// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_UICLASS_H
#define CM_UICLASS_H

#include <QLineEdit>
#include <QMainWindow>
#include <QtGui>

#include "Port.h"

#include "UIObject.h"

#include "OOPDHeaders.h"

#include <QGraphicsView>

namespace qtpd {

////
/// \brief gui object: oopd class (pdclass)
///
class UIClass : public UIObject {

    Q_OBJECT

private:
    OPClass* _opClass;

    bool _dynamicClass;

public:
    explicit UIClass(); //UIObject* parent = 0);
    ~UIClass()
    {
        if (_opClass) {
            _opClass->writeFile();
        }
    };

    static UIObject* createObject(QString objectData, t_canvas* pdCanvas, QGraphicsView* parent = 0)
    {
        //TODO fix all constructors
        //t_canvas* pd_Canvas;

        //temporary fix
        if (objectData == "")
            objectData = "pdclass";

        UIClass* b = new UIClass(); //(UIObject*)parent);
        //b->setCanvas((void*)parent);

        QStringList list = QString(objectData).split(" ");

        const char* obj_name = objectData.toStdString().c_str();
        QString data1 = b->properties()->extractFromPdFileString(obj_name); //test
        //const char* obj_name2 = data1.c_str();

        // fix size changes
        b->setObjectData(data1);
        b->autoResize();

        qDebug() << QString(data1) << "data1";

        t_object* new_obj = 0;
        int in_c = 1, out_c = 0;

        b->setHelpName("pdclass-help.pd");

        if (!pdCanvas) {
            qDebug("bad pd canvas instance");
            b->setErrorBox(true);
        } else {
            new_obj = cmp_create_object(pdCanvas, "pdclass", 0, 0);
        }

        // new class w/canvas
        if (list.size() > 1) {

            b->_opClass = new OPClass(list.at(1).toStdString());
            // TODO FIX
            //

            //attempt to load
            b->_opClass->readFile();

            b->_dynamicClass = false;

        } else {
            b->_opClass = 0; //new OPClass();
            b->_dynamicClass = true;
        }

        if (new_obj) {
            in_c = cmp_get_inlet_count(new_obj);
            out_c = cmp_get_outlet_count(new_obj);

            //b->setPdObject(new_obj);

            cmp_connectUI((t_pd*)new_obj, (void*)b, &UIClass::updateUI);

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

        connect(b, &UIClass::updateUISignal, b, &UIClass::updateUISlot);

        return (UIObject*)b;
    };

    ////
    /// \brief paint event
    ///
    //void paintEvent(QPaintEvent*)
    virtual void paint(QPainter* p, const QStyleOptionGraphicsItem*, QWidget*)

    {
        QBrush brush(bgColor());
        p->setBrush(brush);
        p->drawRect(boundingRect());
        p->setBrush(QBrush());

        //QPainter p(viewport());
        p->setRenderHint(QPainter::HighQualityAntialiasing, true);
        p->scale(scale(), scale());

        p->setPen(QPen(QColor(255, 192, 0), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        p->drawRect(0, 1, width(), height() - 2);

        //remove this later
        if (subpatchWindow()) {
            p->setPen(QPen(QColor(192, 192, 192), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
            p->drawRect(0, 2, width(), height() - 4);
        }

        QColor rectColor = (errorBox()) ? QColor(255, 0, 0) : properties()->get("BorderColor")->asQColor(); //QColor(128, 128, 128);
        p->setPen(QPen(rectColor, 1, (errorBox()) ? Qt::DashLine : Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        p->drawRect(0, 0, width(), height());
        QTextOption* op = new QTextOption;
        op->setAlignment(Qt::AlignLeft);
        p->setPen(QPen(QColor(0, 0, 0), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

        p->setFont(QFont(PREF_QSTRING("Font"), properties()->get("FontSize")->asFontSize(), 0, false));
        p->drawText(2, 3, width() - 2, height() - 3, 0, _objectDataModel.objectData(), 0);

        if (isSelected()) {
            p->setPen(QPen(QColor(0, 192, 255), 1, (errorBox()) ? Qt::DashLine : Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
            p->drawRect(0, 0, width(), height());
        }
    }

    ////
    /// \brief mouse down
    /// \param ev
    ///
    void mousePressEvent(QGraphicsSceneMouseEvent* ev)
    {
        //context menu
        if (ev->button() == Qt::RightButton) {

            if (scene()
                && !scene()->views().isEmpty()
                && scene()->views().first()
                && scene()->views().first()->viewport()) {

                QGraphicsView* v = scene()->views().first();
                QPoint pos = v->viewport()->mapToGlobal(ev->pos().toPoint());

                // TODO
                showPopupMenu(pos + this->pos().toPoint());
                ev->accept();
            }

            return;
        }

        //open canvas for subpatch
        //        if (getEditMode() != em_Unlocked) {
        //            if (subpatchWindow()) {
        //                subpatchWindow()->show();
        //            }
        //        }

        //window opening. Fix
        if (getEditMode() != em_Unlocked) {
            _opClass->showWindow();
        }

        if ((getEditMode() == em_Unlocked) && isSelected()) {
            //            editor_->setText(QString(_objectDataModel.objectData()));
            //            editor_->show();

            emit editObject(this);
            return;
        }

        emit selectBox(this, ev);
        dragOffset = ev->pos().toPoint();
    }

    ////
    /// \brief mouse up
    ///
    void mouseReleaseEvent(QGraphicsSceneMouseEvent*)
    {
        update();
    }

    ////
    /// \brief mouse move
    /// \param event
    ///
    void mouseMoveEvent(QGraphicsSceneMouseEvent* event)
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

    void setPdMessage(QString message)
    {
        setObjectData(message);
        autoResize();

        QFont myFont(PREF_QSTRING("Font"), 11);
        QFontMetrics fm(myFont);
        int new_w = fm.width(QString(_objectDataModel.objectData())) + 10;
        new_w = (new_w < 25) ? 25 : new_w;
        setWidth(new_w);
        //editor_->setFixedWidth(width() - 5);

        //todo: del object and create new + patchcords

        //
        setInletsPos();
        setOutletsPos();
    }

    // ---------------------------------------------------------------

    void msgNewClass(AtomList msg)
    {
        if (_dynamicClass) {
            _opClass = new OPClass(msg.at(1).asString());

        } else {
            cmp_post("cannot create new class - use empty 'pdclass' box for dynamic class creation");
        }
    }

    void msgAddProperty(AtomList msg)
    {
        _opClass->addProperty(msg.at(1).asString(), msg.at(2).asString());
    }

    void msgDelProperty(AtomList msg)
    {
        _opClass->freeProperty(msg.at(1).asString());
    }

    void msgAddMethod(AtomList msg)
    {
        _opClass->addMethod(msg.at(1).asString(), msg.at(2).asString()); //addmethod pname sendsymbol
    }

    void msgDelMethod(AtomList msg)
    {
        _opClass->freeMethod(msg.at(1).asString());
    }

    void msgInfo(AtomList)
    {

        if (_opClass) {
            AtomList l1 = _opClass->getPropertyList();
            AtomList l2 = _opClass->getMethodList();
            AtomList l3 = _opClass->getSignalList();

            QStringList output;

            output += "class info: ";
            output += _opClass->getClassName().c_str();

            output += "properties:";
            for (size_t i = 0; i < l1.size(); i++) {
                output += (l1.at(i).asString().c_str());
            }

            output += "methods:";
            for (size_t i = 0; i < l2.size(); i++) {
                output += (l2.at(i).asString().c_str());
            }

            output += "signals:";
            for (size_t i = 0; i < l3.size(); i++) {
                output += (l3.at(i).asString().c_str());
            }

            cmp_post(output.join("\n").toStdString().c_str());
        } else {
            cmp_post("no class");
        }
    }

    // ---------------------------------------------------------------

    static void updateUI(void* uiobj, AtomList msg)
    {
        // message handling here - probably move somewhere else?

        UIClass* x = (UIClass*)uiobj;

        if (msg.size() < 1)
            return;
        if (!msg.at(0).isSymbol())
            return;

        if ((msg.at(0).asString() == "newclass") && (msg.size() > 1)) {
            x->msgNewClass(msg);
        }

        if ((msg.at(0).asString() == "addproperty") && (msg.size() > 2)) //addproperty pname sendsymbol
            x->msgAddProperty(msg);

        if ((msg.at(0).asString() == "delproperty") && (msg.size() > 1))
            x->msgDelProperty(msg);

        if ((msg.at(0).asString() == "addmethod") && (msg.size() > 2))
            x->msgAddMethod(msg);

        if ((msg.at(0).asString() == "delmethod") && (msg.size() > 1))
            x->msgDelMethod(msg);

        if (msg.at(0).asString() == "info")
            x->msgInfo(msg);

        // -----------

        if ((msg.at(0).asString() == "read"))
            x->_opClass->readFile();

        if ((msg.at(0).asString() == "write"))
            x->_opClass->writeFile();

        emit((UIClass*)uiobj)->updateUISignal();
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
        update();
    }
};
}

#endif // CM_UICLASS_H
