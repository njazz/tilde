#ifndef CM_BOX_H
#define CM_BOX_H

#include <QWidget>

#include <QtGui>

#include "cm_port.h"

#include "cm_widget.h"

//typedef void t_object;
// basic object

class cm_box : public cm_widget
{
    Q_OBJECT

private:

    bool selected_;
    std::vector<cm_port*> inlets_;
    std::vector<cm_port*> outlets_;

public:
    std::string pdObjName;
    //temporary?
    void* pdObject;

    QPoint dragOffset;

    explicit cm_box(cm_widget *parent = 0);

    void paintEvent(QPaintEvent *)
    {    QPainter p(this);
         //p.setRenderHint(QPainter::SmoothPixmapTransform,true);
         p.setPen(QPen(QColor(128, 128, 128), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
          p.drawRect(0,0,this->width(),this->height());
           QTextOption *op = new QTextOption;
            op->setAlignment(Qt::AlignLeft);
             p.setPen(QPen(QColor(0, 0, 0), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

              p.setFont(QFont("Monaco",11,0,false));
               p.drawText(2,3,this->width()-2,this->height()-3,0,this->pdObjName.c_str(),0);

                if (this->selected_)
                {
                    p.setPen(QPen(QColor(0, 192, 255), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
                    p.drawRect(0,0,this->width(),this->height());

                }
    }

//    void resizeEvent()
//    {


//    }

    void mousePressEvent(QMouseEvent *ev)
    {

        emit selectBox(this);
        this->dragOffset = ev->pos();
    }

    void mouseReleaseEvent(QMouseEvent *)
    {
        //this->selected_ = false;
        this->repaint();
    }

    void mouseMoveEvent(QMouseEvent *event)
    {
        if(event->buttons() & Qt::LeftButton)
        {

            this->move(mapToParent(event->pos() - this->dragOffset));
        }

        event->ignore();

    }

    void setInletsPos()
    {
        for (int i =0;i<(int)inlets_.size(); i++)
        {
            float w = this->width()-1;
            w = (w<30)?30:w;
            float x = (w) / inlets_.size() * i;
            float y = 0;

            inlets_.at(i)->move(x,y);
            inlets_.at(i)->repaint();
        }
    }

    void setOutletsPos()
    {
        for (int i =0;i<(int)outlets_.size(); i++)
        {
            float w = this->width()-1;
            w = (w<30)?30:w;
            float x = (w) / outlets_.size() * i;
            float y = this->height()-4;

            outlets_.at(i)->move(x,y);
            outlets_.at(i)->repaint();
        }
    }

    //move to cm_widget?
    void addInlet()
    {
        cm_port* new_in = new cm_port(this);
        new_in->port_type = cm_port::cm_pt_inlet;
        inlets_.push_back(new_in);
        connect(new_in,&cm_port::mousePressed, (cm_widget*)this->parent(), &cm_widget::s_InMousePressed);
        connect(new_in,&cm_port::mouseReleased, (cm_widget*)this->parent(), &cm_widget::s_InMouseReleased);

        this->setInletsPos();
    }

    void addOutlet()
    {
        cm_port* new_out = new cm_port(this);
        new_out->port_type = cm_port::cm_pt_outlet;
        outlets_.push_back(new_out);
        connect(new_out,&cm_port::mousePressed, (cm_widget*)this->parent(), &cm_widget::s_OutMousePressed);
        connect(new_out,&cm_port::mouseReleased, (cm_widget*)this->parent(), &cm_widget::s_OutMouseReleased);

        this->setOutletsPos();
    }

    void select()
    {
        this->selected_ = true;
        this->repaint();
    }

    void deselect()
    {
        this->selected_ = false;
        this->repaint();
    }

    /////

    cm_port* getInletAt(int idx)
    {
        //check range!
        return this->inlets_.at(idx);

    }

    cm_port* getOutletAt(int idx)
    {
        //check range!
        return this->outlets_.at(idx);


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
    void selectBox(cm_box*box);

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
