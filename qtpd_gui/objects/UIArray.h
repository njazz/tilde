// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_ARRAY_H
#define CM_ARRAY_H

#include <QLineEdit>
#include <QMainWindow>
#include <QtGui>

#include "cm_port.h"

#include "cm_object.h"

//lazy way
//todo proper pattern
#include "cm_openfileproxy.h"

//#include "cm_pdlink.h"

namespace qtpd {

////
/// \brief gui object: array box (ui.array)
///
class UIArray : public UIObject {

    Q_OBJECT

private:
public:
    explicit UIArray(UIObject* parent = 0);

    static UIObject* createObject(std::string objectData, t_canvas* pd_Canvas, UIWidget* parent = 0)
    {
        //TODO fix all constructors
        UIArray* b = new UIArray((UIObject*)parent);

        //truncate "ui.obj"
        QStringList list = QString(objectData.c_str()).split(" ");
        list.removeAt(0);
        QString list_s = list.join(" ");
        const char* obj_name = list_s.toStdString().c_str();

        std::string data1 = b->properties()->extractFromPdFileString(obj_name); //test
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
            new_obj = cmp_create_object(pd_Canvas, (char*)obj_name, pos.x(), pos.y());
        }

        if (new_obj) {
            in_c = cmp_get_inlet_count(new_obj);
            out_c = cmp_get_outlet_count(new_obj);

            qDebug("created object %s ins %i outs %i ptr %lu", obj_name, in_c, out_c, (long)new_obj);

            b->setPdObject(new_obj);

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
    void paintEvent(QPaintEvent*)
    {
        QPainter p(this);
        p.setRenderHint(QPainter::HighQualityAntialiasing, true);
        p.scale(scale(), scale());

        //remove this later
        if (subpatchWindow()) {
            p.setPen(QPen(QColor(192, 192, 192), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
            p.drawRect(0, 2, width(), height() - 4);
        }

        QColor rectColor = (errorBox()) ? QColor(255, 0, 0) : QColor(128, 128, 128);
        p.setPen(QPen(rectColor, 2, (errorBox()) ? Qt::DashLine : Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        p.drawRect(0, 0, width(), height());
        QTextOption* op = new QTextOption;
        op->setAlignment(Qt::AlignLeft);
        p.setPen(QPen(QColor(0, 0, 0), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

        p.setFont(QFont(PREF_QSTRING("Font"), 11, 0, false));
        p.drawText(2, 3, width() - 2, height() - 3, 0, objectData().c_str(), 0);

        if (isSelected()) {
            p.setPen(QPen(QColor(0, 192, 255), 2, (errorBox()) ? Qt::DashLine : Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
            p.drawRect(0, 0, width(), height());
        }
    }

    ////
    /// \brief mouse down
    /// \param ev
    ///
    void mousePressEvent(QMouseEvent* ev)
    {
        //open canvas for subpatch
        if (getEditMode() != em_Unlocked) {
            if (subpatchWindow()) {
                subpatchWindow()->show();
            }
        }

        if ((getEditMode() == em_Unlocked) && isSelected()) {

            emit editObject(this);
            return;
        }

        emit selectBox(this);
        dragOffset = ev->pos();
    }

    ////
    /// \brief mouse up
    ///
    void mouseReleaseEvent(QMouseEvent*)
    {
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

        if ((getEditMode() != em_Unlocked) && (subpatchWindow())) {
            setCursor(QCursor(Qt::PointingHandCursor));
        } else {
            setCursor(QCursor(Qt::ArrowCursor));
        }
    }

    void setPdMessage(std::string message)
    {
        setObjectData(message);
        autoResize();

        QFont myFont(PREF_QSTRING("Font"), 11);
        QFontMetrics fm(myFont);
        int new_w = fm.width(QString(objectData().c_str())) + 10;
        new_w = (new_w < 25) ? 25 : new_w;
        setFixedWidth(new_w);
        //editor_->setFixedWidth(width() - 5);

        //todo: del object and create new + patchcords

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
