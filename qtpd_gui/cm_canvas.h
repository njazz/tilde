// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_CANVAS_H
#define CM_CANVAS_H

#include <QWidget>
#include <QtGui>
#include <QtWidgets>

#include "cm_patchcord.h"

#include "cm_objectmaker.h"

#include "cm_objectloader.h"

//todo - move to window?
#include "cm_clipboard.h"



namespace qtpd {

////
/// \brief structure for selection rectangle
typedef struct
{
    bool active;
    QPoint start;
    QPoint end;

} tRectPlus;

////
/// \brief draw canvas as patch, box or pd "G-O-P" / patch in patch
typedef enum { ds_Canvas,
    ds_Box,
    ds_CanvasInBox } canvasDrawStyle;

////
/// \brief 't_canvas' counterpart. creates objects
///
class Canvas : public UIObject {
private:
    //move here. these are global for all draw types (Canvas, Box)
    canvasDataPlus _data;
    canvasData _selectionData;

    //
    // local !Box
    tRectPlus _selFrame;
    tRectPlus _newLine;

    // local, !Box
    UIObject* _connectionStartObject;
    UIObject* _connectionStartOutlet;
    //
    UIObject* _replaceObject;

    // local, !Box
    QPoint _newObjectPos;
    QPoint _dragPrevPos;

    // TODO use widget's standard and create in constructor
    // local, !Box
    t_editMode _editMode;

    // local, !Box
    // TODO separate grid layer
    bool _gridEnabled;
    bool _gridSnap;
    int _gridStep;

    QSize _windowSize;
    //
    canvasDrawStyle _drawStyle;
    // if the canvas is the box, it can have this. Check this later
    // !Canvas
    //QMainWindow *SubcanvasWindow_;
    UIObject* _Subcanvas;

    // !Canvas
    //    QLineEdit* editor_; //remove that

    ObjectMaker* _objectMaker;

    Q_OBJECT

public:
    // TODO encapsulate
    QWidget* dragObject;
    QString fileName;

    explicit Canvas(UIObject* parent = 0);

    ////
    /// \brief creates new view of existing canvas. check this
    /// \param srcCanvas
    /// \param parentCanvas
    /// \param dStyle draw style - Canvas, Box, CanvasInBox
    /// \return
    ///
    static Canvas* newView(Canvas* srcCanvas, UIObject* parentCanvas, canvasDrawStyle dStyle);

    void addInlet();

    void addOutlet();

    ////
    /// \brief set draw style
    /// \param ds
    ///
    void setDrawStyle(canvasDrawStyle ds);

    ////
    /// \brief get draw style
    /// \param ds
    ///
    canvasDrawStyle drawStyle();

    ////
    /// \brief main paint routine
    ///
    void paintEvent(QPaintEvent*);

    ////
    /// \brief draws canvas contents
    ///
    void drawCanvas();

    ////
    /// \brief draw object box for the canvas
    ///
    void drawObjectBox();

    ////
    /// \brief paint patchcords
    ///
    void paintPatchcords();

    ////
    /// \brief changes patchcords color when mouse is over
    /// \param pos
    /// \return true if mouse is over any of the patchcords
    ///
    bool hoverPatchcords(QPoint pos);

    ////
    /// \brief resets all patchcords hover color flag
    ///
    void hoverPatchcordsOff();

    ////
    /// \brief marks clicked patchcord
    /// \param pos
    /// \return true if there was a patchcord
    ///
    bool clickPatchcords(QPoint pos);

    ////
    /// \brief route mouse move handling for different vis types
    /// \param ev
    ///
    void mouseMoveEvent(QMouseEvent* ev);

    ////
    /// \brief route mouse press handling for different vis types
    /// \param ev
    ///
    void mousePressEvent(QMouseEvent* ev);

    ////
    /// \brief route mouse release handling for different vis types
    /// \param ev
    ///
    void mouseReleaseEvent(QMouseEvent* ev);

    /////////

