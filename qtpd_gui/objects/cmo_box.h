// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_BOX_H
#define CM_BOX_H

#include <QLineEdit>
#include <QMainWindow>
#include <QtGui>

#include "cm_port.h"

#include "cm_object.h"

//#include "cm_pdlink.h"

namespace qtpd {

////
/// \brief gui object: standard object box
///
class UIBox : public UIObject {

    Q_OBJECT

private:
    QLineEdit* editor_;

    // for abstracions
    bool isAbstraction_;
    QString abstractionPath_;

public:
    explicit UIBox(UIObject* parent = 0);
    //~UIBox();

    static UIObject* createObject(std::string objectData, t_canvas* pd_Canvas, UIWidget* parent = 0)
    {
        //TODO fix all constructors
        //t_canvas* pd_Canvas;

        UIBox* b = new UIBox((UIObject*)parent);

        //truncate "ui.obj"
        QStringList list = QString(objectData.c_str()).split(" ");
        list.removeAt(0);
        QString list_s = list.join(" ");
        const char* obj_name = list_s.toStdString().c_str();

        std::string data1 = b->properties()->extractFromPdFileString(obj_name); //test
        b->setObjectData(data1);

        b->autoResize();

        t_object* new_obj = 0;
        int in_c = 0, out_c = 0;

        if (!pd_Canvas) {
            qDebug("bad pd canvas instance");
            b->setErrorBox(true);
        } else {
            //temp pos = 0;
            QPoint pos = QPoint(0, 0);
            new_obj = cmp_create_object(pd_Canvas, (char*)obj_name, pos.x(), pos.y());
        }

        if (new_obj) {
            in_c = cmp_get_inlet_count(new_obj);
            out_c = cmp_get_outlet_count(new_obj);

            qDebug("created object %s ins %i outs %i ptr %lu", obj_name, in_c, out_c, (long)new_obj);

            b->setPdObject(new_obj);

            b->isAbstraction_ = cmp_is_abstraction(new_obj);
            qDebug()<<"*** is abstraction: " << b->isAbstraction_;

        } else {
            qDebug("Error: no such object %s", obj_name);
            b->setErrorBox(true);
            in_c = 1;
            out_c = 1;
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

        //remove this later
        if (this->subpatchWindow()) {
            p.setPen(QPen(QColor(192, 192, 192), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
            p.drawRect(0, 2, this->width(), this->height() - 4);
        }

        QColor rectColor = (this->errorBox()) ? QColor(255, 0, 0) : QColor(128, 128, 128);
        p.setPen(QPen(rectColor, 2+isAbstraction_, (this->errorBox()) ? Qt::DashLine : Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        p.drawRect(0, 0, this->width(), this->height());
        QTextOption* op = new QTextOption;
        op->setAlignment(Qt::AlignLeft);
        p.setPen(QPen(QColor(0, 0, 0), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

        p.setFont(QFont(PREF_QSTRING("Font"), 11, 0, false));
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
        //open canvas for subpatch
        if (this->getEditMode() != em_Unlocked) {
            if (this->subpatchWindow()) {
                this->subpatchWindow()->show();
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
        this->editor_->setFixedWidth(this->width() - 5);

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
    void editorDone();
    void editorChanged();
};
}

#endif // CM_BOX_H
