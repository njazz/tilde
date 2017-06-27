// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_BOX_H
#define CM_BOX_H

#include <QLineEdit>
#include <QMainWindow>
#include <QtGui>

#include "UIObject.h"

#include <QGraphicsSceneMouseEvent>
#include <QGraphicsView>

namespace qtpd {

////
/// \brief gui object: standard object box
///
class UIBox : public UIObject {

    Q_OBJECT

private:
    // for abstracions
    bool _isAbstraction;
    QString _abstractionPath;

public:
    explicit UIBox();

    static UIObject* createObj(QString data);

    static UIObject* createObject(QString, t_canvas*, QGraphicsView*);

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
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* ev);

    ////
    /// \brief mouse move
    /// \param event
    ///
    void mouseMoveEvent(QGraphicsSceneMouseEvent* event);

    void setPdMessage(QString message);

    void setObjectData(QString message);

    void sync();

signals:

    void mouseMoved();
    void rightClicked();
};
}

#endif // CM_BOX_H
