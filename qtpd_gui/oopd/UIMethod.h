// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef UI_METHOD_H
#define UI_METHOD_H

#include <QLineEdit>
#include <QMainWindow>
#include <QtGui>

#include "Port.h"

#include "UIObject.h"

//lazy way
//todo proper pattern
#include "OpenFileProxy.h"

#include "OOPDHeaders.h"

#include <QGraphicsView>

namespace qtpd {

////
/// \brief gui object: oop method box
///
class UIMethod : public UIObject {

    Q_OBJECT

private:
    // for abstracions
    bool _isAbstraction;
    QString _abstractionPath;

    OPClass* _opClass;
    OPInstance* _opInstance;

    std::string _methodName;

public:
    explicit UIMethod();//UIObject* parent = 0);
    //~UIMethod();

    static UIObject* createObject(QString objectData, t_canvas* pdCanvas, QGraphicsView* parent = 0)
    {
        //TODO fix all constructors
        //t_canvas* pd_Canvas;

        if (objectData == "")
            objectData = "method";

        UIMethod* b = new UIMethod();//(UIObject*)parent);
        b->setCanvas((void*)parent);

        //truncate "ui.obj". todo cleanup
        QStringList list = QString(objectData).split(" ");

        const char* obj_name = objectData.toStdString().c_str();
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
            b->_methodName = ((QString)list.at(1)).toStdString();
        }



        t_object* new_obj = 0;
        int in_c = 0, out_c = 0;

        if (!pdCanvas) {
            qDebug("bad pd canvas instance");
            b->setErrorBox(true);
        } else {
            //temp pos = 0;
            QPoint pos = QPoint(0, 0);
            new_obj = cmp_create_object(pdCanvas, "pdmethod", pos.x(), pos.y());
        }

        if (new_obj) {
            in_c = cmp_get_inlet_count(new_obj);
            out_c = cmp_get_outlet_count(new_obj);

            b->setPdObject(new_obj);

            cmp_connectUI((t_pd*)new_obj, (void*)b, &UIMethod::updateUI);

            b->setHelpName("method-help->pd");

        } else {
            qDebug("Error: no such object 'pdmethod'");
            b->setErrorBox(true);
            in_c = 1;
            out_c = 1;
        }

        b->addInlet();
        b->addOutlet();

        // OOPD

        // not very clean
        t_canvas* cnv = (t_canvas*)((UIObject*)parent)->pdObject();

        if (OOPD::inst()->canvasIsPatch(cnv)) {
            //fix that
            cmp_post("method in basic patch");
            //b->setErrorBox(true);
        }

        b->_opClass = OOPD::inst()->classByCanvas(cnv);
        b->_opInstance = OOPD::inst()->instanceByCanvas(cnv);

        qDebug() << "this canvas: " << (long)cnv;
        qDebug() << "class: " << (long)b->_opClass << "inst:" << (long)b->_opInstance;

        if (b->_opClass) {

            qDebug("method in class");

            b->_opClass->addMethod(b->_methodName, "");
        }

        if (b->_opInstance) {
            qDebug("method in instance");

            t_outlet* out1 = cmp_get_outlet((t_object*)b->pdObject(), 0);
            if (out1)
                b->_opInstance->addMethodOutlet(gensym(b->_methodName.c_str()), out1);
            else
                cmp_post("method pd object outlet error");
        }

        connect(b, &UIMethod::updateUISignal, b, &UIMethod::updateUISlot);

        return (UIObject*)b;
    };

    ////
    /// \brief paint event
    ///
    virtual void paint(QPainter* p, const QStyleOptionGraphicsItem*, QWidget*)
    {
        QBrush brush(bgColor());
        p->setBrush(brush);
        p->drawRect(boundingRect());
        p->setBrush(QBrush());

        //QPainter p(viewport());
        p->setRenderHint(QPainter::HighQualityAntialiasing, true);
        p->scale(scale(), scale());

        //remove this later
        if (subpatchWindow()) {
            p->setPen(QPen(QColor(192, 192, 192), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
            p->drawRect(0, 2, width(), height() - 4);
        }

        QColor rectColor = (errorBox()) ? QColor(255, 0, 0) : properties()->get("BorderColor")->asQColor(); //QColor(128, 128, 128);
        p->setPen(QPen(rectColor, 1 + _isAbstraction, (errorBox()) ? Qt::DashLine : Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        p->drawRect(0, 0, width(), height());
        QTextOption* op = new QTextOption;
        op->setAlignment(Qt::AlignLeft);
        p->setPen(QPen(QColor(0, 0, 0), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

        p->setFont(QFont(PREF_QSTRING("Font"), properties()->get("FontSize")->asFontSize(), 0, false));
        p->drawText(2, 3, width() - 2, height() - 3, 0, objectData().c_str(), 0);

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
            //QPoint pos = mapToGlobal(ev->pos());
            //showPopupMenu(pos);
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
            //            editor_->setText(QString(objectData().c_str()));
            //            editor_->show();
            //            editor_->setFocus();

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

    void setPdMessage(std::string message)
    {
        setObjectData(message);
        autoResize();

        QFont myFont(PREF_QSTRING("Font"), 11);
        QFontMetrics fm(myFont);
        int new_w = fm.width(QString(objectData().c_str())) + 10;
        new_w = (new_w < 25) ? 25 : new_w;
        setWidth(new_w);
        //editor_->setFixedWidth(width() - 5);

        //todo: del object and create new + patchcords

        //
        setInletsPos();
        setOutletsPos();
    }

    static void updateUI(void* uiobj, ceammc::AtomList msg)
    {
        UIMethod* b = (UIMethod*)uiobj;

        //qDebug() << "method out";

        if (b->_opInstance) {
            AtomList fullMsg(gensym(b->_methodName.c_str()));
            fullMsg.append(msg);
            b->_opInstance->multipleOutput(fullMsg);
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
         update();
    }
};
}

#endif // CM_BOX_H
