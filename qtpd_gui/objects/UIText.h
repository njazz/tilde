// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef cmo_text_H
#define cmo_text_H

#include <QPlainTextEdit>

#include "UIObject.h"
#include "Port.h"

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
    explicit UIText(UIObject* parent = 0);

    static UIObject* createObject(std::string objectData, t_canvas* pdCanvas, UIWidget* parent = 0)
    {
        UIText* b = new UIText((UIObject*)parent);

        //temporary
        std::string data1 = b->properties()->extractFromPdFileString(objectData);
        b->setObjectData("");

        // the zoo lol
        QString data = b->properties()->get("Text")->asQString().split("\\n ").join("\n");
        b->_editor->document()->setPlainText(data);

        b->_objectText = data;

        int fontSize = b->properties()->get("FontSize")->asQString().toInt();
        b->_editor->setFont(QFont(PREF_QSTRING("Font"), fontSize, 0, false));

        b->autoResize();
        return (UIObject*)b;
    };

    void paintEvent(QPaintEvent*)
    {
        QPainter p(viewport());

        if (getEditMode() == em_Unlocked) {
            if (isSelected()) {
                p.setPen(QPen(QColor(0, 192, 255), 2, Qt::DotLine, Qt::SquareCap, Qt::BevelJoin));
            } else if (_clicked) {
                p.setPen(QPen(QColor(0, 192, 255), 4, Qt::DotLine, Qt::RoundCap, Qt::RoundJoin));
            } else {
                p.setPen(QPen(QColor(128, 128, 128), 2, Qt::DotLine, Qt::SquareCap, Qt::BevelJoin));
            }

            p.drawRect(0, 0, width(), height());
            //p.drawPolygon(poly);
        }

        QTextOption* op = new QTextOption;
        op->setAlignment(Qt::AlignLeft);
        p.setPen(QPen(QColor(0, 0, 0), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

        int fontSize = properties()->get("FontSize")->asQString().toInt();
        p.setFont(QFont(PREF_QSTRING("Font"), fontSize, 0, false));
        p.drawText(2, 3, width() - 2, height() - 3, 0, _objectText, 0);
    }

    //////////

    void initProperties()
    {
        UIObject::initProperties();
        QStringList list;

        properties()->create("Text", "Data", "0.1", list);
    };

    ///////////////////

    void mousePressEvent(QMouseEvent* ev)
    {

        if ((getEditMode() == em_Unlocked) && isSelected()) {

            _editor->document()->setPlainText(QString(objectData().c_str()));
            _editor->show();
            _editor->setFocus();
        }

        emit selectBox(this, ev);
        dragOffset = ev->pos();

        if (!(getEditMode() == em_Unlocked)) {
            _clicked = true;
             viewport()->update();

            //todo timer
        }
    }

    void mouseReleaseEvent(QMouseEvent*)
    {
        //selected_ = false;

        //if (!getEditMode())
        //{
        _clicked = false;
         viewport()->update();
        //}
    }

    void mouseMoveEvent(QMouseEvent* event)
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

        setFixedWidth((int)fm.width(_objectText) + 5);
        if (width() < minimumBoxWidth())
            setFixedWidth(minimumBoxWidth());

        //duplicate?
        int new_w = fm.width(_objectText) + 20;
        new_w = (new_w < 25) ? 25 : new_w;

        int new_h = fm.boundingRect(QRect(0, 0, new_w, 100), 0, _objectText).height() + 7;

        new_h = (new_h < 25) ? 25 : new_h;

        setFixedWidth(new_w);
        setFixedHeight(new_h);
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

        //autoResize();

        //auto-resize moved here
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
        for (int i = 0; i < msg.size(); i++) {
            obj_data += msg.at(i).asString() + " ";
        }

        x->setObjectData(obj_data);
        x->autoResize();

        x->repaint();// viewport()->update();
    }

    //    void setPdObject(void *obj)
    //    {
    //        cm_object::setPdObject(obj);
    //        //cmp_connectUI((t_pd*)getPdObject(), (void*)this, &cmo_text::updateUI);
    //    }

    //    std::string asPdFileString()
    //    {return "ui.text "+ objectData();}

    void* pdObject()
    {
        return 0;
    }

    bool eventFilter(QObject* watched, QEvent* event)
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

signals:

private slots:
    void editorDone();
    void editorChanged();
};
}
#endif // cmo_text_H
