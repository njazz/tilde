#ifndef CMO_MSG_H
#define CMO_MSG_H

//#include <QWidget>

#include "cm_widget.h"
#include "cm_port.h"

class cmo_msg : public cm_widget
{
    Q_OBJECT

private:
    QPoint dragOffset;

public:
    //bool selected_;

    std::string pdObjName;


    std::vector<cm_port*> inlets_;
    std::vector<cm_port*> outlets_;

    //cmo_msg();
    explicit cmo_msg(cm_widget *parent = 0);

    void paintEvent(QPaintEvent *)
    {    QPainter p(this);


         QPolygon poly;
          poly << QPoint(0,0) <<
                  QPoint(this->width(),0) <<
                  QPoint(this->width()-4,4) <<
                  QPoint(this->width()-4,this->height()-4) <<
                  QPoint(this->width(),this->height()) <<
                  QPoint(0,this->height());


           //p.drawRect(0,0,this->width(),this->height());

           p.setPen(QPen(QColor(220, 220, 220), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
            QPainterPath tmpPath;
             tmpPath.addPolygon(poly);
              QBrush br = QBrush(QColor(220,220,220), Qt::SolidPattern);
              p.fillPath(tmpPath,br);

               if (this->isSelected())
               {
                   p.setPen(QPen(QColor(0, 192, 255), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
               }
               else
               {
                   p.setPen(QPen(QColor(128, 128, 128), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
               }

                p.drawPolygon(poly);


                QTextOption *op = new QTextOption;
                 op->setAlignment(Qt::AlignLeft);
                  p.setPen(QPen(QColor(0, 0, 0), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

                   p.setFont(QFont("Monaco",11,0,false));
                    p.drawText(2,3,this->width()-2,this->height()-3,0,this->pdObjName.c_str(),0);


    }


    ///////////////////


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

    ///////


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

signals:
    //void selectBox(cm_widget*box);

};


#endif // CMO_MSG_H
