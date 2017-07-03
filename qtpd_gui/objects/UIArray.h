// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_ARRAY_H
#define CM_ARRAY_H

#include <QGraphicsView>
#include <QLineEdit>
#include <QMainWindow>
#include <QtGui>

#include "Port.h"
#include "UIObject.h"

#include "UIArrayEditor.h"

#include "CanvasView.h"

namespace qtpd {

////
/// \brief gui object: array box (ui.array)
///
class UIArray : public UIObject {

    Q_OBJECT

private:
    UIArrayEditor _editor;
    QString _arrayName;
    int _arraySize;

    ServerArray* _array;

    void createServerArray();

public:
    explicit UIArray(); //UIObject* parent = 0);

    static UIObject* createObj(QString data);

    static UIObject* createObject(QString, t_canvas*, QGraphicsView*) { return 0; }

    virtual void initProperties();

    ////
    /// \brief paint event
    ///
    virtual void paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*);

    ////
    /// \brief mouse down
    /// \param ev
    ///
    void mousePressEvent(QGraphicsSceneMouseEvent* ev);

    ////
    /// \brief mouse up
    ///
    void mouseReleaseEvent(QGraphicsSceneMouseEvent*);

    ////
    /// \brief mouse move
    /// \param event
    ///
    void mouseMoveEvent(QGraphicsSceneMouseEvent* event);

    //void setPdMessage(QString message);

    void setObjectData(QString message);

    virtual void sync();

signals:

    void mouseMoved();
    void rightClicked();
};
}

#endif // CM_BOX_H
