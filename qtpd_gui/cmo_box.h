#ifndef CM_BOX_H
#define CM_BOX_H

//#include <QWidget>

#include <QtGui>

#include "cm_port.h"

#include "cm_widget.h"
#include "cm_object.h"

//typedef void t_object;
// basic object

////
/// \brief gui object: standard object box
///
class cmo_box : public cm_object {
    Q_OBJECT

private:
    //bool selected_;
//    std::vector<cm_port*> inlets_;
//    std::vector<cm_port*> outlets_;

//    std::string pdObjName;

public:
//    bool isErrorBox;

    explicit cmo_box(cm_object* parent = 0);

    //cmo_box(cm_widget* parent = 0, QStringList stringList);

    void paintEvent(QPaintEvent*)
    {
        QPainter p(this);
        //p.setRenderHint(QPainter::SmoothPixmapTransform,true);
        QColor rectColor = (this->isErrorBox())? QColor(255, 0, 0) : QColor(128, 128, 128);
        p.setPen(QPen(rectColor, 2,(this->isErrorBox())? Qt::DashLine : Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        p.drawRect(0, 0, this->width(), this->height());
        QTextOption* op = new QTextOption;
        op->setAlignment(Qt::AlignLeft);
        p.setPen(QPen(QColor(0, 0, 0), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

        p.setFont(QFont("Monaco", 11, 0, false));
        p.drawText(2, 3, this->width() - 2, this->height() - 3, 0, this->getObjectData().c_str(), 0);

        if (this->isSelected()) {
            p.setPen(QPen(QColor(0, 192, 255), 2,(this->isErrorBox())? Qt::DashLine : Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
            p.drawRect(0, 0, this->width(), this->height());
        }
    }

    //////////

    void mousePressEvent(QMouseEvent* ev)
    {

        emit selectBox(this);
        this->dragOffset = ev->pos();
    }

    void mouseReleaseEvent(QMouseEvent*)
    {
        //this->selected_ = false;
        this->repaint();
    }

    void mouseMoveEvent(QMouseEvent* event)
    {
        if (event->buttons() & Qt::LeftButton) {
            emit moveBox(this, event);
        }
        event->ignore();
    }



signals:

    //    void mousePressed();
    //    void mouseReleased();
    //    void mouseEntered();
    //    void mouseLeaved();

    void mouseMoved();
    void rightClicked();

    void inletMousePressed();
    void inletMouseReleased();

    void inletMouseEntered();
    void inletMouseLeaved();

    void outletMousePressed();
    void outletMouseReleased();

    void outletMouseEntered();
    void outletMouseLeaved();

    //void moved();
    //void selectBox(cm_widget* box);

private slots:

    //    void boxInMousePressed();
    //    void boxInMouseReleased();
    //    void boxInMouseEntered();
    //    void boxInMouseLeaved();

    //    void boxOutMousePressed();
    //    void boxOutMouseReleased();
    //    void boxOutMouseEntered();
    //    void boxOutMouseLeaved();
};

#endif // CM_BOX_H
