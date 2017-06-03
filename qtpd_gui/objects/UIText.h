// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef cmo_text_H
#define cmo_text_H

#include <QPlainTextEdit>

#include "Port.h"
#include "UIObject.h"

#include <QGraphicsView>

//#include "cm_pdlink.h"

namespace qtpd {

////
/// \brief gui object: comment box (ui.text)
///
class UIText : public UIObject {
    Q_OBJECT

private:
    bool _clicked;
    QPlainTextEdit* _editor;
    QString _objectText;

public:
    explicit UIText(); //UIObject* parent = 0);

    static UIObject* createObj(QString data)
    {
        UIText* ret = new UIText();

        QStringList l = data.split(" ");l.removeFirst();
        data = l.join(" ");
        ret->setObjectData(data);

        return ret;
    }
    static UIObject* createObject(QString objectData, t_canvas*, QGraphicsView* parent = 0)
    {
        UIText* b = new UIText();
        //b->setCanvas((void*)parent);

        //temporary
        QString data1 = b->properties()->extractFromPdFileString(objectData);
        b->setObjectData("");

        // the zoo lol
        QString data = b->properties()->get("Text")->asQString().split("\\n ").join("\n");
        b->_editor->document()->setPlainText(data);

        b->_objectText = data;

        int fontSize = b->properties()->get("FontSize")->asQString().toInt();
        b->_editor->setFont(QFont(PREF_QSTRING("Font"), fontSize, 0, false));

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
        p->setPen(QPen(QColor(0, 0, 0), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

        int fontSize = properties()->get("FontSize")->asQString().toInt();
        p->setFont(QFont(PREF_QSTRING("Font"), fontSize, 0, false));
        p->drawText(2, 3, width() - 2, height() - 3, 0, _objectText, 0);
    }

    //////////

    void initProperties()
    {
        UIObject::initProperties();
        QStringList list;

        properties()->create("Text", "Data", "0.1", list);
    };

    ///////////////////

    void mousePressEvent(QGraphicsSceneMouseEvent* ev)
    {

        if ((getEditMode() == em_Unlocked) && isSelected()) {

            _editor->document()->setPlainText(QString(_objectDataModel.objectData()));
            _editor->show();
            _editor->setFocus();
            ev->accept();
            return;
        }

        emit selectBox(this, ev);
        dragOffset = ev->pos().toPoint();

        if (!(getEditMode() == em_Unlocked)) {
            _clicked = true;
            update();

            //todo timer
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

        _editor->setFixedWidth(width() - 1);
        _editor->setFixedHeight(height() - 2);

        _editor->hide();
    }

    static void updateUI(void* uiobj, ceammc::AtomList msg)
    {
        qDebug("update ui");

        UIText* x = (UIText*)uiobj;

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

    bool eventFilter(QObject*, QEvent* event)
    {
        if (event->type() == QEvent::KeyPress) {

            QKeyEvent* keyEvent = static_cast<QKeyEvent*>(event);

            if ((keyEvent->key() == Qt::Key_Return) && (keyEvent->modifiers() == Qt::ShiftModifier)) {
                editorDone();
                return true;
            }
        }

        return false;
    }

    QStringList getEditorData()
    {
        return _editor->document()->toPlainText().split(QRegExp("[\r\n]"), QString::SkipEmptyParts);
    }


    virtual void setServerObject(ServerObject* o)
    {
        UIObject::setServerObject(o);
        if (o)
            o->connectUI(this, &UIText::updateUI);
    };
signals:

private slots:
    void editorDone();
    void editorChanged();
};
}
#endif // cmo_text_H
