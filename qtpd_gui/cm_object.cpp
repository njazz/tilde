// (c) 2017 Alex Nadzharov
// License: GPL3

#include "cm_object.h"

namespace qtpd {

UIObject::UIObject(UIWidget* parent)
    : UIWidget(parent)
{
    this->errorBox_ = false;

    this->setPdObject(0);

    this->inlets_ = new portVec;
    this->outlets_ = new portVec;

    this->sizeBox = new SizeBox(this);
    this->sizeBox->hide();

    this->setAttribute(Qt::WA_Hover, true);

    connect(this->sizeBox, &SizeBox::resizeBoxEvent, this, &UIObject::resizeBox);

    // repaint, handling for threads
    connect(this, &UIObject::callRepaint, this, &UIObject::s_repaint);

    initProperties();

    createContextMenu();

    //this is default
    this->objectSizeMode_ = os_FixedHeight;
}

//---------------------------------------

void UIObject::resizeBox(int dx, int dy)
{
    if (objectSizeMode_ != os_Fixed)
        this->setFixedWidth(this->width() + dx);
    if (objectSizeMode_ == os_Free)
        this->setFixedHeight(this->height() + dy);
};

void UIObject::initProperties()
{
    connect(this->properties(), &PropertyList::propertyChangedSignal, this, &UIObject::propertyChanged);

    this->properties()->create("Size", "Box", "0.1", this->size());
    this->properties()->create("Position", "Box", "0.1", this->pos());
    this->properties()->create("FontSize", "Box", "0.1", 11.);

    this->properties()->create("PresetName", "Preset", "0.1", gensym(""));
    this->properties()->create("SendSymbol", "Preset", "0.1", gensym(""));
    this->properties()->create("ReceiveSymbol", "Preset", "0.1", gensym(""));

    this->properties()->create("BorderColor", "Color", "0.1", QColor(192, 192, 192, 255));
}

PropertyList* UIObject::properties()
{
    return &this->properties_;
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

    popupMenu_.addAction(pmProperties);
    popupMenu_.addAction(pmHelp);
    popupMenu_.addSeparator();
    popupMenu_.addAction(pmOpen);
}

//void UIObject::contextMenuEvent(QContextMenuEvent *event) //customContextMenuRequested(const QPoint &pos)
void UIObject::showPopupMenu(QPoint pos)
{

    popupMenu_.move(pos);
    popupMenu_.show();
}

void UIObject::setInletsPos()
{
    float w = this->width() - 10;
    //w = (w < 40) ? 40 : w;

    float s = (inlets_->size() < 2) ? inlets_->size() : (inlets_->size() - 1);

    for (int i = 0; i < (int)inlets_->size(); i++) {
        float x = (w) / s * (float)i;
        float y = 0;

        inlets_->at(i)->move(x, y);
        inlets_->at(i)->repaint();
    }
}

void UIObject::setOutletsPos()
{
    float w = this->width() - 10;
    //w = (w < 40) ? 40 : w;

    float s = (outlets_->size() < 2) ? outlets_->size() : (outlets_->size() - 1);

    for (int i = 0; i < (int)outlets_->size(); i++) {
        float x = (w) / s * (float)i;
        float y = this->height() - 3;

        outlets_->at(i)->move(x, y);
        outlets_->at(i)->repaint();
    }
}

void UIObject::addInlet()
{
    int _portClass_;

    if (this->pdObject_) {
        _portClass_ = cmp_get_inlet_type((t_object*)this->pdObject_, inlets_->size());
    } else
        _portClass_ = 0;

    addInlet(_portClass_);
}

void UIObject::addInlet(int _portClass_)
{
    Port* new_in = new Port(this);
    new_in->portType = portInlet;
    new_in->portIndex = inlets_->size();
    new_in->portClass = _portClass_;
    new_in->setEditModeRef(this->getEditModeRef());

    inlets_->push_back(new_in);

    connect(new_in, &Port::mousePressed, static_cast<UIWidget*>(this->parent()), &UIWidget::s_InMousePressed);
    connect(new_in, &Port::mouseReleased, static_cast<UIWidget*>(this->parent()), &UIWidget::s_InMouseReleased);

    new_in->show();

    this->setInletsPos();
}

void UIObject::addOutlet()
{
    int _portClass_;

    if (this->pdObject_) {
        _portClass_ = cmp_get_outlet_type((t_object*)this->pdObject_, outlets_->size());
    } else
        _portClass_ = 0;

    addOutlet(_portClass_);
}

void UIObject::addOutlet(int _portClass_)
{
    Port* new_out = new Port(this);
    new_out->portType = portOutlet;
    new_out->portIndex = outlets_->size();
    new_out->portClass = _portClass_;
    new_out->setEditModeRef(this->getEditModeRef());

    outlets_->push_back(new_out);
    connect(new_out, &Port::mousePressed, static_cast<UIWidget*>(this->parent()), &UIWidget::s_OutMousePressed);
    connect(new_out, &Port::mouseReleased, static_cast<UIWidget*>(this->parent()), &UIWidget::s_OutMouseReleased);

    new_out->show();

    this->setOutletsPos();
}

Port* UIObject::inletAt(int idx)
{
    if (idx < ((int)this->inlets_->size()))
        return this->inlets_->at(idx);
    else
        return 0;
}

Port* UIObject::outletAt(int idx)
{
    if (idx < ((int)this->outlets_->size()))
        return this->outlets_->at(idx);
    else
        return 0;
}

int UIObject::pdInletType(int idx)
{
    if ((t_object*)this->pdObject_)
        return cmp_get_inlet_type((t_object*)this->pdObject_, idx);
    else
        return 0;
}

int UIObject::inletCount()
{
    return inlets_->size();
}

int UIObject::pdOutletType(int idx)
{
    if ((t_object*)this->pdObject_)
        return cmp_get_outlet_type((t_object*)this->pdObject_, idx);
    else
        return 0;
}

int UIObject::outletCount()
{
    return outlets_->size();
}

////////

void UIObject::setObjectData(std::string objData)
{
    this->objectData_ = objData;
}

void UIObject::autoResize()
{
    QFont myFont(PREF_QSTRING("Font"), 11);
    QFontMetrics fm(myFont);

    this->setFixedWidth((int)fm.width(QString(this->objectData_.c_str())) + 5);
    if (this->width() < this->minimumBoxWidth())
        this->setFixedWidth(this->minimumBoxWidth());
}

std::string UIObject::objectData()
{
    return this->objectData_;
}

void* UIObject::pdObject() { return this->pdObject_; }

void UIObject::setPdObject(void* obj) { this->pdObject_ = obj; }

bool UIObject::errorBox() { return this->errorBox_; }

void UIObject::setErrorBox(bool val) { this->errorBox_ = val; }

std::string UIObject::asPdFileString()
{
    std::string ret;

    ret = "#X obj ";
    ret += std::to_string(this->x()) + " " + std::to_string(this->y()) + " ";

    //ret += this->pdObjectName_ + " " ;//

    ret += ((this->objectData_ == "") ? ((std::string) "") : (this->objectData_ + " ")) + this->properties_.asPdFileString();

    return ret;
}

//void UIObject::setPdObjectName(std::string name)
//{
//    pdObjectName_ = name;
//}

QMainWindow* UIObject::subpatchWindow()
{
    return SubpatchWindow_;
}

void UIObject::setSubpatchWindow(QMainWindow* cwindow)
{
    SubpatchWindow_ = cwindow;
}

void UIObject::setEditModeRef(t_editMode* canvasEditMode)
{
    UIWidget::setEditModeRef(canvasEditMode);

    // todo
    for (int i = 0; i < this->inlets_->size(); i++) {
        this->inletAt(i)->setEditModeRef(canvasEditMode);
    }

    for (int i = 0; i < this->outlets_->size(); i++) {
        this->outletAt(i)->setEditModeRef(canvasEditMode);
    }
}

//----------------------------------------

void UIObject::resizeEvent(QResizeEvent* event)
{

    this->sizeBox->move(this->width() - 7, this->height() - 7);

    //todo fixed width
    if (this->width() < this->minimumBoxWidth())
        this->setFixedWidth(this->minimumBoxWidth());
    if (this->height() < this->minimumBoxHeight())
        this->setFixedHeight(this->minimumBoxHeight());

    this->setInletsPos();
    this->setOutletsPos();
}

void UIObject::enterEvent(QEvent*)
{
    if (this->getEditMode() == em_Unlocked)
        this->sizeBox->show();
}

void UIObject::leaveEvent(QEvent*)
{
    if (this->getEditMode() == em_Unlocked)
        this->sizeBox->hide();
};

//---------------------------------

////
/// \brief set secondary 'minimum width' value - used for object box resize
/// \param w
///
void UIObject::setMinimumBoxWidth(int w)
{
    this->minimumBoxWidth_ = w;
}

////
/// \brief set secondary 'minimum height' value - used for object box resize
/// \param w
///
void UIObject::setMinimumBoxHeight(int h)
{
    this->minimumBoxHeight_ = h;
}

////
/// \brief get secondary 'minimum width' value - used for object box resize
/// \param w
///
int UIObject::minimumBoxWidth()
{
    return this->minimumBoxWidth_;
}

////
/// \brief get secondary 'minimum height' value - used for object box resize
/// \param w
///
int UIObject::minimumBoxHeight()
{
    return this->minimumBoxHeight_;
}

// ??
void UIObject::hide()
{

    if (this->subpatchWindow()) {
        qDebug("hide subcanvas window");

        this->subpatchWindow()->hide();
        delete this->SubpatchWindow_;
    }
}

void UIObject::hideSizeBox()
{
    sizeBox->hide();
}
}
