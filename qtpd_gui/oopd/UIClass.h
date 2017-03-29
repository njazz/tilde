// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_UICLASS_H
#define CM_UICLASS_H

#include <QLineEdit>
#include <QMainWindow>
#include <QtGui>

#include "cm_port.h"

#include "cm_object.h"

//lazy way
//todo proper pattern
#include "cm_openfileproxy.h"

//#include "cm_pdlink.h"

#include "OOPD.h"


namespace qtpd {

////
/// \brief gui object: oopd class
///
class UIClass : public UIObject {

    Q_OBJECT

private:
    // for abstracions
    bool isAbstraction_;
    QString abstractionPath_;

public:
    explicit UIClass(UIObject* parent = 0);
    //~UIClass();

    static UIObject* createObject(std::string objectData, t_canvas* pd_Canvas, UIWidget* parent = 0)
    {
        //TODO fix all constructors
        //t_canvas* pd_Canvas;

        //temporary fix
        if (objectData=="") objectData = "pdclass";

        //qDebug() << "*objData " << QString(objectData.c_str());

        UIClass* b = new UIClass((UIObject*)parent);

        //truncate "ui.obj". todo cleanup
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
        int in_c = 0, out_c = 0;

        if (!pd_Canvas) {
            qDebug("bad pd canvas instance");
            b->setErrorBox(true);
        } else {
            //temp pos = 0;
            QPoint pos = QPoint(0, 0);
            new_obj = cmp_create_object(pd_Canvas, (char*)obj_name2, pos.x(), pos.y());
        }

        if (new_obj) {
            in_c = cmp_get_inlet_count(new_obj);
            out_c = cmp_get_outlet_count(new_obj);

            qDebug("created object %s ins %i outs %i ptr %lu", obj_name, in_c, out_c, (long)new_obj);

            b->setPdObject(new_obj);

            b->isAbstraction_ = cmp_is_abstraction(new_obj);
            qDebug() << "*** is abstraction: " << b->isAbstraction_;

            // todo different help symbols
            b->setHelpName(list.at(0) + "-help.pd");

            if (b->isAbstraction_) {
                t_symbol* s = cmp_get_path((t_canvas*)new_obj);

                // todo
                QStringList l = QString(objectData.c_str()).split(" ");
                QString pdName = l.at(1); //assuming there always is a name when abstraction is created

                // todo windows
                b->abstractionPath_ = QString(s->s_name) + "/" + pdName + ".pd";

                qDebug() << b->abstractionPath_;
            }

        } else {
            qDebug("Error: no such object %s", obj_name);
            //b->setErrorBox(true);
            in_c = 0;
            out_c = 0;
        }

        for (int i = 0; i < in_c; i++)
            b->addInlet();
        for (int i = 0; i < out_c; i++)
            b->addOutlet();

        return (UIObject*)b;
    };

    ////
    /// \brief paint event
    ///
    void paintEvent(QPaintEvent*)
    {
        QPainter p(this);
        p.setRenderHint(QPainter::HighQualityAntialiasing, true);
        p.scale(this->scale(), this->scale());

        p.setPen(QPen(QColor(255, 192, 0), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        p.drawRect(0, 1, width(), height() - 2);

        //remove this later
        if (this->subpatchWindow()) {
            p.setPen(QPen(QColor(192, 192, 192), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
            p.drawRect(0, 2, this->width(), this->height() - 4);
        }

        QColor rectColor = (this->errorBox()) ? QColor(255, 0, 0) : properties()->get("BorderColor")->asQColor(); //QColor(128, 128, 128);
        p.setPen(QPen(rectColor, 2 + isAbstraction_, (this->errorBox()) ? Qt::DashLine : Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        p.drawRect(0, 0, this->width(), this->height());
        QTextOption* op = new QTextOption;
        op->setAlignment(Qt::AlignLeft);
        p.setPen(QPen(QColor(0, 0, 0), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

        p.setFont(QFont(PREF_QSTRING("Font"), properties()->get("FontSize")->asFontSize(), 0, false));
        p.drawText(2, 3, this->width() - 2, this->height() - 3, 0, this->objectData().c_str(), 0);

        if (this->isSelected()) {
            p.setPen(QPen(QColor(0, 192, 255), 2, (this->errorBox()) ? Qt::DashLine : Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
            p.drawRect(0, 0, this->width(), this->height());
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
        if (this->getEditMode() != em_Unlocked) {
            if (this->subpatchWindow()) {
                this->subpatchWindow()->show();
            }
        }

        //abstraction opening. Fix
        if (this->getEditMode() != em_Unlocked) {
            if (isAbstraction_) {
                OpenFileProxy::openAbstraction(abstractionPath_);
            }
        }

        if ((this->getEditMode() == em_Unlocked) && this->isSelected()) {
            //            this->editor_->setText(QString(this->objectData().c_str()));
            //            this->editor_->show();
            //            this->editor_->setFocus();

            emit editObject(this);
            return;
        }

        emit selectBox(this);
        this->dragOffset = ev->pos();
    }

    ////
    /// \brief mouse up
    ///
    void mouseReleaseEvent(QMouseEvent*)
    {
        this->repaint();
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

        if ((this->getEditMode() != em_Unlocked) && (this->subpatchWindow())) {
            this->setCursor(QCursor(Qt::PointingHandCursor));
        } else {
            this->setCursor(QCursor(Qt::ArrowCursor));
        }
    }

    void setPdMessage(std::string message)
    {
        this->setObjectData(message);
        this->autoResize();

        QFont myFont(PREF_QSTRING("Font"), 11);
        QFontMetrics fm(myFont);
        int new_w = fm.width(QString(this->objectData().c_str())) + 10;
        new_w = (new_w < 25) ? 25 : new_w;
        this->setFixedWidth(new_w);
        //this->editor_->setFixedWidth(this->width() - 5);

        //todo: del object and create new + patchcords

        //
        this->setInletsPos();
        this->setOutletsPos();
    }

signals:

    void mouseMoved();
    void rightClicked();

    //void editObject(UIObject* box);

private slots:
    //    void editorDone();
    //    void editorChanged();
};
}

#endif // CM_UICLASS_H
