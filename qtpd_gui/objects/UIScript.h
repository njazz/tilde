// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef UI_script_H
#define UI_script_H

#include <QPlainTextEdit>

#include "Port.h"
#include "UIObject.h"

#include <QFileDialog>

//#include "cm_pdlink.h"

//#include "UIScriptTextEdit.h"
#include "UIScriptEditor.h"

#include "UIScriptCommon.h"

namespace qtpd {

////
/// \brief gui object: script editor embedded box (ui.script)
///
class UIScript : public UIObject {
    Q_OBJECT

private:
    bool _clicked;
    UIScriptEditor* _editor;

    //UIScriptData* _data;

    //temporary
    UIScriptCommon* _scriptCommon;

    //    QStringList _inputList;

public:
    explicit UIScript();

    static UIObject* createObj(QString data)
    {
        UIScript* ret = new UIScript();

        QStringList l = data.split(" ");l.removeFirst();
        data = l.join(" ");
        ret->setObjectData(data);

        return ret;
    }

    static UIObject* createObject(QString objectData, t_canvas* pdCanvas, QGraphicsView* parent = 0)
    {
        qDebug() << "ui.script";

        UIScript* b = new UIScript();
        //b->setCanvas((void*)parent);

        b->_editor->textEdit()->setContext(pyWrapper::inst().withCanvas((QObject*)parent));

        QString data1 = b->properties()->extractFromPdFileString(objectData);
        if (data1 != "") {
            QStringList l = data1.split(" ");
            if (l.size() > 1) {
                l.removeAt(0);
                b->properties()->get("ScriptFile")->set(l.at(0));
            }
        }

        b->setObjectData("ui.script");

        // the zoo lol
        //QString data = b->properties()->get("Script")->asQString().split("\\n ").join("\n");
        QString data = "";

        b->_editor->textEdit()->document()->setPlainText(data);

        // pd object
        std::string message = "ui.script";

        //temp
        t_object* new_obj = 0;
        if (!pdCanvas) {
            qDebug("bad pd canvas instance");
        } else {
            QPoint pos = QPoint(0, 0);
            new_obj = cmp_create_object(pdCanvas, message, pos.x(), pos.y());
        }

        if (new_obj) {
            qDebug("created ui.script %s | ptr %lu\n", message.c_str(), (long)new_obj);
            b->setPdObject(new_obj);

            b->_editor->textEdit()->setContext(pyWrapper::inst().withCanvasPdObjectAndInput((UIObject*)parent, new_obj, &b->_scriptCommon->scriptData()->inputList));

            b->addInlet();
            b->addOutlet();

        } else {
            qDebug("Error: no such object %s", message.c_str());
        }

        b->resizeEvent();

        return (UIObject*)b;
    };

    void initProperties()
    {
        UIObject::initProperties();

        properties()->create("Script", "Data", "0.1", QStringList(""));
    };

    void resizeEvent()
    {
        _editor->setFixedSize(width() - 2, height() - 2);
    }

    virtual void paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*)
    {
        p->setClipRect(option->exposedRect);

        QBrush brush(bgColor());
        p->setBrush(brush);
        p->drawRect(boundingRect());
        p->setBrush(QBrush());

        if (getEditMode() == em_Unlocked) {
            if (isSelected()) {
                p->setPen(QPen(QColor(0, 192, 255), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
            } else if (_clicked) {
                p->setPen(QPen(QColor(0, 192, 255), 2, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
            } else {
                p->setPen(QPen(QColor(128, 128, 128), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
            }

            p->drawRect(0, 0, width(), height());
        }

        //p->setPen(QPen(QColor(0, 0, 0), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        //p->setFont(QFont(PREF_QSTRING("Font"), properties()->get("FontSize")->asFontSize(), 0, false));
        //p->drawText(2, 3, boundingRect().width() - 2, boundingRect().height() - 3, 0, "py " + properties()->get("ScriptFile")->asQString(), 0);
    }

    // ------------------------

    void mousePressEvent(QGraphicsSceneMouseEvent* ev)
    {

        if (getEditMode() != em_Unlocked) {
            _editor->show();
        }
        if (getEditMode() == em_Unlocked) {
            emit selectBox(this, ev);
            dragOffset = ev->pos().toPoint();
            ev->accept();
        }

        //context menu
        if (ev->button() == Qt::RightButton) {

            QPoint pos;

            if (scene()
                && !scene()->views().isEmpty()
                && scene()->views().first()
                && scene()->views().first()->viewport()) {

                QGraphicsView* v = scene()->views().first();
                pos = v->viewport()->mapToGlobal(ev->pos().toPoint());

                // TODO
                showPopupMenu(pos + this->pos().toPoint());
                ev->accept();
            }

            return;
        }
    }

    void mouseReleaseEvent(QGraphicsSceneMouseEvent* ev)
    {
        ev->accept();
    }

    void mouseMoveEvent(QGraphicsSceneMouseEvent* event)
    {
        if (event->buttons() & Qt::LeftButton) {
            emit moveBox(this, event);
        }
        event->accept();

        //todo move!
        if (getEditMode() != em_Unlocked) {
            setCursor(QCursor(Qt::PointingHandCursor));
        } else {
            setCursor(QCursor(Qt::ArrowCursor));
        }
    }

    // ----------------------

    void setPdMessage(QString message)
    {
        setObjectData(message);

        setSize(300, 200);
    }

    void setPdObject(void* obj)
    {
        UIObject::setPdObject(obj);
        //connect(this, &UIScript::callRun, this, &UIScript::btnRun);
        cmp_connectUI((t_pd*)pdObject(), (void*)this->_scriptCommon, &UIScriptCommon::updateUI);
    }

private slots:
    void editorChanged();
};
}
#endif // cmo_text_H
