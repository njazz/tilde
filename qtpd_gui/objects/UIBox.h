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

#include "pdServer.hpp"

class QGraphicsProxyWidget;

namespace qtpd {

class UIBox;

class CanvasBoxObserver : public CanvasObserver {
    UIBox* _box;

public:
    CanvasBoxObserver(){};

    void setUIBox(UIBox* b);

    virtual void inletAdded();
    virtual void outletAdded();

    virtual void inletRemoved();
    virtual void outletRemoved();
};

////
/// \brief gui object: standard object box
///
class UIBox : public UIObject {

    Q_OBJECT

private:
    // for abstracions
    bool _isAbstraction;
    QString _abstractionPath;

    PatchWindowController* _subpatchController;

    //TEMP
    bool _isSubpatch;
    bool isSubpatch();

    bool isGraphOnParentSubpatch();

    QGraphicsProxyWidget* _subpatchCanvasProxy;

    CanvasBoxObserver* _boxObserver;

public:
    explicit UIBox();

    static UIObject* createObj(QString data);

    PatchWindowController* subpatchController() { return _subpatchController; };
    virtual void setSubpatchController(PatchWindowController* cwindow) { _subpatchController = cwindow; };

    ////
    /// \brief paint event
    ///
    virtual void paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*);

    ////
    /// \brief mouse down
    /// \param ev
    ///
    void objectPressEvent(QGraphicsSceneMouseEvent* event);

    ////
    /// \brief mouse move
    /// \param event
    ///
    void objectMoveEvent(QGraphicsSceneMouseEvent* event);

    ////
    /// \brief mouse up
    ///
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* ev);

    void fromQString(QString message);

    void sync();

    virtual string asPdFileString();

    virtual void autoResize();

signals:

    void mouseMoved();
    void rightClicked();

public slots:
    void propertyShowBoxes();
};
}

#endif // CM_BOX_H
