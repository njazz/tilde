#ifndef cmo_float_H
#define cmo_float_H

//#include <QWidget>

#include <qlineedit.h>

#include "cm_object.h"
#include "cm_port.h"

#include "cm_pdlink.h"

using namespace cm;

////
/// \brief gui object: float number box (ui.float)
///
class cmo_float : public UIObject
{
    Q_OBJECT

private:

    float startY;

public:
    explicit cmo_float(UIObject *parent = 0);

    static UIObject* createObject(std::string objectData, UIWidget *parent=0) {};

    void paintEvent(QPaintEvent *)
    {    QPainter p(this);


         QPolygon poly;
          poly << QPoint(0,0) <<
                  QPoint(this->width()-5,0) <<
                  //QPoint(this->width()-4,4) <<
                  QPoint(this->width(),5) <<
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
                {
                    p.setPen(QPen(QColor(128, 128, 128), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
                }

                 p.drawPolygon(poly);


                  QTextOption *op = new QTextOption;
                   op->setAlignment(Qt::AlignLeft);
                    p.setPen(QPen(QColor(0, 0, 0), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

                     p.setFont(QFont(PREF_STRING("Font"),11,0,false));
                      p.drawText(2,3,this->width()-2,this->height()-3,0,this->getObjectData().c_str(),0);


    }


    ///////////////////

    void mousePressEvent(QMouseEvent *ev)
    {

        this->startY = ev->pos().y();


        if ( (this->getEditMode()==em_Unlocked) )
        {
            emit selectBox(this);
            this->dragOffset = ev->pos();
        }


    }

    void mouseReleaseEvent(QMouseEvent *)
    {

    }

    void mouseMoveEvent(QMouseEvent *event)
    {
        if( (event->buttons() & Qt::LeftButton ) && (this->getEditMode() == em_Unlocked))
        {
            emit moveBox(this, event);
        }

        if( (event->buttons() & Qt::LeftButton) && (this->getEditMode() != em_Unlocked))
        {
            //todo fix
            this->setObjectData( std::to_string( ::atof(this->getObjectData().c_str()) - event->pos().y() + this->startY) );  //- this->startY
            this->startY = event->pos().y();

            std::string send = "set " + this->getObjectData();
            cmp_sendstring((t_pd*)this->getPdObject(), send.c_str());

            this->repaint();
        }

        event->ignore();

        //todo move!
        if (this->getEditMode() != em_Unlocked)
        {
            this->setCursor(QCursor(Qt::UpArrowCursor));
        }
        else
        {
            this->setCursor(QCursor(Qt::ArrowCursor));
        }

    }


    ///////

    void setPdMessage(std::string message)
    {
        this->setObjectData(message);

        QFont myFont(PREF_STRING("Font"), 11);
        QFontMetrics fm(myFont);
        int new_w = fm.width(QString(this->getObjectData().c_str())) + 10;
        new_w = (new_w<25) ? 25 : new_w;
        this->setFixedWidth(new_w);
        //this->editor_->setFixedWidth(this->width()-5);

        //temporary
        //move
        if (this->getEditMode() == em_Unlocked)
        {
            if (!this->getPdObject())
            {
                qDebug("msg: bad pd object!");
            }
            else
            {

                std::string msg = ("set "+ this->getObjectData());
                //qDebug("send msg %s", msg.c_str());
                cmp_sendstring((t_pd*)this->getPdObject(), msg);
            }

        }



    }

    static void updateUI(void* uiobj, ceammc::AtomList msg)
    {
        qDebug("update ui - float");
        cmo_float *x = (cmo_float*)uiobj;

        if (msg.size()>0)
        {
            x->setObjectData(msg.at(0).asString());
            x->repaint();

        }
    }

    std::string getSaveString()
    {return "ui.float "+ this->getObjectData();}

    void setPdObject(void *obj)
    {
        UIObject::setPdObject(obj);
        cmp_connectUI((t_pd*)this->getPdObject(), (void*)this, &cmo_float::updateUI);
    }

signals:

private slots:

};


#endif // cmo_float_H