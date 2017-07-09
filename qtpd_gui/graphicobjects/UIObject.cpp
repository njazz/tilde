// (c) 2017 Alex Nadzharov
// License: GPL3

#include <QMainWindow>
#include <QMenu>
#include <QObject>
#include <QStyleOption>

#include "UIObject.h"
#include "UIObjectData.h"

#include "Port.h"
#include "SizeBox.h"

#include <pdServer.hpp>

#include "objectObserver.h"

// to be removed:

#include "FileParser.h"
#include "PropertiesWindow.h"

#include "CanvasView.h"

namespace qtpd {

UIObject::UIObject(UIItem* parent)
    : UIItem(parent)
{
    //_objectDataModel.setErrorBox(false);

    setParent(parent);

    _popupMenu = new QMenu;

    _objectData = new UIObjectData;
    objectData()->setObjectSize(os_FixedHeight, 40, 20);

    //setPdObject(0);

    _inlets = new portItemVec;
    _outlets = new portItemVec;

    _sizeBox = new SizeBox(this);
    _sizeBox->hide();

    connect(_sizeBox, &SizeBox::resizeBoxEvent, this, &UIObject::resizeBox);

    // repaint, handling for threads
    connect(this, &UIObject::callRepaint, this, &UIObject::s_repaint);

    initProperties();

    _pmProperties = 0;

    createPopupMenu();

    //this is default
    //_objectSizeMode = os_FixedHeight;

    setAcceptHoverEvents(true);

    _parentCanvasView = 0;
    //_subCanvasData = 0;

    _observer = new ObjectObserver;
    _observer->setObject(this);
}

//---------------------------------------

//UIObject::UIObject(const UIObject& source)
//{
//}

//UIObject& UIObject::operator=(const UIObject& source)
//{
//}

//---------------------------------------

CanvasView* UIObject::parentCanvasView() { return _parentCanvasView; };
void UIObject::setParentCanvasView(CanvasView* v) { _parentCanvasView = v; }

PatchWindowController* UIObject::parentController() { return _parentController; }
void UIObject::setParentController(PatchWindowController* p) { _parentController = p; }

ServerObject* UIObject::serverObject() { return _serverObject; };
void UIObject::setServerObject(ServerObject* o) { _serverObject = o; };

void UIObject::setObjectData(UIObjectData* m) { _objectData = m; }
UIObjectData* UIObject::objectData()
{
    return _objectData;
}

ObjectObserver* UIObject::observer() { return _observer; }

//---------------------------------------

void UIObject::resizeBox(int dx, int dy)
{
    QRect r = boundingRect().toRect();

    if (objectData()->objectSizeMode() != os_Fixed)
        setWidth(boundingRect().width() + dx);
    if (objectData()->objectSizeMode() == os_Free)
        setHeight(boundingRect().height() + dy);

    if (objectData()->objectSizeMode() == os_Square) {
        setHeight(boundingRect().width());
    }

    properties()->set("Size", boundingRect().size());

    //resizeEvent();

    scene()->update(r.left(), r.top(), r.width(), r.height());
};

void UIObject::initProperties()
{
    //connect(_objectDataModel.properties(), &PropertyList::propertyChangedSignal, this, &UIObject::propertyChanged);

    objectData()->properties()->create("Size", "Box", "0.1", boundingRect().size());
    objectData()->properties()->create("Position", "Box", "0.1", pos());
    objectData()->properties()->create("FontSize", "Box", "0.1", 11.);

    objectData()->properties()->create("PresetName", "Bindings", "0.1", QString(""));
    objectData()->properties()->create("SendSymbol", "Bindings", "0.1", QString(""));
    objectData()->properties()->create("ReceiveSymbol", "Bindings", "0.1", QString(""));
    objectData()->properties()->create("AutoOSCSymbol", "Bindings", "0.1", QString(""));

    objectData()->properties()->create("BorderColor", "Color", "0.1", QColor(192, 192, 192, 255));

    PROPERTY_LISTENER("Size", &UIObject::propertySize);
    PROPERTY_LISTENER("FontSize", &UIObject::propertySize);
    PROPERTY_LISTENER("BorderColor", &UIObject::propertyUpdate);

    PROPERTY_LISTENER("ReceiveSymbol", &UIObject::propertyReceiveSymbol);
}

void UIObject::propertySize()
{
    Property* o = (Property*)QObject::sender();
    QSize size = o->asQSize();

    //    if (!o) return;

    if (size.width() < 20) {
        size.setWidth(20);
    }
    if (size.height() < 20) {
        size.setHeight(20);
    }

    //    if (!properties()) return;
    //    if (!properties()->get("FontSize")) return;

    float fs = properties()->get("FontSize")->asFloat();
    if (size.height() < (fs + 9)) {
        size.setHeight(fs + 9);
    }

    doSetSize(size);

    update();

    //cmp_post("property size updated");
}

void UIObject::propertyFontSize()
{
    //remove

    UIObject::propertySize();
}

void UIObject::propertyUpdate()
{
    update();
}

void UIObject::propertyReceiveSymbol()
{

    string symbolName = properties()->get("ReceiveSymbol")->asStdString();

    //    ServerInstance::post("changed receive symbol");
    //    ServerInstance::post(symbolName);

    if (symbolName != "") {
        _serverObject->setReceiveSymbol(symbolName);
    }
}

PropertyList* UIObject::properties()
{
    return objectData()->properties(); //&_properties;
}

void UIObject::createPopupMenu()
{
    _pmProperties = new QAction(tr("Properties"), this);
    _pmProperties->setShortcut(tr("Ctrl+Shift+P"));
    connect(_pmProperties, &QAction::triggered, this, &UIObject::openPropertiesWindow);

    _pmHelp = new QAction(tr("Help"), this);
    _pmHelp->setShortcut(tr("Ctrl+Shift+H"));
    connect(_pmHelp, &QAction::triggered, this, &UIObject::openHelpWindow);

    _pmOpen = new QAction(tr("Open"), this);
    _pmOpen->setShortcut(tr("Ctrl+R"));
    _pmOpen->setEnabled(false);
    //connect(pmProperties, &QAction::triggered, this, &UIObjectItem::pmProperties);

    //------------

    _popupMenu->addAction(_pmProperties);
    _popupMenu->addAction(_pmHelp);
    _popupMenu->addSeparator();
    _popupMenu->addAction(_pmOpen);
}

void UIObject::showPopupMenu(QPoint pos)
{

    _popupMenu->move(pos);
    _popupMenu->show();
}

void UIObject::setInletsPos()
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

void UIObject::setOutletsPos()
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

void UIObject::addInlet()
{
    int _portClass_ = 0;

    qDebug() << "addInlet";

    if (_serverObject) {
        _portClass_ = (_serverObject->getInletType(inletCount()) == XLetSignal);
    }

    addInlet(_portClass_);
}

void UIObject::removeXLets()
{

    for (portItemVec::iterator it = _inlets->begin(); it != _inlets->end(); ++it) {
        Port* p = *it;
        p->hide();
        scene()->removeItem(p);
    }

    for (portItemVec::iterator it = _inlets->begin(); it != _inlets->end(); ++it) {
        Port* p = *it;
        p->hide();
        scene()->removeItem(p);
    }

    _inlets->clear();
    _outlets->clear();
}

void UIObject::addInlet(int _portClass_)
{
    Port* new_in = new Port(this);
    new_in->setPortType(portInlet);
    new_in->setPortIndex(_inlets->size());
    new_in->setPortClass(_portClass_);
    new_in->setEditModeRef(this->getEditModeRef());

    _inlets->push_back(new_in);

    if (_parentCanvasView) {
        connect(new_in, &Port::mousePressed, (_parentCanvasView), &CanvasView::slotInletMousePress);
        connect(new_in, &Port::mouseReleased, (_parentCanvasView), &CanvasView::slotInletMouseRelease);
    }

    new_in->show();

    setInletsPos();
}

void UIObject::addOutlet()
{
    int _portClass_ = 0;

    if (_serverObject) {
        _portClass_ = (_serverObject->getOutletType(outletCount()) == XLetSignal);
    }

    addOutlet(_portClass_);
}

void UIObject::addOutlet(int _portClass_)
{
    Port* new_out = new Port(this);
    new_out->setPortType(portOutlet);
    new_out->setPortIndex(_outlets->size());
    new_out->setPortClass(_portClass_);
    new_out->setEditModeRef(this->getEditModeRef());

    _outlets->push_back(new_out);

    if (_parentCanvasView) {
        connect(new_out, &Port::mousePressed, _parentCanvasView, &CanvasView::slotOutletMousePressed);
        connect(new_out, &Port::mouseReleased, _parentCanvasView, &CanvasView::slotOutletMouseReleased);
    }

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

int UIObject::pdInletClass(int idx)
{

    if (inletAt(idx))
        return inletAt(idx)->portClass();
    else
        return -1;
}

int UIObject::inletCount()
{
    return _inlets->size();
}

int UIObject::pdOutletClass(int idx)
{
    if (outletAt(idx))
        return outletAt(idx)->portClass();
    else
        return -1;
}

int UIObject::outletCount()
{
    return _outlets->size();
}

// ------------------------------

void UIObject::objectPressEvent(QGraphicsSceneMouseEvent*) {}
void UIObject::objectMoveEvent(QGraphicsSceneMouseEvent*) {}
void UIObject::objectReleaseEvent(QGraphicsSceneMouseEvent*) {}

// ------------------------------

void UIObject::mousePressEvent(QGraphicsSceneMouseEvent* event)
{

    QGraphicsItem::mousePressEvent(event);

    QPoint pos = event->pos().toPoint();

    //context menu
    if (event->button() == Qt::RightButton) {

        QPoint menuPos;

        if (scene()
            && !scene()->views().isEmpty()
            && scene()->views().first()
            && scene()->views().first()->viewport()) {

            QGraphicsView* v = scene()->views().first();

            menuPos = v->viewport()->mapToGlobal(pos);

            // TODO
            showPopupMenu(menuPos + this->pos().toPoint());
            event->accept();
        }

        return;
    }

    objectPressEvent(event);

    if (event) {
        event->accept();
        emit selectBox(this, event);
    }
}

void UIObject::mouseMoveEvent(QGraphicsSceneMouseEvent* event)
{

    if (event->buttons() & Qt::LeftButton) {
        emit moveBox(this, event);
    }

    objectMoveEvent(event);

    QGraphicsObject::mouseMoveEvent(event);
}

void UIObject::mouseReleaseEvent(QGraphicsSceneMouseEvent* event)
{
    objectReleaseEvent(event);
}

// ---------------------------------

void UIObject::fromQString(QString objData)
{
    objectData()->setData(objData);
}

// ----------------------------

void UIObject::sync()
{
    removeXLets();

    if (_serverObject->errorBox()) {
        setErrorBox(true);
        return;
    }

    int in_c = _serverObject->inletCount();
    int out_c = _serverObject->outletCount();

    for (int i = 0; i < in_c; i++)
        addInlet();
    for (int i = 0; i < out_c; i++)
        addOutlet();
};

void UIObject::autoResize()
{
}

QString UIObject::toQString()
{
    if (objectData())
        return objectData()->toQString(); //_objectData;
    else
        return "";
}

QString UIObject::objectClass()
{
    return toQString().split(" ").at(0);
}

bool UIObject::errorBox() { return objectData()->errorBox(); }
void UIObject::setErrorBox(bool val) { objectData()->setErrorBox(val); }

std::string UIObject::asPdFileString()
{
    std::string ret;

    ret = "#X obj ";
    ret += std::to_string(int(x())) + " " + std::to_string(int(y())) + " ";

    ret += ((objectData()->toQString() == "") ? ((std::string) "") : (objectData()->toQString().toStdString() + " ")) + objectData()->properties()->asPdFileString();

    return ret;
}

void UIObject::setEditModeRef(t_editMode* canvasEditMode)
{
    UIItem::setEditModeRef(canvasEditMode);

    for (size_t i = 0; i < _inlets->size(); i++) {
        inletAt(i)->setEditModeRef(canvasEditMode);
    }

    for (size_t i = 0; i < _outlets->size(); i++) {
        outletAt(i)->setEditModeRef(canvasEditMode);
    }
}

//----------------------------------------

void UIObject::doSetSize(QSize size)
{

    autoResize();

    UIItem::setSize(size);

    //todo fixed width
    if (boundingRect().width() < objectData()->minimumBoxWidth())
        setWidth(objectData()->minimumBoxWidth());
    if (boundingRect().height() < objectData()->minimumBoxHeight())
        setHeight(objectData()->minimumBoxHeight());

    _sizeBox->move(boundingRect().width() - 7, boundingRect().height() - 7);

    setInletsPos();
    setOutletsPos();
}

void UIObject::resizeEvent() //QGraphicsSceneResizeEvent *event)
{

    // needs fix
    properties()->set("Size", boundingRect().size());
}

void UIObject::hoverEnterEvent(QGraphicsSceneHoverEvent*)
{
    if (getEditMode() == em_Unlocked)
        _sizeBox->show();
}

void UIObject::hoverLeaveEvent(QGraphicsSceneHoverEvent*)
{
    if (getEditMode() == em_Unlocked)
        _sizeBox->hide();
};

//---------------------------------

void UIObject::hideSizeBox()
{
    _sizeBox->hide();
}

SizeBox* UIObject::sizeBox()
{
    return _sizeBox;
}

void UIObject::setHelpName(QString name)
{
    objectData()->setFullHelpName(name);
}

QString UIObject::fullHelpName()
{

    QString name = objectData()->fullHelpName();

    QStringList paths = Preferences::inst().paths();

    if (paths.size() == 0) {
        objectData()->setFullHelpName("");

        ServerInstance::post("Help: bad search paths");
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

    return name;
}

// -------

void UIObject::openPropertiesWindow()
{
    PropertiesWindow* pw = new PropertiesWindow(properties());
    pw->show();

    emit signalOpenPropertiesWindow();
}

void UIObject::openHelpWindow()
{
    QString fullHelpName_ = fullHelpName();
    if (fullHelpName_ != "") {
        FileParser::open(fullHelpName_);
    } else {
        ServerInstance::error("bad error help file name!");
    }

    emit signalOpenHelpWindow();
}

void UIObject::s_repaint() //needed for proper threading
{
    update();
}

// ----------------

void ObjectObserver::update()
{

    if (_object) {
        _object->updateUI(data());
    }
};
}
