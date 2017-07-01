#ifndef CM_PATCHWINDOW_H
#define CM_PATCHWINDOW_H

#include "BaseWindow.h"

namespace qtpd {

class CanvasView;
class UIBox;
class PatchWindowController;

////
/// \brief Patch window. Creates scroll view and cm_canvas; Creates menu commands, forwards them to cm_canvas
class PatchWindow : public BaseWindow {

private:
    PatchWindowController* _controller;

    QScrollArea* _scroll;

    ////

    QAction* selectAllAct;
    QAction* selectAgainAct;

    QAction* delObjectAct;
    QAction* editModeAct;

    QAction* putObjectAct;
    QAction* putMessageAct;

    //    QAction *putSymbolAct;
    QAction* putCommentAct;

    QAction* putBangAct;
    QAction* putToggleAct;
    QAction* putNumberAct;
    QAction* putSliderAct;
    QAction* putKnobAct;
    QAction* putRadioAct;
    QAction* putDisplay;

    QAction* putArray;

    QAction* putKeyboard;
    QAction* putSlider2D;
    QAction* putBPF;

    QAction* putRangeSliderAct;
    QAction* putSlidersAct;
    QAction* putIncDecAct;
    QAction* putMatrixAct;

    QAction* putScope;
    QAction* putSpectroscope;

    QAction* putScriptAct;

    QAction* putPdClass;
    QAction* putPdInstance;

    QAction* showGridAct;
    QAction* snapToGridAct;

    QAction* alignToGridAct;

    QAction* alignLeftAct;
    QAction* alignRightAct;
    QAction* alignTopAct;
    QAction* alignBottomAct;

    QAction* distHAct;
    QAction* distVAct;

    QAction* tidyUpAct;

    QAction* groupObjAct;
    QAction* ungroupObjAct;

    QAction* zoomInAct;
    QAction* zoomOutAct;

    CanvasView* _canvasView;

private slots:

public:
    PatchWindow();

    CanvasView* canvasView() { return _canvasView; };
    void setCanvasView(CanvasView* v) { _canvasView = v; }

    void setController(PatchWindowController* c);
    PatchWindowController* controller() { return _controller; } //temporary!

    void createActions();
    void createMenus();

    // ----------
    void resizeEvent(QResizeEvent* event);

    //----------------------------------------------------------------------------------------

    // todo less spaghetti

    void newObjectBox();
    //canvasView() -> controller
    void newMessageBox();
    void newFloatBox();
    void newCommentBox();
    void newBangBox();
    void newToggleBox();
    void newScriptBox();
    void newArrayBox();
    void newPdClassBox();
    void newPdInstanceBox();

    // ----------------------------------------------------

    //    void delSelected()
    //    {
    //        canvasView()->deleteSelectedObjects();
    //        canvasView()->deleteSelectedPatchcords();

    //        setWindowModified(true);
    //    }

    //    void selectAll()
    //    {
    //        // todo direct slot connection
    //        //canvasView()->selectAll();

    //        _controller->menuSelectAll();

    //        setWindowModified(true);
    //    }

    void objectMakerDone();

    void setEditMode();
    void setGridVisible();
    void setGridSnap();

    /////

    void closeEvent(QCloseEvent* event);

    ////

    void setFileName(QString fname);

    ////
    /// \brief keys: ctrl for temporary lock; esc to stop editing actions
    /// \param event
    ///
    void keyPressEvent(QKeyEvent* event);
    void keyReleaseEvent(QKeyEvent* event);

    //
    void zoomIn();
    void zoomOut();

    //public slots:
    //    std::pair<QMainWindow*, qtpd::UIObject*> s_createSubpatchWindow()
    //    {
    //        //t_canvas* newPdCanvas = cmp_newpatch();

    //        PatchWindow* subPatch = new PatchWindow(); //PatchWindow::newSubpatch((t_canvas*)newPdCanvas);
    //        CanvasView* newCanvas = subPatch->canvasView();

    //        return std::pair<QMainWindow*, qtpd::UIObject*>(subPatch, (qtpd::UIObject*)newCanvas);
    //    };
};
}

#endif // CM_PATCHWINDOW_H
