// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef UI_script_H
#define UI_script_H

#include <QPlainTextEdit>

#include "Port.h"
#include "UIBox.h"
#include "UIObject.h"

#include <QFileDialog>

#include "UIScriptCommon.h"
#include "UIScriptEditor.h"

class QGraphicsView;

namespace qtpd {

////
/// \brief gui object: script editor embedded box (ui.script)
///
class UIScript : public UIBox {
    Q_OBJECT

private:
    bool _clicked;
    UIScriptEditor* _editor;

    //temporary
    UIScriptCommon* _scriptCommon;

public:
    explicit UIScript();

    static UIObject* createObj(QString data);
    static UIObject* createObject(QString, t_canvas*, QGraphicsView*);

    void initProperties();
    void resizeEvent();

    virtual void paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*);
    // ------------------------

    // mouse?

    // ----------------------

    void setPdMessage(QString message);

    virtual void setObjectData(QString message);

    virtual void updateUI(AtomList list);

    virtual void sync();

private slots:
    void editorChanged();
};
}
#endif // cmo_text_H
