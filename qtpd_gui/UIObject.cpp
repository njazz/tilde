// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIObject.h"

namespace qtpd {

UIObject::UIObject(UIWidget* parent)
    : UIWidget(parent)
{
    _errorBox = false;

    setPdObject(0);

    _inlets = new portVec;
    _outlets = new portVec;

    _sizeBox = new SizeBox(this);
    _sizeBox->hide();

    setAttribute(Qt::WA_Hover, true);

    connect(_sizeBox, &SizeBox::resizeBoxEvent, this, &UIObject::resizeBox);

    // repaint, handling for threads
    connect(this, &UIObject::callRepaint, this, &UIObject::s_repaint);

    initProperties();

    createContextMenu();

    //this is default
    _objectSizeMode = os_FixedHeight;


}

//---------------------------------------

void UIObject::resizeBox(int dx, int dy)
{
    if (_objectSizeMode != os_Fixed)
        setFixedWidth(width() + dx);
    if (_objectSizeMode == os_Free)
        setFixedHeight(height() + dy);
};

void UIObject::initProperties()
{
    connect(properties(), &PropertyList::propertyChangedSignal, this, &UIObject::propertyChanged);

    properties()->create("Size", "Box", "0.1", size());
    properties()->create("Position", "Box", "0.1", pos());
    properties()->create("FontSize", "Box", "0.1", 11.);

    properties()->create("PresetName", "Preset", "0.1", gensym(""));
    properties()->create("SendSymbol", "Preset", "0.1", gensym(""));
    properties()->create("ReceiveSymbol", "Preset", "0.1", gensym(""));

    properties()->create("BorderColor", "Color", "0.1", QColor(192, 192, 192, 255));
}

PropertyList* UIObject::properties()
{
    return &_properties;
}

void UIObject::createContextMenu()
{
    setContextMenuPolicy(Qt::NoContextMenu);

    pmProperties = new QAction(tr("Properties"), this);
    pmProperties->setShortcut(tr("Ctrl+Shift+P"));
    connect(pmProperties, &QAction::triggered, this, &UIObject::openPropertiesWindow);

    pmHelp = new QAction(tr("Help"), this);
    pmHelp->setShortcut(tr("Ctrl+Shift+H"));
    connect(pmHelp, &QAction::triggered, this, &UIObject::openHelpWindow);

    pmOpen = new QAction(tr("Open"), this);
    pmOpen->setShortcut(tr("Ctrl+R"));
    pmOpen->setEnabled(false);
    //connect(pmProperties, &QAction::triggered, this, &UIObject::pmProperties);

    //------------

    _popupMenu.addAction(pmProperties);
    _popupMenu.addAction(pmHelp);
    _popupMenu.addSeparator();
    _popupMenu.addAction(pmOpen);
}

//void UIObject::contextMenuEvent(QContextMenuEvent *event) //customContextMenuRequested(const QPoint &pos)
void UIObject::showPopupMenu(QPoint pos)
{

    _popupMenu.move(pos);
    _popupMenu.show();
}

void UIObject::setInletsPos()
{
    float w = width() - 10;
    //w = (w < 40) ? 40 : w;

    float s = (_inlets->size() < 2) ? _inlets->size() : (_inlets->size() - 1);

    for (int i = 0; i < (int)_inlets->size(); i++) {
        float x = (w) / s * (float)i;
        float y = 0;

        _inlets->at(i)->move(x, y);
        if (_inlets->at(i)->scene())
        _inlets->at(i)->scene()->update(sceneRect());
    }
}

void UIObject::setOutletsPos()
{
    float w = width() - 10;
    //w = (w < 40) ? 40 : w;

    float s = (_outlets->size() < 2) ? _outlets->size() : (_outlets->size() - 1);

    for (int i = 0; i < (int)_outlets->size(); i++) {
        float x = (w) / s * (float)i;
        float y = height() - 3;

        _outlets->at(i)->move(x, y);
        if (_outlets->at(i)->scene())
        _outlets->at(i)->scene()->update(sceneRect());
    }
}

void UIObject::addInlet()
{
    int _portClass_;

    if (_pdObject) {
        _portClass_ = cmp_get_inlet_type((t_object*)_pdObject, _inlets->size());
    } else
        _portClass_ = 0;

    addInlet(_portClass_);
}

void UIObject::addInlet(int _portClass_)
{
    Port* new_in = new Port(this);
    new_in->portType = portInlet;
    new_in->portIndex = _inlets->size();
    new_in->portClass = _portClass_;
    new_in->setEditModeRef(getEditModeRef());

    _inlets->push_back(new_in);

    connect(new_in, &Port::mousePressed, static_cast<UIWidget*>(parent()), &UIWidget::s_InMousePressed);
    connect(new_in, &Port::mouseReleased, static_cast<UIWidget*>(parent()), &UIWidget::s_InMouseReleased);

    new_in->show();

    setInletsPos();
}

void UIObject::addOutlet()
{
    int _portClass_;

    if (_pdObject) {
        _portClass_ = cmp_get_outlet_type((t_object*)_pdObject, _outlets->size());
    } else
        _portClass_ = 0;

    addOutlet(_portClass_);
}

void UIObject::addOutlet(int _portClass_)
{
    Port* new_out = new Port(this);
    new_out->portType = portOutlet;
    new_out->portIndex = _outlets->size();
    new_out->portClass = _portClass_;
    new_out->setEditModeRef(getEditModeRef());

    _outlets->push_back(new_out);
    connect(new_out, &Port::mousePressed, static_cast<UIWidget*>(parent()), &UIWidget::s_OutMousePressed);
    connect(new_out, &Port::mouseReleased, static_cast<UIWidget*>(parent()), &UIWidget::s_OutMouseReleased);

    new_out->show();

    setOutletsPos();
}

Port* UIObject::inletAt(int idx)
{
    if (idx < ((int)_inlets->size()))
        return _inlets->at(idx);
    else
        return 0;
}

Port* UIObject::outletAt(int idx)
{
    if (idx < ((int)_outlets->size()))
        return _outlets->at(idx);
    else
        return 0;
}

int UIObject::pdInletType(int idx)
{
    if ((t_object*)_pdObject)
        return cmp_get_inlet_type((t_object*)_pdObject, idx);
    else
        return 0;
}

int UIObject::inletCount()
{
    return _inlets->size();
}

int UIObject::pdOutletType(int idx)
{
    if ((t_object*)_pdObject)
        return cmp_get_outlet_type((t_object*)_pdObject, idx);
    else
        return 0;
}

int UIObject::outletCount()
{
    return _outlets->size();
}

////////

void UIObject::setObjectData(std::string objData)
{
    _objectData = objData;
}

void UIObject::autoResize()
{
    QFont myFont(PREF_QSTRING("Font"), 11);
    QFontMetrics fm(myFont);

    setFixedWidth((int)fm.width(QString(_objectData.c_str())) + 5);
    if (width() < minimumBoxWidth())
        setFixedWidth(minimumBoxWidth());
}

std::string UIObject::objectData()
{
    return _objectData;
}

void* UIObject::pdObject() { return _pdObject; }

void UIObject::setPdObject(void* obj) { _pdObject = obj; }

bool UIObject::errorBox() { return _errorBox; }

void UIObject::setErrorBox(bool val) { _errorBox = val; }

std::string UIObject::asPdFileString()
{
    std::string ret;

    ret = "#X obj ";
    ret += std::to_string(x()) + " " + std::to_string(y()) + " ";

    //ret += pdObjectName_ + " " ;//

    ret += ((_objectData == "") ? ((std::string) "") : (_objectData + " ")) + _properties.asPdFileString();

    return ret;
}

//void UIObject::setPdObjectName(std::string name)
//{
//    pdObjectName_ = name;
//}

QMainWindow* UIObject::subpatchWindow()
{
    return _SubpatchWindow;
}

void UIObject::setSubpatchWindow(QMainWindow* cwindow)
{
    _SubpatchWindow = cwindow;
}

void UIObject::setEditModeRef(t_editMode* canvasEditMode)
{
    UIWidget::setEditModeRef(canvasEditMode);

    // todo
    for (int i = 0; i < _inlets->size(); i++) {
        inletAt(i)->setEditModeRef(canvasEditMode);
    }

    for (int i = 0; i < _outlets->size(); i++) {
        outletAt(i)->setEditModeRef(canvasEditMode);
    }
}

//----------------------------------------

void UIObject::resizeEvent(QResizeEvent* event)
{

    _sizeBox->move(width() - 7, height() - 7);

    //todo fixed width
    if (width() < minimumBoxWidth())
        setFixedWidth(minimumBoxWidth());
    if (height() < minimumBoxHeight())
        setFixedHeight(minimumBoxHeight());

    setInletsPos();
    setOutletsPos();

    properties()->set("Size", size());
}

void UIObject::enterEvent(QEvent*)
{
    if (getEditMode() == em_Unlocked)
        _sizeBox->show();
}

void UIObject::leaveEvent(QEvent*)
{
    if (getEditMode() == em_Unlocked)
        _sizeBox->hide();
};

//---------------------------------

////
/// \brief set secondary 'minimum width' value - used for object box resize
/// \param w
///
void UIObject::setMinimumBoxWidth(int w)
{
    _minimumBoxWidth = w;
}

////
/// \brief set secondary 'minimum height' value - used for object box resize
/// \param w
///
void UIObject::setMinimumBoxHeight(int h)
{
    _minimumBoxHeight = h;
}

////
/// \brief get secondary 'minimum width' value - used for object box resize
/// \param w
///
int UIObject::minimumBoxWidth()
{
    return _minimumBoxWidth;
}

////
/// \brief get secondary 'minimum height' value - used for object box resize
/// \param w
///
int UIObject::minimumBoxHeight()
{
    return _minimumBoxHeight;
}

// ??
void UIObject::hide()
{

    if (subpatchWindow()) {
        qDebug("hide subcanvas window");

        subpatchWindow()->hide();
        delete _SubpatchWindow;
    }
}

void UIObject::hideSizeBox()
{
    _sizeBox->hide();
}


void UIObject::setHelpName(QString name)
{
    _fullHelpName = name;

}

QString UIObject::fullHelpName() {

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

void UIObject::openPropertiesWindow()
{
    PropertiesWindow* pw = new PropertiesWindow(properties());
    pw->show();
}

void UIObject::openHelpWindow()
{
    QString fullHelpName_ = fullHelpName();
    if (fullHelpName_ != "") {
        OpenFileProxy::openAbstraction(fullHelpName_);
    }
}





void UIObject::s_repaint() //needed for proper threading
{
    if (scene()) scene()->update(sceneRect());
}


void UIObject::propertyChanged(QString pname)
{
    // spaghetti again

    if (pname == "Size")
        setFixedSize(properties()->get("Size")->asQSize());

    //just visuals
    if (pname == "FontSize")
        if (scene()) scene()->update(sceneRect());
    if (pname == "BorderColor")
        if (scene()) scene()->update(sceneRect());
}


}
