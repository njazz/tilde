// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CMO_MSG_H
#define CMO_MSG_H

#include <qlineedit.h>

#include "Port.h"
#include "UIObject.h"

#include <QGraphicsView>

//#include "cm_pdlink.h"

namespace qtpd {

////
/// \brief gui object: message box (ui.msg)
///
class UIMessage : public UIObject {
    Q_OBJECT

private:
    bool _clicked;
    QLineEdit* _editor;

public:
    explicit UIMessage();

    static UIObject* createObject(QString objectData, t_canvas* pdCanvas, QGraphicsView* parent = 0)
    {
        qDebug() << "<< ui.msg";

        UIMessage* b = new UIMessage();
        b->setCanvas((void*)parent);

        //fix: remove "ui.msg"
        //do this normal way later
        QStringList messageDataList = QString(objectData).split(" ");
        messageDataList.removeAt(0);
        std::string messageData = messageDataList.join(" ").toStdString();

        std::string data1 = b->properties()->extractFromPdFileString(messageData);
        b->setObjectData(data1);

        qDebug() << "msg data:" << messageDataList;

        b->autoResize();

        std::string message = "ui.msg";

        //temp
        t_object* new_obj = 0;
        if (!pdCanvas) {
            qDebug("bad pd canvas instance");
        } else {
            QPoint pos = QPoint(0, 0);
            new_obj = cmp_create_object(pdCanvas, message, pos.x(), pos.y());
        }

        if (new_obj) {
            qDebug("created msgbox %s | ptr %lu\n", message.c_str(), (long)new_obj);
            b->setPdObject(new_obj);
        } else {
            qDebug("Error: no such object %s", message.c_str());
        }

        b->setPdMessage(data1.c_str());

        b->addInlet();
        b->addOutlet();

        return (UIObject*)b;
    };

    virtual void paint(QPainter* p, const QStyleOptionGraphicsItem*, QWidget*)
    {
        QPolygon poly;
        poly << QPoint(0, 0) << QPoint(width(), 0) << QPoint(width() - 4, 4) << QPoint(width() - 4, height() - 4) << QPoint(width(), height()) << QPoint(0, height());

        p->setPen(QPen(QColor(220, 220, 220), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        QPainterPath tmpPath;
        tmpPath.addPolygon(poly);
        QBrush br = QBrush(QColor(220, 220, 220), Qt::SolidPattern);
        p->fillPath(tmpPath, br);

        if (isSelected()) {
            p->setPen(QPen(QColor(0, 192, 255), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        } else if (_clicked) {
            p->setPen(QPen(QColor(0, 192, 255), 2, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
        } else {
            p->setPen(QPen(QColor(128, 128, 128), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        }

        p->drawPolygon(poly);

        QTextOption* op = new QTextOption;
        op->setAlignment(Qt::AlignLeft);
        p->setPen(QPen(QColor(0, 0, 0), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

        p->setFont(QFont(PREF_QSTRING("Font"), 11, 0, false));
        p->drawText(2, 3, width() - 2, height() - 3, 0, objectData().c_str(), 0);
    }

    void resizeEvent()
    {
        UIObject::resizeEvent();
        _editor->setFixedWidth(width() - 5);
    }

    // ------------------------------------------------------

    void mousePressEvent(QGraphicsSceneMouseEvent* ev)
    {
        //context menu
        if (ev->button() == Qt::RightButton) {
            //            QPoint pos = mapToGlobal(ev->pos());
            //            showPopupMenu(pos);
            ev->accept();
            return;
        }

        if ((getEditMode() == em_Unlocked) && isSelected()) {
            _editor->setText(QString(objectData().c_str()));
            _editor->show();
            _editor->setFocus();
        }

        emit selectBox(this, ev);
        dragOffset = ev->pos().toPoint();

        if (!(getEditMode() == em_Unlocked)) {
            _clicked = true;
            update();

            //todo timer
        }

        //temporary
        //move
        if (getEditMode() != em_Unlocked) {
            if (!pdObject()) {
                qDebug("msg: bad pd object!");
            } else {

                cmp_sendstring((t_pd*)pdObject(), ((std::string) "bang").c_str());
            }
        }
    }

    void mouseReleaseEvent(QGraphicsSceneMouseEvent*)
    {
        //if (!getEditMode())
        {
            _clicked = false;
            update();
        }
    }

    void mouseMoveEvent(QGraphicsSceneMouseEvent* event)
    {
        if (event->buttons() & Qt::LeftButton) {
            emit moveBox(this, event);
        }
        event->ignore();

        //todo move!
        if (getEditMode() != em_Unlocked) {
            setCursor(QCursor(Qt::PointingHandCursor));
        } else {
            setCursor(QCursor(Qt::ArrowCursor));
        }
    }

    // ------------------------------------

    void setPdMessage(std::string message)
    {
        setObjectData(message);
        autoResize();

        QFont myFont(PREF_QSTRING("Font"), 11);
        QFontMetrics fm(myFont);
        int new_w = fm.width(QString(objectData().c_str())) + 10;
        new_w = (new_w < 25) ? 25 : new_w;
        setWidth(new_w);

        //temporary
        //move
        if (getEditMode() == em_Unlocked) {
            if (!pdObject()) {
                qDebug("msg: bad pd object!");
            } else {

                std::string msg = ("set " + objectData());
                cmp_sendstring((t_pd*)pdObject(), msg);
            }
        }
    }

    static void updateUI(void* uiobj, ceammc::AtomList msg)
    {
        UIMessage* x = (UIMessage*)uiobj;

        std::string obj_data;
        for (size_t i = 0; i < msg.size(); i++) {
            // workaround
            if (AtomList(msg.at(i)).toPdData()->a_type == A_COMMA)
                obj_data += ", ";
            else if (AtomList(msg.at(i)).toPdData()->a_type == A_SEMI)
                obj_data += "; ";
            else if (AtomList(msg.at(i)).toPdData()->a_type == A_DOLLAR)
                obj_data += "$" + QString::number(AtomList(msg.at(i)).toPdData()->a_w.w_index).toStdString() + " ";
            else
                obj_data += msg.at(i).asString() + " ";
        }

        x->setObjectData(obj_data);
        x->autoResize();

        //
        emit x->callRepaint();
    }

    void setPdObject(void* obj)
    {
        UIObject::setPdObject(obj);
        cmp_connectUI((t_pd*)pdObject(), (void*)this, &UIMessage::updateUI);
    }

    std::string asPdFileString()
    {
        // THE fix
        std::string ret;

        ret = "#X obj ";
        ret += std::to_string(x()) + " " + std::to_string(y()) + " ";
        ret += "ui.msg ";
        ret += ((objectData() == "") ? ((std::string) "") : (objectData() + " ")) + properties()->asPdFileString();

        return ret;
    }

private slots:
    void editorDone();
    void editorChanged();
};
}

#endif // CMO_MSG_H