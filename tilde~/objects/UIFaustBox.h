// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef cmo_fausteditor_H
#define cmo_fausteditor_H

#include <QPlainTextEdit>

#include "Port.h"
#include "UIObject.h"

#include <QFileDialog>

//#include "UIScriptCommon.h"
#include "UITextEditor.h"

#include "UIBox.h"

class QGraphicsView;

namespace tilde {

////
/// \brief gui object: script box (ui.scriptbox)
class UIFaustBox : public UIBox {
    Q_OBJECT

private:
    bool _clicked;
    UITextEditor* _editor;

    //temporary
//    UIScriptCommon* _scriptCommon;

public:
    explicit UIFaustBox();

    static UIObject* createObj(QString data);

    void initProperties();

    virtual void paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*);

    // ------------------------

    virtual void objectPressEvent(QGraphicsSceneMouseEvent* event);

    // ----------------------

    void setPdMessage(QString message);

    virtual void sync();

    virtual void updateUI(AtomList* list);

private slots:
    void editorChanged();

    void slotCompile();
    void slotUpdate();
};
}
#endif // cmo_text_H
