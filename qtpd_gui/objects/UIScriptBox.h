// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef cmo_scriptbox_H
#define cmo_scriptbox_H

#include <QPlainTextEdit>

#include "Port.h"
#include "UIObject.h"

#include <QFileDialog>

//#include "cm_pdlink.h"

#include "UIScriptEditor.h"

namespace qtpd {

////
/// \brief gui object: script editor box (ui.script)
///
class UIScriptBox : public UIObject {
    Q_OBJECT

private:
    bool _clicked;
    UIScriptEditor* _editor;
    QStringList _inputList;

public:
    explicit UIScriptBox();

    static UIObject* createObject(QString objectData, t_canvas* pdCanvas, QGraphicsView* parent = 0)
    {
        qDebug() << "ui.scriptbox";

        UIScriptBox* b = new UIScriptBox();
        b->setCanvas((void*)parent);

        b->_editor->setContext(pyWrapper::inst().withCanvas((QObject*)parent));

        QString data1 = b->properties()->extractFromPdFileString(objectData);
        //if (data1 != "")

        b->setObjectData("ui.scriptbox");

        // the zoo lol
        //QString data = b->properties()->get("Script")->asQString().split("\\n ").join("\n");
        QString data = "";
        b->_editor->document()->setPlainText(data);

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

            b->_editor->setContext(pyWrapper::inst().withCanvasPdObjectAndInput((UIObject*)parent, new_obj, &b->_inputList));

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
        QStringList list; // = QString("#empty").split("-");    //lol

        properties()->create("Script", "Data", "0.1", list);
    };

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
    }

    void resizeEvent()
    {
        UIObject::resizeEvent();
        _editor->setFixedWidth(width() - 5);
        _editor->setFixedHeight(height() - 25);
    }

    // ------------------------

    void mousePressEvent(QGraphicsSceneMouseEvent* ev)
    {

        emit selectBox(this, ev);
        dragOffset = ev->pos().toPoint();
        ev->accept();
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

    void setPdMessage(std::string message)
    {
        setObjectData(message);

        setSize(300, 200);
    }

    static void updateUI(void* uiobj, ceammc::AtomList msg)
    {
        qDebug("script << pd message");
        qDebug() << (long)uiobj << msg.size();

        UIScriptBox* x = (UIScriptBox*)uiobj;
        if (x) {
            //todo atomlist to qstringlist; atom as qstring
            QStringList list;
            for (size_t i = 0; i < msg.size(); i++) {
                list.push_back(msg.at(i).asString().c_str());
            }

            x->_inputList = list;
            emit x->callRun();
        }
    }

    QStringList getEditorData()
    {
        return _editor->document()->toPlainText().split(QRegExp("[\r\n]"), QString::SkipEmptyParts);
    }

    void setPdObject(void* obj)
    {
        UIObject::setPdObject(obj);
        connect(this, &UIScriptBox::callRun, this, &UIScriptBox::btnRun);
        cmp_connectUI((t_pd*)pdObject(), (void*)this, &UIScriptBox::updateUI);
    }
signals:
    void callRun();

public slots:
    void btnRun()
    {
        qDebug() << "btnRun";

        //this code is from PythonQt

        PythonQtObjectPtr context = _editor->context(); //PythonQt::self()->getMainModule();
        QString _stdOut = "";
        QString _stdErr = "";
        PythonQtObjectPtr p;
        PyObject* dict = NULL;
        if (PyModule_Check(context)) {
            dict = PyModule_GetDict(context);
        } else if (PyDict_Check(context)) {
            dict = context;
        }

        QStringList list = getEditorData();

        QString line = list.join("\r\n"); //*it;

        if (!line.isNull()) {

            if (dict) {
                context.evalScript(line);

                qDebug() << "line: " << line;
            }

            if (!p) {
                PythonQt::self()->handleError();
            }

            if (_stdOut != "") {

                cmp_post((std::string) "Python: " + _stdOut.toStdString());
            }
            if (_stdErr != "") {
                cmp_post((std::string) "Python error: " + _stdOut.toStdString());
            }
        }
    }

private slots:
    void editorChanged();

    void btnLoad()
    {
        QString fname = QFileDialog::getOpenFileName(0, QString("Open Python script"), QString("~/"), QString("*.py"), 0, 0);
        if (fname != "") {
            QFile file(fname);

            file.open(QFile::ReadOnly | QFile::Text);

            QTextStream ReadFile(&file);
            _editor->document()->setPlainText(ReadFile.readAll());
            file.close();
        }
    }

    void btnSave()
    {
        QString fname = QFileDialog::getSaveFileName(0, QString("Save Python script"), QString("~/"), QString("*.py"), 0, 0);
        if (fname != "") {
            QFile file(fname);

            file.open(QFile::WriteOnly | QFile::Text);

            QTextStream WriteFile(&file);
            WriteFile << _editor->document()->toPlainText();
            file.close();
        }
    }

    void btnClear()
    {
        _editor->clear();
    }
};
}
#endif // cmo_text_H
