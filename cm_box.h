#ifndef CM_BOX_H
#define CM_BOX_H

#include <QWidget>

#include <QtGui>

#include "cm_port.h"

//#include "cm_gui.h"

// basic object

class cm_box : public QWidget
{
    Q_OBJECT

private:

    bool selected_;
    std::vector<cm_port*> inlets_;
    std::vector<cm_port*> outlets_;

public:
    std::string pdObjName;

    QPoint dragOffset;

    explicit cm_box(QWidget *parent = 0);

    void paintEvent(QPaintEvent *)
    {    QPainter p(this);
         p.setRenderHint(QPainter::SmoothPixmapTransform,true);
          p.setPen(QPen(QColor(128, 128, 128), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
           p.drawRect(0,0,this->width(),this->height());
            QTextOption *op = new QTextOption;
             op->setAlignment(Qt::AlignLeft);
              p.setPen(QPen(QColor(0, 0, 0), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

               p.setFont(QFont("Monaco",12,0,false));
                p.drawText(2,2,this->width()-2,this->height()-2,0,this->pdObjName.c_str(),0);

                 if (this->selected_)
                 {
                     p.setPen(QPen(QColor(0, 192, 255), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
                     p.drawRect(0,0,this->width(),this->height());

                 }
    }

    void resizeEvent()
    {


    }

    void mousePressEvent(QMouseEvent *ev)
    {
        this->selected_ = true;
        this->repaint();

        this->dragOffset = ev->pos();
    }

    void mouseReleaseEvent(QMouseEvent *e)
    {
        this->selected_ = false;
        this->repaint();
    }

    void mouseMoveEvent(QMouseEvent *event)
    {
        if(event->buttons() & Qt::LeftButton)
        {

        this->move(mapToParent(event->pos() - this->dragOffset));
        }

        emit moved();
    }

    void addInlet()
    {
        cm_port* new_in = new cm_port;
        new_in->port_type = cm_port::cm_pt_inlet;
        inlets_.push_back(new_in);
    }

    void addOutlet()
    {
        cm_port* new_out = new cm_port;
        new_out->port_type = cm_port::cm_pt_outlet;
        outlets_.push_back(new_out);
    }

signals:

    void mousePressed();
    void mouseReleased();
    void mouseEntered();
    void mouseLeaved();
    void mouseMoved();
    void rightClicked();

    void moved();

public slots:

    void inletMousePressed();
    void inletMouseReleased();
    void inletMouseEntered();
    void inletMouseLeaved();



};

#endif // CM_BOX_H
