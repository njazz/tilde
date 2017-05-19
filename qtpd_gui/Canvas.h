// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_CANVAS_H
#define CM_CANVAS_H

#include <QWidget>
#include <QtGui>
#include <QtWidgets>

#include "Patchcord.h"

#include "ObjectMaker.h"

#include "ObjectLoader.h"

//
#include "Grid.h"
#include "NewLine.h"
#include "SelectionRect.h"

//todo - move to window?
//#include "cm_clipboard.h"
#include "CanvasData.h"

#include "Clipboard.h"

namespace qtpd {

////
/// \brief 't_canvas' counterpart - for now it's both view and 'view controller'. creates pd+gui objects
///
class Canvas : public QGraphicsView {
private:
    canvasData _canvasData;

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

    QString _filePath;

    t_editMode* _canvasEditMode;

    Grid* _grid;
    SelectionRect* _selectionRect;
    NewPatchcord* _newLine;

    t_canvas* _pdObject;
    UIObject* _dragObject;

    float _zoom;

    QString _fileName;

    Q_OBJECT

public:
    ////
    /// \group prop Properties
    /// @{
    // todo fix
    QPoint newObjectPos() { return _newObjectPos; }

    canvasData* canvasData() { return &_canvasData; }

    UIObject* dragObject() { return _dragObject; }
    void setDragObject(UIObject* object) { _dragObject = object; }

    QString fileName() { return _fileName; }
    void setFileName(QString object) { _fileName = object; }

    t_canvas* pdObject() { return _pdObject; }
    void setPdObject(t_canvas* c) { _pdObject = c; }

    void setZoom(float zoom);
    float getZoom() { return _zoom; }

    virtual t_editMode getEditMode() { return *_canvasEditMode; }
    virtual t_editMode* getEditModeRef() { return _canvasEditMode; }

    void setEditMode(t_editMode mode);
    void setGridEnabled(bool val);
    void setGridSnap(bool val);

    void setKeepPdObject(bool v) { _keepPdObject = v; }
    bool keepPdObject() { return _keepPdObject; }

    void setReadOnly(bool val)
    {
        _readOnly = val;

        if (_readOnly)
            setEditMode(em_Locked);
    }

    bool readOnly()
    {
        return _readOnly;
    }

    void setFilePath(QString filePath)
    {
        _filePath = filePath;
    }
    QString filePath() { return _filePath; };



    ////
    /// \brief minimumCanvasSize
    /// \return
    ///
    QSize minimumCanvasSize();

    void setWindowSize(QSize wsize);

    void setReplaceObject(UIObject* obj); ///>sets 'replaceobject' pointer
    UIObject* replaceObject();

    /** @}*/

    // -------------------------------------------------------

    explicit Canvas(QGraphicsView* parent = 0);

    //todo
    void addInlet();
    void addOutlet();

    // -------------------------------------------------------

    ////
    /// \group mouse Mouse
    /// @{

    void mouseMoveEvent(QMouseEvent* ev);
    void mousePressEvent(QMouseEvent* ev);
    void mouseReleaseEvent(QMouseEvent* ev);

    /** @}*/

    // -------------------------------------------------------

    ////
    /// \group createdelete Create / delete objects and patchcords
    /// @{

    ////
    /// \brief prototype for universal object 'constructor'
    /// \param message
    /// \param pos
    /// \return
    /// \deprecated move to window/controller
    ///
    UIObject* createObject(QString objectData1, QPoint pos);

    ////
    /// \brief create object box for subpatch (when loaded from file)
    /// \param patchWindow
    /// \param objectData
    /// \param pos
    /// \return
    ///
    UIObject* createBoxForPatchWindow(QMainWindow* patchWindow, QString objectData, QPoint pos);

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
    void patchcord(UIObject* obj1, UIItem* outport, UIObject* obj2, UIItem* inport);

    ////
    /// \brief delete all patchcords for object
    /// \param obj
    ///
    void deletePatchcordsFor(UIItem* obj);

    ////
    /// \brief delete single box
    ///
    void deleteObject(UIObject* box);

    ////
    /// \brief delete all selected object boxes
    ///
    void deleteSelectedObjects();

    ////
    /// \brief delete all selected patchcords
    ///
    void deleteSelectedPatchcords();

    /** @}*/

    // -------------------------------------------------------

    ////
    /// \brief returns object by index - this is needed by parser
    /// \param idx
    /// \return cm_widget pointer
    ///
    UIObject* getObjectByIndex(int idx);

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

    ////
    /// \brief find object index in list
    /// \details this may be different from object index inside pd canvas
    /// \param obj
    /// \return
    ///
    int findObjectIndex(UIObject* obj);

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
    t_patchcordAsNumbers patchcordAsNumbers(Patchcord* pcord);

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

    ////
    /// \brief this is for loading or copying canvases. not yet used in fileparser
    ///
    void canvasFromPdStrings(QStringList strings);

    void selectBox(UIItem* box);

    ////
    /// \brief slot called by box when it is selected
    /// \param box
    ///
    void s_SelectBox(UIItem* box, QGraphicsSceneMouseEvent* ev);

    ////
    /// \brief TODO check. slot called by box when it starts moving
    /// \param box
    /// \param event
    ///
    void s_MoveBox(UIItem* box, QGraphicsSceneMouseEvent* event);

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
    ///
    void showNewObjectMaker();

    void dataCut();
    void dataCopy();
    void dataDuplicate();
    void dataPaste();

    // -- NEW

    void resizeEvent(QResizeEvent*)
    {
        _grid->setSize(size());
        _grid->move(0, 0);
    }

public slots:

    void s_InMousePressed(UIItem* obj, QGraphicsSceneMouseEvent* ev);
    void s_InMouseReleased(UIItem*, QGraphicsSceneMouseEvent*);
    void s_OutMousePressed(UIItem* obj, QGraphicsSceneMouseEvent*);
    void s_OutMouseReleased(UIItem*, QGraphicsSceneMouseEvent*);

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