    ////
    /// \brief mouse move handling
    /// \param ev
    ///
    void mouseMoveEventForCanvas(QMouseEvent* ev);

    ////
    /// \brief mouse down handling for Canvas
    /// \param ev
    ///
    void mousePressEventForCanvas(QMouseEvent* ev);

    ////
    /// \brief mouse up handling
    ///
    void mouseReleaseEventForCanvas(QMouseEvent*);

    /////////

    ////
    /// \brief mouse down ForBox
    /// \param ev
    ///
    void mousePressEventForBox(QMouseEvent* ev);

    ////
    /// \brief mouse up ForBox
    ///
    void mouseReleaseEventForBox(QMouseEvent*);

    ////
    /// \brief mouse move ForBox
    /// \param event
    ///
    void mouseMoveEventForBox(QMouseEvent* event);

    /////////

    ////
    /// \brief deselect all object boxes
    ///
    void deselectBoxes();

    ////
    /// \brief restore "pd" object when loading from file
    /// \details this is probably useless -
    /// \param pdObjectData
    /// \param pos
    /// \param canvas
    /// \return
    ///

    UIBox* restoreSubcanvas(std::string pdObjectName, QPoint pos, t_canvas* canvas);

    ////
    /// \brief prototype for universal object 'constructor'
    /// \param message
    /// \param pos
    /// \return
    ///
    UIObject* createObject(QString objectData1, QPoint pos);

    ////
    /// \brief TODO check. creates object box for subcanvas
    /// \param canvas
    /// \param objectData
    /// \param pos
    /// \return
    ///
    UIObject* createBoxForCanvas(Canvas* newCanvas, std::string objectData, QPoint pos);

    ////
    /// \brief creates patchcord
    /// \param obj1
    /// \param outlet
    /// \param obj2
    /// \param inlet
    ///
    void patchcord(UIObject* obj1, int outlet, UIObject* obj2, int inlet);

    ////
    /// \brief creates patchcord, uses pointers to inlets/outlets. TODO temporary?
    /// \param obj1
    /// \param outport
    /// \param obj2
    /// \param inport
    ///
    void patchcord(UIObject* obj1, UIWidget* outport, UIObject* obj2, UIWidget* inport);

    //    ////unused?
    //    void deletePatchcord(Patchcord* pc)
    //    {
    //        // no repaint

    //        //cleanup !!!
    //        patchcordVec::iterator it = std::find(data_.patchcords.begin(), data_.patchcords.end(), pc);

    //        if (it != data_.patchcords.end()) { data_.patchcords.erase(it); }

    //    }

    ////
    /// \brief delete all patchcords for object
    /// \param obj
    ///
    void deletePatchcordsFor(UIWidget* obj);

    ////
    /// \brief delete single box
    ///
    void deleteBox(UIObject* box);

    ////
    /// \brief delete all selected object boxes
    ///
    void delBoxes();

    ////
    /// \brief delete all selected patchcords
    ///
    void delSelectedPatchcords();

    ////
    /// \brief change edit mode flag
    /// \param mode
    ///

    void setEditMode(t_editMode mode);

    ////
    /// \brief get edit mode flag
    /// \return
    ///
    t_editMode getEditMode();

    ////
    /// \brief returns object by index - this is needed by parser
    /// \param idx
    /// \return cm_widget pointer
    ///
    UIObject* getObjectByIndex(int idx);

    ////
    /// \brief set object value - mostly for canvas as box
    /// \param objData
    ///
    void setObjectData(std::string objData);

    ////
    /// \brief set the show/hide grid flag
    /// \param val
    ///
    void setGridEnabled(bool val);

    ////
    /// \brief align to grid flag
    /// \param val
    ///
    void setGridSnap(bool val);

    ////
    /// \brief returns vector of all object boxes - needed by filesaver
    /// \return
    ///
    objectVec objectBoxes();

    ////
    /// \brief returns vector of all patchcords - needed by filesaver
    /// \return
    ///
    patchcordVec patchcords();

