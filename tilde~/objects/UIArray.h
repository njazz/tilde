// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_ARRAY_H
#define CM_ARRAY_H

#include <QGraphicsView>
#include <QLineEdit>
#include <QMainWindow>
#include <QtGui>

#include "Port.h"
#include "UIBox.h"
#include "UIObject.h"

#include "UIArrayEditor.h"

#include "CanvasView.h"

namespace tilde {

////
/// \brief gui object: array box (ui.array)
class UIArray : public UIBox {

    Q_OBJECT

private:
    UIArrayEditor _editor;
    QString _arrayName;
    int _arraySize;

    ServerArray* _array;

    void createServerArray();

public:
    explicit UIArray();

    static UIObject* createObj(QString data);

    virtual void initProperties();

    virtual void paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*); ///> paint event

    void mousePressEvent(QGraphicsSceneMouseEvent* ev);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent*);
    void mouseMoveEvent(QGraphicsSceneMouseEvent* event);

    void fromQString(QString message);

    virtual void sync();

signals:

    void mouseMoved();
    void rightClicked();
};
}

#endif // CM_BOX_H
