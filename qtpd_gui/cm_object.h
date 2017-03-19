// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_OBJECT_H
#define CM_OBJECT_H

#include "cm_port.h"
#include "cm_sizebox.h"
#include "cm_widget.h"

#include "cm_preferences.h"

#include "cm_pdlink.h"

#include <QMainWindow>
#include <QObject>
#include <QMenu>

namespace qtpd {

typedef std::vector<Port*> portVec;

////
/// \brief base class for all object boxes - standard and special
///
class UIObject : public UIWidget {
    //broken, check that
    Q_OBJECT

private:
    //temporary?
    void* pdObject_;

    portVec* inlets_;
    portVec* outlets_;

    std::string pdObjectName_; //not to be confused with QObject objectName
    std::string objectData_; //name and arguments etc

    bool errorBox_;

    t_objectSize objectSizeMode_;

    int minimumBoxWidth_;
    int minimumBoxHeight_;

    SizeBox* sizeBox;

    PropertyList properties_;

    QMainWindow* SubpatchWindow_;

    QMenu popupMenu_;

public:
    //cm_object();
    explicit UIObject(UIWidget* parent = 0);

    //cm_object(std::string objectData, cm_widget *parent=0) {};
    // static cm_object* createObject(std::string objectData, cm_widget *parent=0) {};

    ////
    /// \brief init properties for the class - called from constructor
    ///
    virtual void initProperties();

    PropertyList* properties();

    ////
    /// \brief sets inlet position (cm_port)
    /// \details this is reserved for more versatile UI
    /// \param idx
    /// \return
    ///
    ///

    void setInletsPos();

    ////
    /// \brief sets outlet position (cm_port)
    /// \details this is reserved for more versatile UI
    /// \param idx
    /// \return
    ///
    ///
    void setOutletsPos();

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
    virtual void* pdObject() ;

    ////
    /// \brief sets pointer to pd object
    /// \details overriden by ui objects to be able to connect to pd objects
    /// \param obj
    ///
    virtual void setPdObject(void* obj) ;

    ////
    /// \brief returns true if object doesn't exist
    /// \details
    /// \return
    ///
    bool errorBox() ;

    ////
    /// \brief sets object box error flag
    /// \param val
    ///
    void setErrorBox(bool val) ;

    ////
    /// \brief returns object's text for client-based file saving
    /// \return
    ///
    virtual std::string asPdFileString();

    void setPdObjectName(std::string name);

    ////
    /// \brief temporary - remove later
    /// \details nonzero pointer for different drawing
    ///
    QMainWindow* subpatchWindow() ;
    void setSubpatchWindow(QMainWindow* cwindow) ;

    ////
    /// \brief sets pointer to edit mode flag value in parent canvas
    /// \param canvasEditMode
    ///
    void setEditModeRef(t_editMode* canvasEditMode);

    //////////

    void resizeEvent(QResizeEvent* event);

    void enterEvent(QEvent*);

    void leaveEvent(QEvent*);

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

    void contextMenuEvent();



signals:
    void editObject(void* box);

    void callRepaint();     //needed for proper threading

public slots:
    void resizeBox(int dx);

    void s_repaint()        //needed for proper threading
    {
        this->repaint();
    }
};
}

#endif // CM_OBJECT_H
