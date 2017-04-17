// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_BOX_H
#define CM_BOX_H

#include <QLineEdit>
#include <QMainWindow>
#include <QtGui>

#include "UIObject.h"

#include <QGraphicsSceneMouseEvent>
#include <QGraphicsView>


namespace qtpd {

////
/// \brief gui object: standard object box
///
class UIBox : public UIObject {

    Q_OBJECT

private:
    // for abstracions
    bool _isAbstraction;
    QString _abstractionPath;

public:
    explicit UIBox(); //(UIObjectItem* parent = 0);
    //~UIBox();

    static UIObject* createObject(QString objectData, t_canvas* pd_Canvas, QGraphicsView* parent = 0)
    {
        //TODO fix all constructors

        qDebug() << "<< ui.box";

        UIBox* b = new UIBox(); //(UIObjectItem*)parent);

        b->setCanvas((void*)parent);

        //truncate "ui.obj". todo cleanup
        QStringList list = QString(objectData).split(" ");
        list.removeAt(0);
        QString list_s = list.join(" ");
        const char* obj_name = list_s.toStdString().c_str();
        std::string data1 = b->properties()->extractFromPdFileString(obj_name); //test

        // todo cleanup
        const char* obj_name2 = data1.c_str();

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
            b->setHelpName(list.at(0) + "-help.pd");

            if (b->_isAbstraction) {

                t_symbol* s = cmp_get_path((t_canvas*)new_obj);

                // todo
                QStringList l = QString(objectData).split(" ");
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

        b->resizeEvent();

        return (UIObject*)b;
    };

    ////
    /// \brief paint event
    ///
    virtual void paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*)
    {
        p->setClipRect(option->exposedRect);

        p->setRenderHint(QPainter::HighQualityAntialiasing, true);

        QBrush brush(bgColor());
        p->setBrush(brush);
        p->drawRect(boundingRect());
        p->setBrush(QBrush());

        //remove this later

        if (subpatchWindow()) {
            p->setPen(QPen(QColor(192, 192, 192), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
            p->drawRect(0, 2, boundingRect().width(), boundingRect().height() - 4);
        }

        QColor rectColor = (errorBox()) ? QColor(255, 0, 0) : properties()->get("BorderColor")->asQColor(); //QColor(128, 128, 128);
        p->setPen(QPen(rectColor, 1 + _isAbstraction, (errorBox()) ? Qt::DashLine : Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        p->drawRect(0, 0, boundingRect().width(), boundingRect().height());
        QTextOption* op = new QTextOption;
        op->setAlignment(Qt::AlignLeft);
        p->setPen(QPen(QColor(0, 0, 0), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

        p->setFont(QFont(PREF_QSTRING("Font"), properties()->get("FontSize")->asFontSize(), 0, false));
        p->drawText(2, 3, boundingRect().width() - 2, boundingRect().height() - 3, 0, objectData().c_str(), 0);

        if (isSelected()) {
            p->setPen(QPen(QColor(0, 192, 255), 2, (errorBox()) ? Qt::DashLine : Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
            p->drawRect(0, 0, boundingRect().width(), boundingRect().height());
        }
    }

    ////
    /// \brief mouse down
    /// \param ev
    ///
    void mousePressEvent(QGraphicsSceneMouseEvent* ev);

    ////
    /// \brief mouse up
    ///
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* ev)
    {
        QGraphicsItem::mouseReleaseEvent(ev);
    }

    ////
    /// \brief mouse move
    /// \param event
    ///
    void mouseMoveEvent(QGraphicsSceneMouseEvent* event)
    {
        //qDebug("box move");

        if (event->buttons() & Qt::LeftButton) {
            emit moveBox(this, event);
        }
        //event->ignore();

        if ((getEditMode() != em_Unlocked) && (subpatchWindow())) {
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

        //
        setInletsPos();
        setOutletsPos();
    }

signals:

    void mouseMoved();
    void rightClicked();
};
}

#endif // CM_BOX_H
