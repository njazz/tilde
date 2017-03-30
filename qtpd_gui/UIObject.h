// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_OBJECT_H
#define CM_OBJECT_H

#include "Port.h"
#include "SizeBox.h"
#include "UIWidget.h"

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

typedef std::vector<Port*> portVec;

////
/// \brief base class for all object boxes - standard and special
///
class UIObject : public UIWidget {
    //broken, check that
    Q_OBJECT

private:
    //temporary?
    void* _pdObject;

    portVec* _inlets;
    portVec* _outlets;

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
    QString _helpName;

    //
    QString fullHelpName()
    {
        if (helpName() == "")
            return "";

        QString ret = "";

        return ret;
    }

public:
    //cm_object();
    explicit UIObject(UIWidget* parent = 0);

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

    //void contextMenuEvent(QContextMenuEvent* event);

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

    //void contextMenuEvent(QContextMenuEvent* event);
    //virtual void customContextMenuRequested(const QPoint &pos);

    void setHelpName(QString name)
    {
        _helpName = name;

    }

    QString helpName() {

        QString name;

        QStringList paths = Preferences::inst().paths();

        if (paths.size() == 0) {
            _helpName = "";
            cmp_post("Help: bad search paths");
            return "";
        }

        for (int i = 0; i < paths.size(); i++) {

            QString path = paths.at(i);
            // todo windows
            QString fullname = path + "/" + name;
            QFileInfo check_file(fullname);

            qDebug() << fullname;

            if (check_file.exists() && check_file.isFile()) {

                //_helpName = fullname;
                qDebug() << "FOUND: " << fullname;
                return "";
            }

            //todo check if it exists in several folders
        }

        QString p1 = "Help: not found: " + name;
        cmp_post(p1.toStdString().c_str());

        return name;

    }

    void setObjectSizeMode(t_objectSize os) { _objectSizeMode = os; }

private slots:
    void openPropertiesWindow()
    {
        PropertiesWindow* pw = new PropertiesWindow(properties());
        pw->show();
    }

    void openHelpWindow()
    {
        QString helpName_ = helpName();
        if (helpName_ != "") {
            OpenFileProxy::openAbstraction(helpName_);
        }
    }

signals:
    void editObject(void* box);

    void callRepaint(); //needed for proper threading

public slots:
    void resizeBox(int dx, int dy);

    void s_repaint() //needed for proper threading
    {
        repaint();
    }

    ////
    /// \brief this slot is called by property editor or anything that changes property
    /// \details fix this later with better property system
    /// \param pname
    ///
    void propertyChanged(QString pname)
    {
        // spaghetti again

        if (pname == "Size")
            setFixedSize(properties()->get("Size")->asQSize());

        //just visuals
        if (pname == "FontSize")
            repaint();
        if (pname == "BorderColor")
            repaint();
    }
};
}

#endif // CM_OBJECT_H
