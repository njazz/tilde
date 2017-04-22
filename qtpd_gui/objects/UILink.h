// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef cmo_link_H
#define cmo_link_H

#include <QPlainTextEdit>

#include "Port.h"
#include "UIObject.h"

#include <QGraphicsView>

//#include "cm_pdlink.h"

namespace qtpd {

////
/// \brief gui object: comment box (ui.text)
///
class UILink : public UIObject {
    Q_OBJECT

private:
    bool _clicked;
    //    QPlainTextEdit* _editor;
    QString _objectText;

public:
    explicit UILink(); //UIObject* parent = 0);

    static UIObject* createObject(QString objectData, t_canvas*, QGraphicsView* parent = 0)
    {
        UILink* b = new UILink();
        b->setCanvas((void*)parent);

        b->properties()->extractFromPdFileString(objectData);
        b->setObjectData("");

        // the zoo lol
        QString data = b->properties()->get("title")->asQString(); //.split("\\n ").join("\n");

        b->_objectText = data;

        if (!b->properties())
            b->initProperties();

        //int fontSize = b->properties()->get("FontSize")->asQString().toInt();

        b->autoResize();

        b->resizeEvent();

        return (UIObject*)b;
    };

    virtual void paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*)
    {
        p->setClipRect(option->exposedRect);

        // does it need a background?

        //        QBrush brush(bgColor());
        //        p->setBrush(brush);
        //        p->drawRect(boundingRect());
        //        p->setBrush(QBrush());

        if (getEditMode() == em_Unlocked) {
            if (isSelected()) {
                p->setPen(QPen(QColor(0, 192, 255), 1, Qt::DotLine, Qt::SquareCap, Qt::BevelJoin));
            } else if (_clicked) {
                p->setPen(QPen(QColor(0, 192, 255), 2, Qt::DotLine, Qt::RoundCap, Qt::RoundJoin));
            } else {
                p->setPen(QPen(QColor(128, 128, 128), 1, Qt::DotLine, Qt::SquareCap, Qt::BevelJoin));
            }

            p->drawRect(0, 0, width(), height());
        }

        QTextOption* op = new QTextOption;
        op->setAlignment(Qt::AlignLeft);
        QColor textColor = (hover()) ? QColor(0, 192, 255) : QColor(0, 0, 0);
        p->setPen(QPen(textColor, 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

        int fontSize = properties()->get("FontSize")->asQString().toInt();
        QFont font = QFont(PREF_QSTRING("Font"), fontSize, 0, false);
        font.setItalic(true);
        p->setFont(font);

        QString text = properties()->get("title")->asQString();
        p->drawText(2, 3, width() - 2, height() - 3, 0, text, 0);
    }

    //////////

    void initProperties()
    {
        //qDebug() << "properties init";
        UIObject::initProperties();
        QStringList list;

        properties()->create("title", "Data", "0.1", list);
        properties()->create("url", "Data", "0.1", list);
    };

    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent*)
    {
        if (getEditMode() == em_Unlocked) {
            setHover(true);
            update();
        }
    }

    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*)
    {
        if (getEditMode() == em_Unlocked) {
            setHover(false);
            update();
        }
    }

    ///////////////////
    /// \brief mousePressEvent
    /// \param ev
    ///
    ///

    void mousePressEvent(QGraphicsSceneMouseEvent* ev)
    {

        dragOffset = ev->pos().toPoint();

        if (!(getEditMode() == em_Unlocked)) {
            emit selectBox(this, ev);
            _clicked = true;
            update();

        } else {
            // action
        }
    }

    void mouseReleaseEvent(QGraphicsSceneMouseEvent*)
    {
        _clicked = false;
        update();
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

    void autoResize()
    {
        int fontSize = properties()->get("FontSize")->asQString().toInt();

        QFont myFont(PREF_QSTRING("Font"), fontSize);
        QFontMetrics fm(myFont);

        setWidth((int)fm.width(_objectText) + 5);
        if (width() < _objectDataModel.minimumBoxWidth())
            setWidth(_objectDataModel.minimumBoxWidth());

        //duplicate?
        int new_w = fm.width(_objectText) + 20;
        new_w = (new_w < 25) ? 25 : new_w;

        int new_h = fm.boundingRect(QRect(0, 0, new_w, 100), 0, _objectText).height() + 7;

        new_h = (new_h < 25) ? 25 : new_h;

        setWidth(new_w);
        setHeight(new_h);
    }

    ///////

    void setPdMessage(std::string message)
    {
        setObjectData("ui.text");

        //TODO temporary fix!
        QString msg = QString(message.c_str());
        QStringList list = msg.split("\n");
        for (int i = 0; i < list.size(); i++) {
            list[i] = list[i] + "\\n";
        }
        properties()->set("Text", list);

        QString data = properties()->get("Text")->asQString().split("\\n ").join("\n");

        _objectText = data;

        autoResize();
    }

    static void updateUI(void* uiobj, ceammc::AtomList msg)
    {
        qDebug("update ui");

        UILink* x = (UILink*)uiobj;

        std::string obj_data;
        for (size_t i = 0; i < msg.size(); i++) {
            obj_data += msg.at(i).asString() + " ";
        }

        x->setObjectData(obj_data.c_str());
        x->autoResize();

        x->update();
    }

    void* pdObject()
    {
        return 0;
    }

signals:
};
}
#endif // cmo_text_H
