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
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsView>
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

    //QMainWindow *_Subcanvas;

public:
    explicit UISubpatch();

    static UIObject* createObject(QString objectData, t_canvas* , QGraphicsView* parent = 0)
    {
        //TODO fix all constructors

        qDebug("UISubpatch");

        UISubpatch* b = new UISubpatch(); //(UIObjectItem*)parent);

        b->setCanvas((void*)parent);

        QStringList list = QString(objectData).split(" ");
        // list.removeAt(0);
        QString list_s = list.join(" ");

        // fix that
        const char* obj_name = list_s.toStdString().c_str();
        std::string data1 = b->properties()->extractFromPdFileString(obj_name); //test

        // todo cleanup
        //const char* obj_name2 = data1.c_str(); //(QString(data1.c_str()).split(" ").at(0)).toStdString().c_str();

        // fix size changes
        b->setObjectData(data1);
        b->autoResize();

        b->resizeEvent();

        return (UIObject*)b;
    };

    ////
    /// \brief paint event
    ///
    void paint(QPainter* p, const QStyleOptionGraphicsItem* , QWidget* )
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
            if (subpatchWindow()) {
                subpatchWindow()->show();
            }
        }

        emit UIObject::selectBox(this, ev);
        dragOffset = ev->pos().toPoint();

        QGraphicsItem::mousePressEvent(ev);
    }

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
        if (event->buttons() & Qt::LeftButton) {
            emit moveBox(this, event);
        }
        event->ignore();

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

    std::string asPdFileString();

signals:

    void mouseMoved();
    void rightClicked();
};
}

#endif // CM_BOX_H
