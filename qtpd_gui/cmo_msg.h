#ifndef CMO_MSG_H
#define CMO_MSG_H

//#include <QWidget>

#include <qlineedit.h>

#include "cm_widget.h"
#include "cm_port.h"

#include "cm_pdlink.h"



class cmo_msg : public cm_widget
{
    Q_OBJECT

private:
    //QPoint dragOffset;
    bool clicked_;

    QLineEdit* editor_;

    std::string pdMessage_;

public:
    //bool selected_;




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

                if (this->isSelected() )
                {
                    p.setPen(QPen(QColor(0, 192, 255), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
                }
                else
                if (this->clicked_)
                {
                    p.setPen(QPen(QColor(0, 192, 255), 4, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
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
                      p.drawText(2,3,this->width()-2,this->height()-3,0,this->getPdMessage().c_str(),0);


    }


    ///////////////////


    void mousePressEvent(QMouseEvent *ev)
    {

        if (this->getEditMode() && this->isSelected())
        {
            this->editor_->setText(QString(this->getPdMessage().c_str()));
            this->editor_->show();
            this->editor_->setFocus();
        }

        emit selectBox(this);
        this->dragOffset = ev->pos();

        if (!this->getEditMode())
        {
            this->clicked_ = true;
            this->repaint();
        }

        //temporary
        //move
        if (!this->getEditMode())
        {
            if (!this->getPdObject())
            {
                qDebug("msg: bad pd object!");
            }
            else
            {

                std::string msg = ("list "+ this->getPdMessage());
                //qDebug("send msg %s", msg.c_str());

                cmp_sendstring((t_pd*)this->getPdObject(), ((std::string)"bang").c_str());
            }

        }

    }

    void mouseReleaseEvent(QMouseEvent *)
    {
        //this->selected_ = false;

        if (!this->getEditMode())
        {
            this->clicked_ = false;
            this->repaint();
        }



    }

    void mouseMoveEvent(QMouseEvent *event)
    {
        if(event->buttons() & Qt::LeftButton)
        {
            emit moveBox(this, event);
        }
        event->ignore();

    }


    ///////

    void setPdMessage(std::string message)
    {
        this->pdMessage_ = message;
        QFont myFont("Monaco", 11);
        QFontMetrics fm(myFont);
        this->setFixedWidth((int)fm.width(QString(this->getPdMessage().c_str())) + 10);
        this->editor_->setFixedWidth(this->width()-5);

        //temporary
        //move
        if (this->getEditMode())
        {
            if (!this->getPdObject())
            {
                qDebug("msg: bad pd object!");
            }
            else
            {

                std::string msg = ("set "+ this->getPdMessage());
                //qDebug("send msg %s", msg.c_str());
                cmp_sendstring((t_pd*)this->getPdObject(), msg.c_str());
            }

        }



    }

    std::string getPdMessage() {return this->pdMessage_;};

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
            float y = this->height()-3;

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
private slots:
    void editorDone();

};


#endif // CMO_MSG_H
