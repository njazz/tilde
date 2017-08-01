// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_OBJECTITEM_H
#define CM_OBJECTITEM_H

#include "UIItem.h"

namespace ceammc {
class AtomList;
}

using namespace ceammc;

class QAction;
class QMenu;

class ServerObject;

namespace tilde {

class CanvasView;
class CanvasData;
class ObjectObserver;
class PropertyList;
class Port;
class SizeBox;

typedef std::vector<Port*> portItemVec;

class UIObject;
class PatchWindowController;
class UIObjectData;

class UIObject : public UIItem { ///>base class for all object boxes - standard (UIBox) and special

    Q_OBJECT

private:
    portItemVec* _inlets;
    portItemVec* _outlets;

    UIObjectData* _objectData;

    SizeBox* _sizeBox;

    QMenu* _popupMenu; //TODO pointer

    QAction* _pmProperties;
    QAction* _pmHelp;
    QAction* _pmOpen; //TODO move to UIBox

    CanvasView* _parentCanvasView;
    PatchWindowController* _parentController;

    ServerObject* _serverObject;

    ObjectObserver* _observer;

protected:
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent*);
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*);

public:
    explicit UIObject(UIItem* parent = 0);

    // ----------------------

    CanvasView* parentCanvasView();
    virtual void setParentCanvasView(CanvasView* v);

    PatchWindowController* parentController();
    void setParentController(PatchWindowController* p);

    void setObjectData(UIObjectData* m);
    UIObjectData* objectData();

    virtual ServerObject* serverObject();
    virtual void setServerObject(ServerObject* o);

    ObjectObserver* observer();

    virtual void initProperties(); ///>init properties for the class - called from constructor
    PropertyList* properties(); ///> UIObject properties

    // ----------------------

    virtual void paint(QPainter*, const QStyleOptionGraphicsItem*, QWidget*){}; ///> template

    // ----------------------

    virtual void fromQString(QString objData); ///> sets object text data
    QString toQString(); ///> gets object text data /usually overriden by ui objects/

    QString objectClass();

    // ----------------------

    //UIObjectData _objectDataModel;

    void createPopupMenu(); ///> createContextMenu
    void showPopupMenu(QPoint pos);

    void doSetSize(QSize size);
    virtual void resizeEvent(); ///> custom resize event
    virtual void autoResize(); ///> call this after setting object data

    virtual std::string asPdFileString(); ///>returns object's text for client-based file saving

    void setEditModeRef(t_editMode* canvasEditMode); ////>sets pointer to edit mode flag value in parent canvas

    SizeBox* sizeBox();
    void hideSizeBox();

    virtual void sync();

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

    void removeXLets();

    // -----------------------------------------

    virtual void objectPressEvent(QGraphicsSceneMouseEvent*);
    virtual void objectMoveEvent(QGraphicsSceneMouseEvent*);
    virtual void objectReleaseEvent(QGraphicsSceneMouseEvent*);

    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event);
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event);
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event);

    // -----------------------------------------

    virtual void updateUI(AtomList*){};

private slots:
    void openPropertiesWindow();
    void openHelpWindow();

    void propertySize(); ///> called when size property is changed
    virtual void propertyFontSize();

    void propertyPosition();
    void propertyReceiveSymbol(); ///> binds object to symbol

    void propertyUpdate(); ///> basic update - calls update() probably remove later

signals:
    void signalEditObject(void* box);

    //// \brief this is needed for proper threading
    /// \details pd calls UIUpdate(...) -> it emits 's_repaint()' that is connected to 'callRepaint()'
    void signalCallRepaint();

    void signalSendMessage(ServerObject* obj, QString msg);

    void signalOpenPropertiesWindow();
    void signalOpenHelpWindow();

    void signalObjectHoverEnter();
    void signalObjectHoverLeave();

public slots:
    void slotResizeDeselectedBox(int dx, int dy); ///>deprecated
    void slotRepaint(); ///>needed for proper threading

    ////
    /// \brief this slot is called by property editor or anything that changes property
    /// \details fix this later with better property system
    /// \param pname
    //  void propertyChanged(QString pname);
};
}

#endif // CM_OBJECT_H
