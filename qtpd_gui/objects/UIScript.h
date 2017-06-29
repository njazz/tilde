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

    static UIObject* createObj(QString data);
    static UIObject* createObject(QString , t_canvas* , QGraphicsView* );

    void initProperties();
    void resizeEvent();

    virtual void paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*);
    // ------------------------

    void mousePressEvent(QGraphicsSceneMouseEvent* ev);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* ev);
    void mouseMoveEvent(QGraphicsSceneMouseEvent* event);

    // ----------------------

    void setPdMessage(QString message);

    virtual void sync();


private slots:
    void editorChanged();
};
}
#endif // cmo_text_H
