// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_CANVAS_H
#define CM_CANVAS_H

#include <QWidget>
#include <QtGui>
#include <QtWidgets>

#include "UIPatchcord.h"

#include "ObjectMaker.h"

#include "ObjectLoader.h"

#include "Grid.h"
#include "SelectionRect.h"
#include "UINewPatchcord.h"

#include "CanvasData.h"

#include "Clipboard.h"

#include <QMenu>

//class QMenu;

namespace qtpd {

////
/// \brief Canvas View - used by Patch window controller
///
class CanvasView : public QGraphicsView {
private:
    UIObject* _connectionStartObject;
    UIObject* _connectionStartOutlet;
    UIObject* _replaceObject;

    QPoint _newObjectPos;
    QPoint _dragPrevPos;

    bool _gridSnap;

    QSize _windowSize;

    ObjectMaker* _objectMaker;

    bool _keepPdObject;
    bool _readOnly;

    t_editMode* _canvasEditMode;

    Grid* _grid;
    SelectionRect* _selectionRect;
    UINewPatchcord* _newLine;

    UIObject* _dragObject;

    float _zoom;

    QMenu _popupMenu;
    QAction* _pmProperties;

    PatchWindowController* _controller;

    Q_OBJECT

public:
    explicit CanvasView(QGraphicsView* parent = 0);

    // todo fix
    QPoint newObjectPos();

    UIObject* dragObject();
    void setDragObject(UIObject* object);

    void setController(PatchWindowController* c);

    void setZoom(float zoom);
    float getZoom();

    virtual t_editMode getEditMode();
    virtual t_editMode* getEditModeRef();

    void setEditMode(t_editMode mode);
    void setGridEnabled(bool val);
    void setGridSnap(bool val);

    bool gridSnap();
    int gridStep();

    void setKeepPdObject(bool v);
    bool keepPdObject();

    void setReadOnly(bool val);

    bool readOnly();

    QSize minimumCanvasSize();

    void setWindowSize(QSize wsize);

    void setReplaceObject(UIObject* obj); ///>sets 'replaceobject' pointer
    UIObject* replaceObject();

    // -------------------------------------------------------

    void addInlet();
    void addOutlet();

    // -------------------------------------------------------

    void mouseMoveEvent(QMouseEvent* ev);
    void mousePressEvent(QMouseEvent* ev);
    void mouseReleaseEvent(QMouseEvent* ev);

    // -------------------------------------------------------

    ////
    /// \brief change size to fit all objects
    ///
    void resizeToObjects();

    ////
    /// \brief slot called by box when it is selected
    /// \param box
    ///
    Q_SLOT void slotSelectBox(UIItem* box, QGraphicsSceneMouseEvent* ev);

    ////
    /// \brief TODO check. slot called by box when it starts moving
    /// \param box
    /// \param event
    ///
    Q_SLOT void slotMoveBox(UIItem* box, QGraphicsSceneMouseEvent* event);

    ////
    /// \brief cancels patchcord creation
    ///
    void cancelPatchcord();

    ////
    /// \brief pointer to objectMaker widget
    /// \return
    ///
    ObjectMaker* objectMaker();

    ////
    /// \brief this is called when 'inlet' etc object is created in subpatch
    ///
    void portLocalCountUpdated();

    ////
    /// \brief shows object maker for 'new object' menu command
    void showNewObjectMaker();

    //deprecated
    void canvasFromPdStrings(QStringList strings);

    // -- NEW ---------------------------------------

    void resizeEvent(QResizeEvent*);
    void createContextMenu();

private slots:

    void slotPopupMenu();

public slots:

    void slotInletMousePress(UIItem* obj, QGraphicsSceneMouseEvent* ev);
    void slotInletMouseRelease(UIItem*, QGraphicsSceneMouseEvent*);
    void slotOutletMousePressed(UIItem* obj, QGraphicsSceneMouseEvent*);
    void slotOutletMouseReleased(UIItem*, QGraphicsSceneMouseEvent*);

    ////
    /// \brief slot in Box-style canvas for handling new ins/outs
    ///
    void slotPortCountUpdated();

    ////
    /// \brief creates objectmaker atop existiong object box
    /// \details after typing the text in the objectmaker with nonzero 'replaceobject' the old object is deleted, the new object is created and old connections are restored
    /// \param obj
    ///
    void slotObjectStartsEdit(void* obj);

signals:
    std::pair<QMainWindow*, qtpd::UIObject*> createSubpatchWindow();
    void signalUpdatePortCount();

    // new 0617
    void signalSelectObject(UIObject* object);
    void signalPatchcord(UIObject* src, int nOut, UIObject* dest, int nIn);

    void signalMousePress(QPoint pos);
    void signalMouseMove(QPoint pos);
    void signalMouseRelease(QPoint pos);

    void signalDeselectObjects();

    void signalSelectionFrame(QPoint start, QPoint end);
    void signalMoveSelectedBoxes(QPoint eventPos);

    void signalPopupMenu();
};
}

#endif // CM_CANVAS_H
