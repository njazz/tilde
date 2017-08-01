// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CMO_MSG_H
#define CMO_MSG_H

#include <qlineedit.h>

#include "Port.h"
#include "UIObject.h"

#include <QGraphicsView>

//#include "cm_pdlink.h"

namespace tilde {

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

    static UIObject* createObj(QString data);

    virtual void paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*);
    void resizeEvent();

    // ------------------------------------------------------

    void objectPressEvent(QGraphicsSceneMouseEvent* ev);
    void objectReleaseEvent(QGraphicsSceneMouseEvent*);

    // ------------------------------------

    virtual void move(float x, float y);
    virtual void move(QPoint p);
    virtual void move(QPointF p);

    virtual void setParentCanvasView(CanvasView* v);

    void fromQString(QString objData);

    void setPdMessage(QString message);

    void updateUI(AtomList* list);

    virtual std::string asPdFileString();

    virtual void autoResize();

private slots:
    void editorDone();
    void editorChanged();
};
}

#endif // CMO_MSG_H
