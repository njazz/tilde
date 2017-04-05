// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_SUBPATCH_H
#define CM_SUBPATCH_H

#include <QLineEdit>
#include <QMainWindow>
#include <QtGui>

#include "UIObject.h"

//lazy way
//todo proper pattern
#include "OpenFileProxy.h"
#include <QGraphicsView>
#include <QGraphicsSceneMouseEvent>
#include <QMainWindow>

#include "Canvas.h"


namespace qtpd {

////
/// \brief gui object: standard object box
///
class UISubpatch : public UIObject {

    Q_OBJECT

private:
    // for abstracions
    bool _isAbstraction;
    QString _abstractionPath;

    QMainWindow *_Subcanvas;

public:
    explicit UISubpatch();//(UIObjectItem* parent = 0);
    //~UISubpatch();

    static UIObject* createObject(std::string objectData, t_canvas* pd_Canvas, QGraphicsView* parent = 0)
    {
        //TODO fix all constructors

        qDebug("UISubpatch");

        UISubpatch* b = new UISubpatch();//(UIObjectItem*)parent);

        b->setCanvas((void*)parent);

        //truncate "ui.obj". todo cleanup
        QStringList list = QString(objectData.c_str()).split(" ");
        list.removeAt(0);
        QString list_s = list.join(" ");
        const char* obj_name = list_s.toStdString().c_str();
        std::string data1 = b->properties()->extractFromPdFileString(obj_name); //test

        // todo cleanup
        const char* obj_name2 = data1.c_str(); //(QString(data1.c_str()).split(" ").at(0)).toStdString().c_str();

        // fix size changes
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
            new_obj = cmp_create_object(pd_Canvas, (char*)obj_name2, pos.x(), pos.y());
        }

        if (new_obj) {
            in_c = cmp_get_inlet_count(new_obj);
            out_c = cmp_get_outlet_count(new_obj);

            qDebug("created object %s ins %i outs %i ptr %lu", obj_name, in_c, out_c, (long)new_obj);

            b->setPdObject(new_obj);

            b->_isAbstraction = cmp_is_abstraction(new_obj);
            //qDebug() << "*** is abstraction: " << b->_isAbstraction;

            // todo different help symbols
            b->setHelpName(list.at(0) + "-help->pd");

            if (b->_isAbstraction) {

                t_symbol* s = cmp_get_path((t_canvas*)new_obj);

                // todo
                QStringList l = QString(objectData.c_str()).split(" ");
                QString pdName = l.at(1); //assuming there always is a name when abstraction is created

                // todo windows
                b->_abstractionPath = QString(s->s_name) + "/" + pdName + ".pd";

                //qDebug() << b->_abstractionPath;
            }

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
   void paint(QPainter *p, const QStyleOptionGraphicsItem *option, QWidget *widget)
    {
           p->setRenderHint(QPainter::HighQualityAntialiasing, true);

           {
               p->setPen(QPen(QColor(192, 192, 192), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
               p->drawRect(0, 1, width(), height() - 2);
           }

           QColor rectColor = (errorBox()) ? QColor(255, 0, 0) : QColor(128, 128, 128);
           p->setPen(QPen(rectColor, 2, (errorBox()) ? Qt::DashLine : Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
           p->drawRect(0, 0, width(), height());
           QTextOption* op = new QTextOption;
           op->setAlignment(Qt::AlignLeft);
           p->setPen(QPen(QColor(0, 0, 0), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

           p->setFont(QFont(PREF_QSTRING("Font"), 11, 0, false));
           p->drawText(2, 3, width() - 2, height() - 3, 0, objectData().c_str(), 0);

           if (isSelected()) {
               p->setPen(QPen(QColor(0, 192, 255), 2, (errorBox()) ? Qt::DashLine : Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
               p->drawRect(0, 0, width(), height());
           }
    }

    ////
    /// \brief mouse down
    /// \param ev
    ///
    void mousePressEvent(QGraphicsSceneMouseEvent* ev)
    {
        qDebug("click");

        //open canvas for subpatch
            if (getEditMode() != em_Unlocked) {
                if (_Subcanvas) {
                    _Subcanvas->show();
                }
            }


            emit UIObject::selectBox(this, ev);
            dragOffset = ev->pos().toPoint();

        QGraphicsItem::mousePressEvent(ev);
    }

    ////
    /// \brief mouse up
    ///
    void mouseReleaseEvent(QGraphicsSceneMouseEvent*ev)
    {
         //viewport()->update();
        QGraphicsItem::mouseReleaseEvent(ev);
    }

    ////
    /// \brief mouse move
    /// \param event
    ///
    void mouseMoveEvent(QGraphicsSceneMouseEvent* event)
    {
            if (event->buttons() & Qt::LeftButton) {
                emit moveBox(this, event);
            }
            event->ignore();

            if ((getEditMode() != em_Unlocked) && (_Subcanvas)) {
                setCursor(QCursor(Qt::PointingHandCursor));
            } else {
                setCursor(QCursor(Qt::ArrowCursor));
            }

        QGraphicsItem::mouseMoveEvent(event);
    }

    void setPdMessage(std::string message)
    {
        setObjectData(message);
        autoResize();

        QFont myFont(PREF_QSTRING("Font"), 11);
        QFontMetrics fm(myFont);
        int new_w = fm.width(QString(objectData().c_str())) + 10;
        new_w = (new_w < 25) ? 25 : new_w;
        setWidth(new_w);
        //editor_->setFixedWidth(width() - 5);

        //todo: del object and create new + patchcords

        //
        setInletsPos();
        setOutletsPos();
    }

    std::string asPdFileString()
    {
        //if (drawStyle() == ds_Box)
        {
            std::string ret;

            if (_Subcanvas) {
                QStringList patchList = ((Canvas*)_Subcanvas)->canvasAsPdStrings();

                ret += patchList.join("\r\n").toStdString();
            } else {
                qDebug() << "missing subcanvas data";
            }

            ret += "#X restore ";
            ret += std::to_string(x()) + " " + std::to_string(y()) + " ";

            //ret += pdObjectName_+ objectData_ + properties_.asPdFileString();
            //ret += objectData();

            return ret;
        }
    }

signals:

    void mouseMoved();
    void rightClicked();
};
}

#endif // CM_BOX_H
