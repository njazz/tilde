// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIObjectItem.h"

#include "Canvas.h"

namespace qtpd {

UIObjectItem::UIObjectItem(UIItem* parent)
    : UIItem(parent)
{
    _errorBox = false;

    setParent(parent);

    setPdObject(0);

    _inlets = new portItemVec;
    _outlets = new portItemVec;

    _sizeBox = new SizeBox(this);
    _sizeBox->hide();

//    setAttribute(Qt::WA_Hover, true);

    connect(_sizeBox, &SizeBox::resizeBoxEvent, this, &UIObjectItem::resizeBox);

    // repaint, handling for threads
    connect(this, &UIObjectItem::callRepaint, this, &UIObjectItem::s_repaint);

    initProperties();

    createContextMenu();

    //this is default
    _objectSizeMode = os_FixedHeight;


}

//---------------------------------------

void UIObjectItem::resizeBox(int dx, int dy)
{
    if (_objectSizeMode != os_Fixed)
        setWidth(boundingRect().width() + dx);
    if (_objectSizeMode == os_Free)
        setHeight(boundingRect().height() + dy);
};

void UIObjectItem::initProperties()
{
    connect(properties(), &PropertyList::propertyChangedSignal, this, &UIObjectItem::propertyChanged);

    properties()->create("Size", "Box", "0.1", boundingRect().size());
    properties()->create("Position", "Box", "0.1", pos());
    properties()->create("FontSize", "Box", "0.1", 11.);

    properties()->create("PresetName", "Preset", "0.1", gensym(""));
    properties()->create("SendSymbol", "Preset", "0.1", gensym(""));
    properties()->create("ReceiveSymbol", "Preset", "0.1", gensym(""));

    properties()->create("BorderColor", "Color", "0.1", QColor(192, 192, 192, 255));
}

PropertyList* UIObjectItem::properties()
{
    return &_properties;
}

void UIObjectItem::createContextMenu()
{
//    setContextMenuPolicy(Qt::NoContextMenu);

    pmProperties = new QAction(tr("Properties"), this);
    pmProperties->setShortcut(tr("Ctrl+Shift+P"));
    connect(pmProperties, &QAction::triggered, this, &UIObjectItem::openPropertiesWindow);

    pmHelp = new QAction(tr("Help"), this);
    pmHelp->setShortcut(tr("Ctrl+Shift+H"));
    connect(pmHelp, &QAction::triggered, this, &UIObjectItem::openHelpWindow);

    pmOpen = new QAction(tr("Open"), this);
    pmOpen->setShortcut(tr("Ctrl+R"));
    pmOpen->setEnabled(false);
    //connect(pmProperties, &QAction::triggered, this, &UIObjectItem::pmProperties);

    //------------

    _popupMenu.addAction(pmProperties);
    _popupMenu.addAction(pmHelp);
    _popupMenu.addSeparator();
    _popupMenu.addAction(pmOpen);
}

//void UIObjectItem::contextMenuEvent(QContextMenuEvent *event) //customContextMenuRequested(const QPoint &pos)
void UIObjectItem::showPopupMenu(QPoint pos)
{

    _popupMenu.move(pos);
    _popupMenu.show();
}

void UIObjectItem::setInletsPos()
{
    float w = boundingRect().width() - 10;
    //w = (w < 40) ? 40 : w;

    float s = (_inlets->size() < 2) ? _inlets->size() : (_inlets->size() - 1);

    for (int i = 0; i < (int)_inlets->size(); i++) {
        float x = (w) / s * (float)i;
        float y = 0;

        _inlets->at(i)->move(x, y);
        //if (_inlets->at(i)->scene())
        //_inlets->at(i)->viewport()->update();
    }
}

void UIObjectItem::setOutletsPos()
{
    float w = boundingRect().width() - 10;
    //w = (w < 40) ? 40 : w;

    float s = (_outlets->size() < 2) ? _outlets->size() : (_outlets->size() - 1);

    for (int i = 0; i < (int)_outlets->size(); i++) {
        float x = (w) / s * (float)i;
        float y = boundingRect().height() - 3;

        _outlets->at(i)->move(x, y);
        //if (_outlets->at(i)->scene())
        //_outlets->at(i)->viewport()->update();
    }
}

void UIObjectItem::addInlet()
{
    int _portClass_;

    if (_pdObject) {
        _portClass_ = cmp_get_inlet_type((t_object*)_pdObject, _inlets->size());
    } else
        _portClass_ = 0;

    addInlet(_portClass_);
}

void UIObjectItem::addInlet(int _portClass_)
{
    Port* new_in = new Port(this);
    new_in->setPortType (portInlet);
    new_in->setPortIndex (_inlets->size());
    new_in->setPortClass (_portClass_);
    new_in->setEditModeRef(this->getEditModeRef());

    _inlets->push_back(new_in);

    connect(new_in, &Port::mousePressed, static_cast<Canvas*>(_canvas), &Canvas::s_InMousePressed);
    connect(new_in, &Port::mouseReleased, static_cast<Canvas*>(_canvas), &Canvas::s_InMouseReleased);

    new_in->show();

    setInletsPos();
}

void UIObjectItem::addOutlet()
{
    int _portClass_;

    if (_pdObject) {
        _portClass_ = cmp_get_outlet_type((t_object*)_pdObject, _outlets->size());
    } else
        _portClass_ = 0;

    addOutlet(_portClass_);
}

void UIObjectItem::addOutlet(int _portClass_)
{
    Port* new_out = new Port(this);
    new_out->setPortType (portOutlet);
    new_out->setPortIndex (_outlets->size());
    new_out->setPortClass (_portClass_);
    new_out->setEditModeRef(this->getEditModeRef());

    _outlets->push_back(new_out);

    connect(new_out, &Port::mousePressed, static_cast<Canvas*>(_canvas), &Canvas::s_OutMousePressed);
    connect(new_out, &Port::mouseReleased, static_cast<Canvas*>(_canvas), &Canvas::s_OutMouseReleased);

    new_out->show();

    setOutletsPos();
}

Port *UIObjectItem::inletAt(int idx)
{
    if (idx < ((int)_inlets->size()))
        return _inlets->at(idx);
    else
        return 0;
}

Port* UIObjectItem::outletAt(int idx)
{
    if (idx < ((int)_outlets->size()))
        return _outlets->at(idx);
    else
        return 0;
}

int UIObjectItem::pdInletType(int idx)
{
    if ((t_object*)_pdObject)
        return cmp_get_inlet_type((t_object*)_pdObject, idx);
    else
        return 0;
}

int UIObjectItem::inletCount()
{
    return _inlets->size();
}

int UIObjectItem::pdOutletType(int idx)
{
    if ((t_object*)_pdObject)
        return cmp_get_outlet_type((t_object*)_pdObject, idx);
    else
        return 0;
}

int UIObjectItem::outletCount()
{
    return _outlets->size();
}

////////

void UIObjectItem::setObjectData(std::string objData)
{
    _objectData = objData;
}

void UIObjectItem::autoResize()
{
    QFont myFont(PREF_QSTRING("Font"), 11);
    QFontMetrics fm(myFont);

    setWidth((int)fm.width(QString(_objectData.c_str())) + 5);
    if (boundingRect().width() < minimumBoxWidth())
        setWidth(minimumBoxWidth());
}

std::string UIObjectItem::objectData()
{
    return _objectData;
}

void* UIObjectItem::pdObject() { return _pdObject; }

void UIObjectItem::setPdObject(void* obj) { _pdObject = obj; }

bool UIObjectItem::errorBox() { return _errorBox; }

void UIObjectItem::setErrorBox(bool val) { _errorBox = val; }

std::string UIObjectItem::asPdFileString()
{
    std::string ret;

    ret = "#X obj ";
    ret += std::to_string(x()) + " " + std::to_string(y()) + " ";

    //ret += pdObjectName_ + " " ;//

    ret += ((_objectData == "") ? ((std::string) "") : (_objectData + " ")) + _properties.asPdFileString();

    return ret;
}

//void UIObjectItem::setPdObjectName(std::string name)
//{
//    pdObjectName_ = name;
//}

QMainWindow* UIObjectItem::subpatchWindow()
{
    return _SubpatchWindow;
}

void UIObjectItem::setSubpatchWindow(QMainWindow* cwindow)
{
    _SubpatchWindow = cwindow;
}

void UIObjectItem::setEditModeRef(t_editMode* canvasEditMode)
{
    UIItem::setEditModeRef(canvasEditMode);

    // todo
    for (int i = 0; i < _inlets->size(); i++) {
        inletAt(i)->setEditModeRef(canvasEditMode);
    }

    for (int i = 0; i < _outlets->size(); i++) {
        outletAt(i)->setEditModeRef(canvasEditMode);
    }
}

//----------------------------------------

void UIObjectItem::resizeEvent(QResizeEvent* event)
{

    _sizeBox->move(boundingRect().width() - 7, boundingRect().height() - 7);

    //todo fixed width
    if (boundingRect().width() < minimumBoxWidth())
        setWidth(minimumBoxWidth());
    if (boundingRect().height() < minimumBoxHeight())
        setHeight(minimumBoxHeight());

    setInletsPos();
    setOutletsPos();

    properties()->set("Size", boundingRect().size());
}

void UIObjectItem::hoverEnterEvent(QEvent*)
{
    if (getEditMode() == em_Unlocked)
        _sizeBox->show();
}

void UIObjectItem::hoverLeaveEvent(QEvent*)
{
    if (getEditMode() == em_Unlocked)
        _sizeBox->hide();
};

//---------------------------------

////
/// \brief set secondary 'minimum width' value - used for object box resize
/// \param w
///
void UIObjectItem::setMinimumBoxWidth(int w)
{
    _minimumBoxWidth = w;
}

////
/// \brief set secondary 'minimum height' value - used for object box resize
/// \param w
///
void UIObjectItem::setMinimumBoxHeight(int h)
{
    _minimumBoxHeight = h;
}

////
/// \brief get secondary 'minimum width' value - used for object box resize
/// \param w
///
int UIObjectItem::minimumBoxWidth()
{
    return _minimumBoxWidth;
}

////
/// \brief get secondary 'minimum height' value - used for object box resize
/// \param w
///
int UIObjectItem::minimumBoxHeight()
{
    return _minimumBoxHeight;
}

// ??
void UIObjectItem::hide()
{

    if (subpatchWindow()) {
        qDebug("hide subcanvas window");

        subpatchWindow()->hide();
        delete _SubpatchWindow;
    }
}

void UIObjectItem::hideSizeBox()
{
    _sizeBox->hide();
}


void UIObjectItem::setHelpName(QString name)
{
    _fullHelpName = name;

}

QString UIObjectItem::fullHelpName() {

    QString name = _fullHelpName;

    QStringList paths = Preferences::inst().paths();

    if (paths.size() == 0) {
        _fullHelpName = "";
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

            //_fullHelpName = fullname;
            qDebug() << "FOUND: " << fullname;
            return fullname;
        }

        //todo check if it exists in several folders
    }

    QString p1 = "Help: not found: " + name;
    cmp_post(p1.toStdString().c_str());

    return name;

}


// -------

void UIObjectItem::openPropertiesWindow()
{
    PropertiesWindow* pw = new PropertiesWindow(properties());
    pw->show();
}

void UIObjectItem::openHelpWindow()
{
    QString fullHelpName_ = fullHelpName();
    if (fullHelpName_ != "") {
        OpenFileProxy::openAbstraction(fullHelpName_);
    }
}





void UIObjectItem::s_repaint() //needed for proper threading
{
     //viewport()->update();
}


void UIObjectItem::propertyChanged(QString pname)
{
    // spaghetti again

    if (pname == "Size")
        setSize(properties()->get("Size")->asQSize());

    //just visuals
//    if (pname == "FontSize")
//         viewport()->update();
//    if (pname == "BorderColor")
//         viewport()->update();
}


}
