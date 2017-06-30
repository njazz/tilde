// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef cmo_scriptbox_H
#define cmo_scriptbox_H

#include <QPlainTextEdit>

#include "Port.h"
#include "UIObject.h"

#include <QFileDialog>

//#include "cm_pdlink.h"
//#include "UIScriptTextEdit.h"

#include "UIScriptEditor.h"
#include "UIScriptCommon.h"

#include "UIBox.h"

class QGraphicsView;

namespace qtpd {

////
/// \brief gui object: script box (ui.scriptbox)
///
class UIScriptBox : public UIBox {
    Q_OBJECT

private:
    bool _clicked;
    UIScriptEditor* _editor;

    //UIScriptData* _data;

    //temporary
    UIScriptCommon* _scriptCommon;

    //    QStringList _inputList;

public:
    explicit UIScriptBox();

    static UIObject* createObj(QString data);
    static UIObject* createObject(QString, t_canvas*, QGraphicsView*);
    /*

    {
        qDebug() << "ui.scriptbox";

        UIScriptBox* b = new UIScriptBox();
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

        b->setObjectData("ui.scriptbox");

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
            //b->setPdObject(new_obj);

            b->_editor->textEdit()->setContext(pyWrapper::inst().withCanvasPdObjectAndInput((UIObject*)parent, new_obj, &b->_scriptCommon->scriptData()->inputList));

            b->addInlet();
            b->addOutlet();

        } else {
            qDebug("Error: no such object %s", message.c_str());
        }

        b->resizeEvent();

        return (UIObject*)b;
    };
*/
    void initProperties();

    virtual void paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*);

    // ------------------------

//    void mousePressEvent(QGraphicsSceneMouseEvent* ev);

//    void mouseReleaseEvent(QGraphicsSceneMouseEvent* ev);

//    void mouseMoveEvent(QGraphicsSceneMouseEvent* event);

    virtual void objectPressEvent(QGraphicsSceneMouseEvent * event);

    // ----------------------

    void setPdMessage(QString message);

    virtual void sync();

    virtual void updateUI(AtomList list);


private slots:
    void editorChanged();
};
}
#endif // cmo_text_H
