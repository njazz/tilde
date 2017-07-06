// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_OBJECTITEM_H
#define CM_OBJECTITEM_H

#include "UIItem.h"

#include "UIObjectData.h"

#include <pdServer.hpp>

// TODO
#include "ceammc_atomlist.h"
#include <QMenu>

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

    UIObjectData* _objectData;

    SizeBox* _sizeBox;

    QMenu _popupMenu; //TODO pointer

    QAction* _pmProperties;
    QAction* _pmHelp;
    QAction* _pmOpen; //TODO move to UIBox

    CanvasView* _parentCanvasView;
    PatchWindowController* _parentController;

    ServerObject* _serverObject;

    ObjectObserver* _observer;

    //bool _disableObjectMaker;

protected:
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent*);
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*);

public:
    explicit UIObject(UIItem* parent = 0);

//    UIObject(const UIObject& source);
//    UIObject& operator=(const UIObject& source);

    // ----------------------

    CanvasView* parentCanvasView();
    void setParentCanvasView(CanvasView* v);

    PatchWindowController* parentController();
    void setParentController(PatchWindowController* p);

    void setObjectData(UIObjectData* m);
    UIObjectData* objectData();

    virtual ServerObject* serverObject();
    virtual void setServerObject(ServerObject* o);

    ObjectObserver* observer();

    // ----------------------

    virtual void fromQString(QString objData); ///> sets object text data
    QString toQString(); ///> gets object text data /usually overriden by ui objects/

    // ----------------------

    //TODO
    UIObjectData _objectDataModel;

    virtual void paint(QPainter*, const QStyleOptionGraphicsItem*, QWidget*){}; ///> template

    virtual void initProperties(); ///>init properties for the class - called from constructor
    PropertyList* properties(); ///> UIObject properties

    void createPopupMenu(); ///> createContextMenu
    void showPopupMenu(QPoint pos);

    virtual void autoResize(); ///> call this after setting object data

    void doSetSize(QSize size);
    virtual void resizeEvent(); ///> custom resize event

    virtual std::string asPdFileString(); ///>returns object's text for client-based file saving

    void setEditModeRef(t_editMode* canvasEditMode); ////>sets pointer to edit mode flag value in parent canvas

    SizeBox* sizeBox();
    void hideSizeBox();

    void removeXLets();
    virtual void sync();

    //virtual UIObject* clone() const; ///> to be used when canvases are copied (for G-O-P feature)

    bool errorBox(); ///> returns true if object doesn't exist
    void setErrorBox(bool val); ///> sets object box error flag

    void setHelpName(QString name); ///> set short name for help patch (without path)

    QString fullHelpName(); ///> returns help patch name with path if the file is found

    // -----------------------------------------------------------------

    virtual void setInletsPos(); ///> sets inlet position. could be overriden for custom inlet positions
    virtual void setOutletsPos(); ///> sets inlet position. could be overriden for custom inlet positions

    virtual void addInlet(); ///> adds single inlet. now no need to be overriden
    virtual void addInlet(int _portClass_);

    virtual void addOutlet(); ///> adds single outlet.
    virtual void addOutlet(int _portClass_);

    Port* inletAt(int idx); ///> gets inlet (UIPort) at specified index
    Port* outletAt(int idx); ///> gets outlet (UIPort) at specified index

    int inletCount();
    int outletCount();

    int pdInletClass(int idx); ///> returns 1 if signal~
    int pdOutletClass(int idx); ///> returns 1 if signal~

    // -----------------------------------------

    virtual void objectPressEvent(QGraphicsSceneMouseEvent*);
    virtual void objectMoveEvent(QGraphicsSceneMouseEvent*);
    virtual void objectReleaseEvent(QGraphicsSceneMouseEvent*);

    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event);
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event);
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event);

    // -----------------------------------------

    virtual void updateUI(AtomList){};

private slots:
    void openPropertiesWindow();
    void openHelpWindow();

    void propertySize(); ///> called when size property is changed
    void propertyFontSize();
    void propertyUpdate(); ///> basic update - calls update() probably remove later

    void propertyReceiveSymbol(); ///> binds object to symbol

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
