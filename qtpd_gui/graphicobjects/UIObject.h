// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_OBJECTITEM_H
#define CM_OBJECTITEM_H


#include "UIItem.h"

#include "UIObjectData.h"

#include <pdServer.hpp>

// TODO
#include <QMenu>
#include "ceammc_atomlist.h"

class QAction;
//class QMenu;

namespace qtpd {

class CanvasView;
class CanvasData;

class SizeBox;

typedef std::vector<Port*> portItemVec;

class UIObject;

class PatchWindowController;

////
/// \brief The object observer class
/// \details used for UI objects to update ui from pd(server) object
///
class ObjectObserver : public Observer {
private:
    UIObject* _object;

public:
    void setObject(UIObject* o) { _object = o; }
    virtual void update();
};

////
/// \brief base class for all object boxes - standard (UIBox) and special
///
class UIObject : public UIItem {

    Q_OBJECT

private:
    portItemVec* _inlets;
    portItemVec* _outlets;

    SizeBox* _sizeBox;

//    QMainWindow* _SubpatchWindow; // move to UIBox

    QMenu _popupMenu; //pointer

    QAction* pmProperties;
    QAction* pmHelp;
    QAction* pmOpen;

    //void* _canvas; ///> QGraphicsView

    //new 0517
    CanvasView* _parentCanvasView;
    //CanvasData* _subCanvasData;

    PatchWindowController* _parentController;

    ServerObject* _serverObject;
    //
    ObjectObserver* _observer;

protected:
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent*);
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*);

public:
    explicit UIObject(UIItem* parent = 0);

    //new 0517
    CanvasView* parentCanvasView() { return _parentCanvasView; };
    void setParentCanvasView(CanvasView* v) { _parentCanvasView = v; }

    PatchWindowController* parentController() {return _parentController;}

    void setParentController(PatchWindowController* p){_parentController = p;}

//    CanvasData* subCanvasData() { return _subCanvasData; };
//    void setSubCanvasData(CanvasData* c) { _subCanvasData = c; }

    //new 0617
    ObjectObserver* observer() { return _observer; }

    //TODO
    bool disableObjectMaker;

    //TODO
    UIObjectData _objectDataModel;

    // just a template, copy from here
    virtual void paint(QPainter*, const QStyleOptionGraphicsItem*, QWidget*){};

    virtual void initProperties(); ///>init properties for the class - called from constructor
    PropertyList* properties(); ///> UIObject properties

    void createContextMenu(); ///> createContextMenu
    void showPopupMenu(QPoint pos);

    virtual void autoResize(); ///> call this after setting object data
    //virtual void setSize(QSize size);

    void doSetSize(QSize size);
    void resizeEvent(); ///> custom resize event

    virtual std::string asPdFileString(); ///>returns object's text for client-based file saving

    void setEditModeRef(t_editMode* canvasEditMode); ////>sets pointer to edit mode flag value in parent canvas

    void hide(); // ??
    void hideSizeBox();

    SizeBox* sizeBox() { return _sizeBox; }

    ////
    /// \brief gets object text data /usually overriden by ui objects/
    /// \return
    QString objectData();

    ////
    /// \brief sets object text data
    /// \return
    virtual void setObjectData(QString objData);

    ////
    /// \brief returns pointer to pd object.
    /// \details gui-only objects can ovverride it with function that returns 0
    /// \return
    ///

    virtual ServerObject* serverObject() { return _serverObject; };
    virtual void setServerObject(ServerObject* o) { _serverObject = o; };

    virtual void sync();

    ////
    /// \brief returns true if object doesn't exist
    /// \details
    /// \return
    ///
    bool errorBox();

    ////
    /// \brief sets object box error flag
    /// \param val
    ///
    void setErrorBox(bool val);

//    ////
//    /// \brief temporary - remove later
//    /// \details nonzero pointer for different drawing
//    QMainWindow* subpatchWindow();
//    virtual void setSubpatchWindow(QMainWindow* cwindow);



    ////
    /// \brief set short name for help patch (without path)
    /// \param name
    void setHelpName(QString name);

    ////
    /// \brief returns help patch name with path if the file is found
    /// \return
    QString fullHelpName();

    // -----------------------------------------------------------------

    ////
    /// \brief sets inlet position (cm_port)
    /// \details this is reserved for more versatile UI
    /// \param idx
    /// \return
    virtual void setInletsPos();

    ////
    /// \brief sets outlet position (cm_port)
    /// \details this is reserved for more versatile UI
    /// \param idx
    /// \return
    ///
    ///
    virtual void setOutletsPos();

    ////
    /// \brief adds single inlet (cm_port)
    /// \details overriden by canvas to hide ports in canvas view
    /// \param idx
    /// \return
    ///
    ///
    virtual void addInlet();

    virtual void addInlet(int _portClass_);

    ////
    /// \brief adds single outlet (cm_port)
    /// \param idx
    /// \return
    virtual void addOutlet();

    virtual void addOutlet(int _portClass_);

    ////
    /// \brief gets inlet (cm_port) at specified index
    /// \param idx
    /// \return
    Port* inletAt(int idx);

    ////
    /// \brief gets outlet (cm_port) at specified index
    /// \param idx
    /// \return
    Port* outletAt(int idx);

    ////
    /// \brief returns 1 if signal~
    /// \param idx
    /// \return
    int pdInletClass(int idx);

    ////
    /// \brief inlet count
    /// \return
    int inletCount();

    ////
    /// \brief for pd object outlet: returns 1 if signal~
    /// \param idx
    /// \return
    int pdOutletClass(int idx);

    ////
    /// \brief outlet count
    /// \return
    int outletCount();

    // -----------------------------------------

    virtual void objectPressEvent(QGraphicsSceneMouseEvent *){}
    virtual void objectMoveEvent(QGraphicsSceneMouseEvent *){}
    virtual void objectReleaseEvent(QGraphicsSceneMouseEvent *){}


    virtual void mousePressEvent(QGraphicsSceneMouseEvent *event);
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event);
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);

    // -----------------------------------------

    virtual void updateUI(AtomList){};

private slots:
    void openPropertiesWindow();
    void openHelpWindow();

    void propertySize(); ///> called when size property is changed
    void propertyFontSize();
    void propertyUpdate(); ///> basic update - calls update() probably remove later

signals:
    void editObject(void* box);
    //// \brief this is needed for proper threading
    /// \details pd calls UIUpdate(...) -> it emits 's_repaint()' that is connected to 'callRepaint()'
    void callRepaint();

    void sendMessage(ServerObject* obj, QString msg);

public slots:
    void resizeBox(int dx, int dy);
    void s_repaint(); ///>needed for proper threading

    ////
    /// \brief this slot is called by property editor or anything that changes property
    /// \details fix this later with better property system
    /// \param pname
    void propertyChanged(QString pname);
};
}

#endif // CM_OBJECT_H
