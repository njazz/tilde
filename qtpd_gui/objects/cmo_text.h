#ifndef cmo_text_H
#define cmo_text_H

//#include <QWidget>

//#include <qlineedit.h>
#include <QPlainTextEdit>

#include "cm_object.h"
#include "cm_port.h"

#include "cm_pdlink.h"


////
/// \brief gui object: comment box (ui.text)
///
class cmo_text : public cm_object
{
    Q_OBJECT

private:
    bool clicked_;

    QPlainTextEdit* editor_;

public:
    explicit cmo_text(cm_object *parent = 0);

    static cm_object* createObject(std::string objectData, cm_widget *parent=0) {};

    void paintEvent(QPaintEvent *)
    {    QPainter p(this);

         if (this->getEditMode() == em_Unlocked){
             if (this->isSelected() )
             {
                 p.setPen(QPen(QColor(0, 192, 255), 2, Qt::DotLine, Qt::SquareCap, Qt::BevelJoin));
             }
             else
                 if (this->clicked_)
                 {
                     p.setPen(QPen(QColor(0, 192, 255), 4, Qt::DotLine, Qt::RoundCap, Qt::RoundJoin));
                 }
                 else
                 {
                     p.setPen(QPen(QColor(128, 128, 128), 2, Qt::DotLine, Qt::SquareCap, Qt::BevelJoin));
                 }

             p.drawRect(0,0,this->width(),this->height());
             //p.drawPolygon(poly);
         }

         QTextOption *op = new QTextOption;
          op->setAlignment(Qt::AlignLeft);
           p.setPen(QPen(QColor(0, 0, 0), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

            p.setFont(QFont(PREF_STRING("Font"),11,0,false));
             p.drawText(2,3,this->width()-2,this->height()-3,0,this->getObjectData().c_str(),0);


    }


    ///////////////////

    void mousePressEvent(QMouseEvent *ev)
    {

        if ( (this->getEditMode()==em_Unlocked) && this->isSelected())
        {

            this->editor_->document()->setPlainText(QString(this->getObjectData().c_str()));
            this->editor_->show();
            this->editor_->setFocus();
        }

        emit selectBox(this);
        this->dragOffset = ev->pos();

        if (!(this->getEditMode()==em_Unlocked))
        {
            this->clicked_ = true;
            this->repaint();

            //todo timer
        }

    }

    void mouseReleaseEvent(QMouseEvent *)
    {
        //this->selected_ = false;

        //if (!this->getEditMode())
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

        //todo move!
        if (this->getEditMode() != em_Unlocked)
        {
            this->setCursor(QCursor(Qt::PointingHandCursor));
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
        QString text = QString(this->editor_->document()->toPlainText());
        int new_w = fm.width(text) + 20;
        new_w = (new_w<25) ? 25 : new_w;

        int new_h = fm.boundingRect(QRect(0,0,new_w,100), 0, text).height() + 7 ;

        new_h = (new_h<25) ? 25 : new_h;

        this->setFixedWidth(new_w);
        this->setFixedHeight(new_h);

        this->editor_->setFixedWidth(this->width()-1);
        this->editor_->setFixedHeight(this->height()-2);

        this->editor_->hide();
    }

    static void updateUI(void* uiobj, ceammc::AtomList msg)
    {
        qDebug("update ui");
        cmo_text *x = (cmo_text*)uiobj;

        std::string obj_data;
        for (int i=0; i<msg.size();i++)
        {
            obj_data += msg.at(i).asString() + " ";
        }

        x->setObjectData(obj_data);

        x->repaint();
    }

    //    void setPdObject(void *obj)
    //    {
    //        cm_object::setPdObject(obj);
    //        //cmp_connectUI((t_pd*)this->getPdObject(), (void*)this, &cmo_text::updateUI);
    //    }


    std::string getSaveString()
    {return "ui.text "+ this->getObjectData();}

    void* getPdObject()
    {
        return 0;
    }

    bool eventFilter(QObject *watched, QEvent *event)
    {
        //qDebug("event filter");
        if (event->type() == QEvent::KeyPress) {

            QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
            //qDebug("key event");

            if  ( (keyEvent->key() == Qt::Key_Return) && (keyEvent->modifiers() == Qt::ShiftModifier) )
            {
                this->editorDone();
                //qDebug("done");
                return true;
            }
        }

    }

signals:
    //void selectBox(cm_widget*box);
private slots:
    void editorDone();
    void editorChanged();

};


#endif // cmo_text_H