    ////
    /// \brief returns vector of selected object boxes
    /// \return
    ///
    objectVec selectedObjectBoxes();

    ////
    /// \brief returns vector of selected patchcords
    /// \return
    ///
    patchcordVec selectedPatchcords();

    ////
    /// \brief returns patchcords that are connected to specific object
    /// \param obj
    /// \return
    ///
    patchcordVec patchcordsForObject(UIObject* obj);

    //    //
    //    / \brief converts object pointers to their numbers in canvas and returns pd string for filesaver
    //    / \param patchcord
    //    / \return
    //    /

    ////
    /// \brief find object index in list
    /// \details this may be different from object index inside pd canvas
    /// \param obj
    /// \return
    ///
    int findObjectIndex(UIObject* obj);

    ////
    /// \brief sets pointer to canvas object in subpatch
    /// \details todo: check/remove that: we have subpatchwindow too
    /// \param obj
    ///
    void setSubcanvas(UIObject* obj);
    //UIObject* subcanvas(){return Subcanvas_;}

    //lol
    //QStringList canvasAsPdStrings();

    ////
    /// \brief this returns "restore ..." for canvas as box or calls filesaver for canvas
    /// \return
    ///
    virtual std::string asPdFileString();

    ///////
    ///
    /////
    /// \brief returns patchcord as pd string
    /// \details move this later
    /// \param patchcord
    /// \return
    ///
    std::string patchcordAsPdFileString(Patchcord* pcord);

    ////
    /// \brief converts UI patchcord object with 4 pointers to 4 numbers of objects in canvas
    /// \details this is mostly for saving file
    /// \param pcord
    /// \return
    ///
    structPatchcordNumbers patchcordAsNumbers(Patchcord* pcord);

    ////
    /// \brief selects single box. mostly used by replace object routine in objectmaker
    /// \param obj
    ///
    void selectObject(UIObject* obj);

    ////
    /// \brief select all boxes
    ///
    void selectAll();

    ////
    /// \brief change size to fit all objects
    ///
    void resizeToObjects();

    ////
    /// \brief returns canvas data for saving
    /// \return
    ///
    QStringList canvasAsPdStrings();

public slots:

    void s_InMousePressed(UIWidget* obj, QMouseEvent* ev);
    void s_InMouseReleased(UIWidget*, QMouseEvent*);
    void s_OutMousePressed(UIWidget* obj, QMouseEvent*);
    void s_OutMouseReleased(UIWidget*, QMouseEvent*);

    ////
    /// \brief slot called by box when it is selected
    /// \param box
    ///
    void s_SelectBox(UIWidget* box);

    ////
    /// \brief TODO check. slot called by box when it starts moving
    /// \param box
    /// \param event
    ///
    void s_MoveBox(UIWidget* box, QMouseEvent* event);

    //    void portMouseReleased();
    //    void portMouseEntered();
    //    void portMouseLeaved();

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
    /// \brief sets 'replaceobject' pointer
    /// \param obj
    ///
    void setReplaceObject(UIObject* obj);

    ////
    /// \brief gets replaceObject
    /// \return
    ///
    UIObject* replaceObject();

    ////
    /// \brief shows object maker for 'new object' menu command
    ///
    void showNewObjectMaker();

    ////
    /// \brief minimumCanvasSize
    /// \return
    ///
    QSize minimumCanvasSize();

    void setWindowSize(QSize wsize);

private:
private slots:

    ////
    /// \brief slot in Box-style canvas for handling new ins/outs
    ///
    void portCountUpdated();

    ////
    /// \brief creates objectmaker atop existiong object box
    /// \details after typing the text in the objectmaker with nonzero 'replaceobject' the old object is deleted, the new object is created and old connections are restored
    /// \param obj
    ///
    void objectStartsEdit(void* obj);

signals:
    std::pair<QMainWindow*, qtpd::UIObject*> createSubpatchWindow();
    void updatePortCount();
};
}

#endif // CM_CANVAS_H
