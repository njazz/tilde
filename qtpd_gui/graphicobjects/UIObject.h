// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_OBJECTITEM_H
#define CM_OBJECTITEM_H

#include "Port.h"
#include "SizeBox.h"
#include "UIItem.h"

#include "Preferences.h"

#include "PdLink.h"

#include <QMainWindow>
#include <QMenu>
#include <QObject>

#include "PropertiesWindow.h"

//lazy way
//todo proper pattern
#include "OpenFileProxy.h"

namespace qtpd {

typedef std::vector<Port*> portItemVec;

////
/// \brief base class for all object boxes - standard and special
///
class UIObject : public UIItem {

    Q_OBJECT

private:
    //temporary?
    void* _pdObject;

    portItemVec* _inlets;
    portItemVec* _outlets;

    // todo replace with QString in GUI part
    std::string _objectData; //name and arguments etc

    bool _errorBox;

    t_objectSize _objectSizeMode;

    int _minimumBoxWidth;
    int _minimumBoxHeight;

    SizeBox* _sizeBox;

    PropertyList _properties;

    QMainWindow* _SubpatchWindow;

    QMenu _popupMenu;

    //
    QAction* pmProperties;
    QAction* pmHelp;
    QAction* pmOpen;

    //
    QString _fullHelpName;

    void* _canvas;

    //
    //    QString fullHelpName()
    //    {
    //        if (fullHelpName() == "")
    //            return "";

    //        QString ret = "";

    //        return ret;
    //    }

protected:
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent*);

    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*);

public:
    void setCanvas(void* canvas) { _canvas = canvas; }

    //cm_object();
    explicit UIObject(UIItem* parent = 0);

    ////
    /// \brief init properties for the class - called from constructor
    ///
    virtual void initProperties();

    PropertyList* properties();

    ////
    /// \brief createContextMenu
    ///
    void createContextMenu();

    void showPopupMenu(QPoint pos);

    SizeBox* sizeBox(){return _sizeBox;}

    //void contextMenuEvent(QContextMenuEvent* event);

    ////
    /// \brief sets inlet position (cm_port)
    /// \details this is reserved for more versatile UI
    /// \param idx
    /// \return
    ///
    ///

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
    ///

    virtual void addOutlet();

    virtual void addOutlet(int _portClass_);

    ////
    /// \brief gets inlet (cm_port) at specified index
    /// \param idx
    /// \return
    ///

    Port* inletAt(int idx);

    ////
    /// \brief gets outlet (cm_port) at specified index
    /// \param idx
    /// \return
    ///

    Port* outletAt(int idx);

    ////
    /// \brief returns 1 if signal~
    /// \param idx
    /// \return
    ///
    int pdInletType(int idx);

    ////
    /// \brief inlet count
    /// \return
    ///
    int inletCount();

    ////
    /// \brief for pd object outlet: returns 1 if signal~
    /// \param idx
    /// \return
    ///
    int pdOutletType(int idx);

    ////
    /// \brief outlet count
    /// \return
    ///
    int outletCount();

    ////////

    ////
    /// \brief sets object text data
    /// \return
    ///

    virtual void setObjectData(std::string objData);

    ////
    /// \brief call this after setting object data
    ///
    virtual void autoResize();

    ////
    /// \brief gets object text data /usually overriden by ui objects/
    /// \return
    ///
    std::string objectData();

    ////
    /// \brief returns pointer to pd object.
    /// \details gui-only objects can ovverride it with function that returns 0
    /// \return
    ///
    virtual void* pdObject();

    ////
    /// \brief sets pointer to pd object
    /// \details overriden by ui objects to be able to connect to pd objects
    /// \param obj
    ///
    virtual void setPdObject(void* obj);

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

    ////
    /// \brief returns object's text for client-based file saving
    /// \return
    ///
    virtual std::string asPdFileString();

    //void setPdObjectName(std::string name);

    ////
    /// \brief temporary - remove later
    /// \details nonzero pointer for different drawing
    ///
    QMainWindow* subpatchWindow();
    void setSubpatchWindow(QMainWindow* cwindow);

    ////
    /// \brief sets pointer to edit mode flag value in parent canvas
    /// \param canvasEditMode
    ///
    void setEditModeRef(t_editMode* canvasEditMode);

    //////////

//    void resizeEvent(QGraphicsSceneResizeEvent* event);

    // ------------------------

    ////
    /// \brief set secondary 'minimum width' value - used for object box resize
    /// \param w
    ///
    void setMinimumBoxWidth(int w);

    ////
    /// \brief set secondary 'minimum height' value - used for object box resize
    /// \param w
    ///
    void setMinimumBoxHeight(int h);

    ////
    /// \brief get secondary 'minimum width' value - used for object box resize
    /// \param w
    ///
    int minimumBoxWidth();

    ////
    /// \brief get secondary 'minimum height' value - used for object box resize
    /// \param w
    ///
    int minimumBoxHeight();

    // ??
    void hide();

    void hideSizeBox();

    ////
    /// \brief set short name for help patch (without path)
    /// \param name
    ///
    void setHelpName(QString name);

    ////
    /// \brief returns help patch name with path if the file is found
    /// \return
    ///
    QString fullHelpName();

    ////
    /// \brief set object resize mode - fixed or sizeable
    /// \param os
    ///
    void setObjectSizeMode(t_objectSize os) { _objectSizeMode = os; }

private slots:
    void openPropertiesWindow();
    void openHelpWindow();

signals:
    void editObject(void* box);
    void callRepaint(); //needed for proper threading

public slots:
    void resizeBox(int dx, int dy);
    void s_repaint(); ///>needed for proper threading

    ////
    /// \brief this slot is called by property editor or anything that changes property
    /// \details fix this later with better property system
    /// \param pname
    ///
    void propertyChanged(QString pname);
};
}

#endif // CM_OBJECT_H
