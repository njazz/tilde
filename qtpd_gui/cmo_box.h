#ifndef CM_BOX_H
#define CM_BOX_H

//#include <QWidget>

#include <QtGui>

#include "cm_port.h"

#include "cm_widget.h"
#include "cm_object.h"

#include "cm_pdlink.h"

#include <QMainWindow>

//#include "cm_objectloader.h"

//typedef void t_object;
// basic object

////
/// \brief gui object: standard object box
///
class cmo_box : public cm_object {

    Q_OBJECT



public:
    explicit cmo_box(cm_object* parent = 0);
    ~cmo_box();

    static cm_object* createObject(std::string objectData, cm_widget *parent=0) {};


    ////
    /// \brief temporary - make separate ui class for subpatches?
    ///
    QMainWindow *cmSubcanvas;

    ////
    /// \brief paint event
    ///
    void paintEvent(QPaintEvent*)
    {
        QPainter p(this);
        p.setRenderHint(QPainter::HighQualityAntialiasing, true);

        if (this->cmSubcanvas)
        {
            p.setPen(QPen(QColor(192, 192, 192), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
            p.drawRect(0, 2, this->width(), this->height()-4);
        }

        QColor rectColor = (this->isErrorBox())? QColor(255, 0, 0) : QColor(128, 128, 128);
        p.setPen(QPen(rectColor, 2,(this->isErrorBox())? Qt::DashLine : Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        p.drawRect(0, 0, this->width(), this->height());
        QTextOption* op = new QTextOption;
        op->setAlignment(Qt::AlignLeft);
        p.setPen(QPen(QColor(0, 0, 0), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

        p.setFont(QFont(PREF_STRING("Font"), 11, 0, false));
        p.drawText(2, 3, this->width() - 2, this->height() - 3, 0, this->getObjectData().c_str(), 0);

        if (this->isSelected()) {
            p.setPen(QPen(QColor(0, 192, 255), 2,(this->isErrorBox())? Qt::DashLine : Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
            p.drawRect(0, 0, this->width(), this->height());
        }


    }


    ////
    /// \brief mouse down
    /// \param ev
    ///
    void mousePressEvent(QMouseEvent* ev)
    {
        emit selectBox(this);
        this->dragOffset = ev->pos();

        //open canvas for subpatch
        if (this->getEditMode() != em_Unlocked)
        {
            if (this->cmSubcanvas)
            {
                this->cmSubcanvas->show();
            }
        }
    }

    ////
    /// \brief mouse up
    ///
    void mouseReleaseEvent(QMouseEvent*)
    {
        //this->selected_ = false;
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
    }

//    static void reg()
//    {
//        cm_objectloader::inst().addUIobject("ui.obj", &cmo_box::createObject);
//    }


signals:

    void mouseMoved();
    void rightClicked();

    //    void inletMousePressed();
    //    void inletMouseReleased();

    //    void inletMouseEntered();
    //    void inletMouseLeaved();

    //    void outletMousePressed();
    //    void outletMouseReleased();

    //    void outletMouseEntered();
    //    void outletMouseLeaved();


private slots:

};

#endif // CM_BOX_H
