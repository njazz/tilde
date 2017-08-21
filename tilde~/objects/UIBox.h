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

// #include "pdServer.hpp"

#include "xpd-transition/xpd-headers.h"

class QGraphicsProxyWidget;

namespace tilde {

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

    virtual void paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*);

    void objectPressEvent(QGraphicsSceneMouseEvent* event); ///> object mouse down
    void objectMoveEvent(QGraphicsSceneMouseEvent* event); ///> object mouse move

    void mouseReleaseEvent(QGraphicsSceneMouseEvent* ev); ///> basic mouse up

    void fromQString(QString message);

    void sync();

    virtual string asPdFileString();

    virtual void autoResize();

signals:

    void mouseMoved();
    void rightClicked();

public slots:
    void propertyEmbed();
};
}

#endif // CM_BOX_H
