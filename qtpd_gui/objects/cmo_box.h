#ifndef CM_BOX_H
#define CM_BOX_H

//#include <QWidget>

#include <QtGui>

#include "cm_port.h"

#include "cm_widget.h"
#include "cm_object.h"

#include "cm_pdlink.h"

#include <QMainWindow>

#include <QLineEdit>


////
/// \brief gui object: standard object box
///
class cmo_box : public cm_object {

    Q_OBJECT

private:
    QLineEdit* editor_;

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
        //open canvas for subpatch
        if (this->getEditMode() != em_Unlocked)
        {
            if (this->cmSubcanvas)
            {
                this->cmSubcanvas->show();
            }
        }

        if ( (this->getEditMode()==em_Unlocked) && this->isSelected())
        {
            this->editor_->setText(QString(this->getObjectData().c_str()));
            this->editor_->show();
            this->editor_->setFocus();
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


        if ( (this->getEditMode() != em_Unlocked) && (this->cmSubcanvas) )
        {
            this->setCursor(QCursor(Qt::PointingHandCursor));
        }
        else
        {
            this->setCursor(QCursor(Qt::ArrowCursor));
        }
    }

    void setPdMessage(std::string message)
    {
        this->setObjectData(message);

        QFont myFont(PREF_STRING("Font"), 11);
        QFontMetrics fm(myFont);
        int new_w = fm.width(QString(this->getObjectData().c_str())) + 10;
        new_w = (new_w<25) ? 25 : new_w;
        this->setFixedWidth(new_w);
        this->editor_->setFixedWidth(this->width()-5);

        //todo: del object and create new + patchcords

        //
        this->setInletsPos();
        this->setOutletsPos();
    }

signals:

    void mouseMoved();
    void rightClicked();


private slots:
    void editorDone();
    void editorChanged();

};

#endif // CM_BOX_H
