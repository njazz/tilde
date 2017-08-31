// (c) 2017 Alex Nadzharov
// License: GPL3

#include "CanvasView.h"

#include "FileParser.h"

#include "PatchWindowController.h"

#include "UIObjectData.h"

#include "UIBox.h"

#include "SizeBox.h"

#include <assert.h>

namespace tilde {

static const QSize EmptyCanvasSize = QSize(300, 200);

CanvasView::CanvasView(QGraphicsView* parent)
    : QGraphicsView(parent)
{

    //test
    //setFixedSize(400, 300);

    setMouseTracking(true);

    _newPatchcord = new UINewPatchcord;
    _newPatchcord->setActive(false);

    _selectionRect = new SelectionRect;
    _selectionRect->setActive(false);

    //_fileName = "";

    _canvasEditMode = new t_editMode;

    CanvasView::setEditMode(em_Unlocked);

    _grid = new Grid;

    setScene(new QGraphicsScene(0, 0, 400, 300, this));
    scene()->addItem(_grid);
    scene()->addItem(_newPatchcord);
    scene()->addItem(_selectionRect);

    _grid->setSize(300, 300);
    _grid->move(0, 0);
    _gridSnap = true;
    _grid->setGridStep(20);

    //
    _connectionStartObject = 0;
    _connectionStartOutlet = 0;
    setDragObject(0);
    //setPdObject(0); //extra

    _readOnly = false;

    _objectMaker = new ObjectMaker((QLineEdit*)this);
    _objectMaker->hide();
    _objectMaker->setFocusPolicy(Qt::StrongFocus);

    _replaceObject = 0;

    // ------NEW
    setStyleSheet("QGraphicsView { border-style: none; }");
    setMouseTracking(true);

    scale(1, 1);
    _zoom = 1;

    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

    //objectMaker()->close();

    _controller = 0;
    _pmProperties = 0;

    createContextMenu();

    //    _sizeBox = new SizeBox();
    //    _sizeBox->hide();
    //    scene()->addItem(_sizeBox);

    _transformMatrix = new QTransform();

    *_transformMatrix = transform();
}

// ---------------------------------------------

void CanvasView::slotInletMousePress(UIItem* obj, QGraphicsSceneMouseEvent*)
{
    //qDebug("in: mouse pressed\n");

    if (_newPatchcord)
        if (_newPatchcord->error())
            return;

    _newPatchcord->setActive(false);

    if ((_connectionStartObject) && (_connectionStartOutlet)) {

        int nOut = ((Port*)_connectionStartOutlet)->portIndex();
        int nIn = ((Port*)obj)->portIndex();

        emit signalPatchcord(_connectionStartObject, nOut, (UIObject*)obj->parent(), nIn);

        viewport()->update();
    }

    _connectionStartObject = 0;
    _connectionStartOutlet = 0;
}

void CanvasView::slotInletMouseEnter(UIItem* obj, QGraphicsSceneHoverEvent* ev)
{

    if (!_connectionStartOutlet)
        return;

    int ptOut = ((Port*)_connectionStartOutlet)->portClass();
    int ptIn = ((Port*)obj)->portClass();

    if ((ptOut != ptIn) && (ptOut > 0)) {
        _newPatchcord->setError(true);
    }
}

void CanvasView::slotInletMouseLeave(UIItem*, QGraphicsSceneHoverEvent* ev)
{
    _newPatchcord->setError(false);
}

void CanvasView::slotInletMouseRelease(UIItem*, QGraphicsSceneMouseEvent* ev) {}

void CanvasView::slotOutletMousePressed(UIItem* obj, QGraphicsSceneMouseEvent*)
{
    //qDebug("out: mouse pressed\n");

    _newPatchcord->setStart(((UIItem*)obj->parent())->pos().toPoint() + obj->pos().toPoint() + QPoint(5, 1)); //((QWidget*)obj->parent())->pos() +
    _newPatchcord->setActive(true);

    _connectionStartObject = (UIObject*)obj->parent();
    _connectionStartOutlet = (UIObject*)obj;

    Port* p = (Port*)obj;

    _newPatchcord->setPatchcordType(p->portClass() > 0);
}

void CanvasView::slotOutletMouseReleased(UIItem*, QGraphicsSceneMouseEvent*) {}

void CanvasView::slotSelectBox(UIItem* box, QGraphicsSceneMouseEvent* ev)
{

    //qDebug() << "select box";

    if (CanvasView::getEditMode() == em_Unlocked) {

        if (box->isSelected()) {
            if (_controller->canvasData()->selectedBoxes()->size() < 2) {
                if (qobject_cast<UIBox*>(box))
                    slotObjectStartsEdit((void*)box);
            }
        }

        if (!(ev->modifiers() & Qt::ShiftModifier)) {

            if (_controller->canvasData()->selectedBoxes()->size() < 2) {
                emit signalDeselectObjects();
            }
        }

        emit signalSelectObject((UIObject*)box);
    }

    setDragObject(0);
}

////
/// \brief Canvas::s_MoveBox
/// \param box
/// \param event
/// \deprecated move to UIBox
void CanvasView::slotMoveBox(UIItem* box, QGraphicsSceneMouseEvent* event)
{
    // TODO

    if (!(CanvasView::getEditMode() == em_Unlocked))
        return;

    emit signalMoveSelectedBoxes(mapToParent((event->pos().toPoint() - box->dragOffset)));

    resizeToObjects();
}

// -----------------------------------------------------------------------

void CanvasView::addInlet()
{
}

void CanvasView::addOutlet()
{
}

// ------------------------------------------------------------------------

void CanvasView::mouseMoveEvent(QMouseEvent* ev)
{
    //    qDebug() << "canvas mouse move";

    ev->accept();

    //workaround
    //    if (_objectMaker->isVisible()) {
    //        _objectMaker->setFocus();
    //        return;
    //    }

    QGraphicsView::mouseMoveEvent(ev);

    if (!ev)
        return;

    QPoint pos = ev->pos();

    if (!_objectMaker->isVisible())
        _newObjectPos = pos;

    _selectionRect->setEnd(pos - _selectionRect->start());
    _newPatchcord->setEnd(pos);

    // move new object
    if (dragObject()) {
        QPoint offset = QPoint(10, 10);

        QPoint newpos = mapToParent(ev->pos() - offset);
        if (_gridSnap) {
            newpos.setX(ceil(newpos.x() / _grid->gridStep()) * _grid->gridStep());
            newpos.setY(ceil(newpos.y() / _grid->gridStep()) * _grid->gridStep());
        }

        dragObject()->move(newpos);

        viewport()->update();
    }

    //selection frame
    if (_selectionRect->active()) {

        // TODO

        emit signalSelectionFrame(_selectionRect->start(), _selectionRect->end());

        //_selectionRect->update();

        // todo
        viewport()->update();
    }

    //todo
    if (_newPatchcord->active()) {
        viewport()->update();
    }

    emit signalMouseMove(pos);
}

void CanvasView::mousePressEvent(QMouseEvent* ev)
{
    qDebug("click canvas");
    QGraphicsView::mousePressEvent(ev);

    if (!ev)
        return;

    if (ev->isAccepted())
        return;

    qDebug("click canvas accepted");

    //context menu
    if (ev->button() & Qt::RightButton) {

        qDebug() << "menu";

        QPoint pos = mapToGlobal(ev->pos());
        _popupMenu.move(pos);
        _popupMenu.show();

        ev->accept();
        return;
    }

    //setFocus();

    if (CanvasView::getEditMode() == em_Unlocked) {
        //sel frame
        _selectionRect->setActive(true); // = true;
        _selectionRect->setStart(ev->pos());
        _selectionRect->setEnd(QPoint(0, 0));
    }

    if (_objectMaker->isVisible()) {
        //_objectMaker->cancel();
        _objectMaker->done();
    }

    QPoint pos = ev->pos();
    emit signalMousePress(pos);
}

void CanvasView::mouseReleaseEvent(QMouseEvent* ev)
{

    //qDebug("canvas mouseup");

    QGraphicsView::mouseReleaseEvent(ev);

    //    if (ev->isAccepted())
    //        return;

    //qDebug("canvas mouseup accepted");

    setDragObject(0);

    _selectionRect->setActive(false);

    //todo
    viewport()->update();

    QPoint pos = ev->pos();
    emit signalMouseRelease(pos);
}

// -------------------------------------------

void CanvasView::setEditMode(t_editMode mode)
{

    if (_readOnly)
        *_canvasEditMode = em_Locked;
    else
        *_canvasEditMode = mode;

    QColor lockedColor = (_readOnly) ? QColor(245, 245, 255) : QColor(245, 245, 245);
    QColor bgColor = (mode != em_Locked) ? QColor(255, 255, 255) : lockedColor;
    if (scene())
        setBackgroundBrush(QBrush(bgColor));

    if (_grid)
        if (scene())
            _grid->setVisible(*_canvasEditMode != em_Locked);

    if (mode == em_Locked) {

        // TODO
        //deselect

        //_canvasData.deselectBoxes();
        //_canvasData.deselectPatchcords();

        //        hoverPatchcordsOff();
    }
}

void CanvasView::setGridEnabled(bool val)
{
    _grid->setVisible(val);
}

void CanvasView::setGridSnap(bool val)
{
    _gridSnap = val;
}

// -------------------------------

void CanvasView::resizeToObjects()
{
    scene()->setSceneRect(scene()->itemsBoundingRect());
    _grid->setSize(scene()->itemsBoundingRect().size().toSize());
}

// --------------------------------

// TODO MOVE
void CanvasView::canvasFromPdStrings(QStringList strings)
{

    if (strings.size() < 1)
        return;

    // todo
    // now skipping first line (#N canvas)
    strings.removeAt(0);

    QStringList list1;

    for (int i = 0; i < strings.size(); i++) {

        FileParser::parseQString(strings[i]);
    }
}

void CanvasView::cancelPatchcord()
{
    _newPatchcord->setActive(false);

    // TODO
    viewport()->update();
}

ObjectMaker* CanvasView::objectMaker()
{
    return _objectMaker;
}

void CanvasView::portLocalCountUpdated()
{
    // TODO move!

    qDebug("port local count update");

    //    if (pdObject()) {
    //        qDebug("setting ports");

    //        int in_c = cmp_get_inlet_count((t_object*)pdObject());
    //        int out_c = cmp_get_outlet_count((t_object*)pdObject());

    //        int obj_in = inletCount();
    //        int obj_out = outletCount();

    //        if (in_c > obj_in) {
    //            addInlet();
    //            qDebug("add inlet");
    //        }

    //        if (out_c > obj_out) {
    //            addOutlet();
    //            qDebug("add outlet");
    //        }

    qDebug() << " ** canvas: " << (long)this;

    //qDebug(" ** port count: %i %i", inletCount(), outletCount());

    //        int ci = cmp_get_inlet_count((t_object*)pdObject());
    //        int co = cmp_get_outlet_count((t_object*)pdObject());

    //qDebug(" ** port count @pd: %i %i", ci, co);

    //            qDebug () << ((drawStyle()==ds_Box)?"this is box canvas":"this is canvas");
    //            qDebug () << "size" << size();

    // viewport()->update();
    //}
};

void CanvasView::setReplaceObject(UIObject* obj) { _replaceObject = obj; }
UIObject* CanvasView::replaceObject() { return _replaceObject; }

void CanvasView::showNewObjectMaker()
{

    objectMaker()->move(_newObjectPos);
    objectMaker()->setFixedSize(60, 20);
    objectMaker()->setFocus();

    //dragObject = (QGraphicsView*)objectMaker();
    objectMaker()->setText(QString(""));
    objectMaker()->setModified(false);
    objectMaker()->show();
}

void CanvasView::slotPortCountUpdated()
{
    qDebug("port count update");

    //    if (pdObject()) {
    //        qDebug("setting ports");

    //        int in_c = cmp_get_inlet_count((t_object*)pdObject());
    //        int out_c = cmp_get_outlet_count((t_object*)pdObject());

    //        int obj_in = inletCount();
    //        int obj_out = outletCount();

    //        if (in_c > obj_in) {
    //            addInlet();
    //            qDebug("add inlet");
    //        }

    //        if (out_c > obj_out) {
    //            addOutlet();
    //            qDebug("add outlet");
    //        }

    //qDebug() << ((drawStyle() == ds_Box) ? "this is box canvas" : "this is canvas");

    qDebug() << "size" << size();

    //viewport()->update();
    //}
};

void CanvasView::slotObjectStartsEdit(void* obj)
{
    // TODO
    // move that
    // _canvasData.deselectBoxes();

    qDebug("edit box>>");

    _replaceObject = (UIObject*)obj;

    objectMaker()->move(_replaceObject->pos().toPoint());
    objectMaker()->setFixedSize(_replaceObject->size());
    objectMaker()->setText(QString(_replaceObject->objectData()->toQString()));
    objectMaker()->setFocus();
    //replaceObject_->hide();
    objectMaker()->setModified(false);
    objectMaker()->show();
    objectMaker()->raise();
}

// TODO move to data
QSize CanvasView::minimumCanvasSize()
{
    objectVec::iterator it;

    QSize ret = QSize(300, 200); //EmptyCanvasSize;

    /*

    for (it = _canvasData.boxes()->begin(); it != _canvasData.boxes()->end(); ++it) {
        int obj_x = ((UIObject*)*it)->x() + ((UIObject*)*it)->width() + 80;
        int obj_y = ((UIObject*)*it)->y() + ((UIObject*)*it)->height() + 80;

        if (obj_x > (ret.width() - 80))
            ret.setWidth(obj_x);
        if (obj_y > (ret.height() - 80))
            ret.setHeight(obj_y);
    }

    if (ret.width() < _windowSize.width())
        ret.setWidth(_windowSize.width());
    if (ret.height() < _windowSize.height())
        ret.setHeight(_windowSize.height());

        */

    return ret;
}

void CanvasView::setWindowSize(QSize wsize)
{
    _windowSize = wsize;
}

// ------------------------------------

void CanvasView::setZoom(float zoomDirection)
{
    if (zoomDirection)
        _zoom *= pow(1.1,zoomDirection);
    else
        _zoom = 1;

    qDebug() << "zoom" << zoomDirection << _zoom;

    QTransform matrix = *_transformMatrix;
    matrix.scale(_zoom, _zoom);
    setTransform(matrix, false);

    viewport()->update();

    if ((_zoom < .5)) {
        zoomDirection = .5;
        return;
    }
    if ((_zoom > 2)) {
        zoomDirection = 2.;
        return;
    }
}

// -------------------------------

void CanvasView::createContextMenu()
{

    _pmProperties = new QAction(tr("Properties"), this);
    _pmProperties->setShortcut(tr("Ctrl+Shift+P"));

    //------------

    _popupMenu.addAction(_pmProperties);

    connect(_pmProperties, &QAction::triggered, this, &CanvasView::slotPopupMenu);
}

void CanvasView::slotPopupMenu()
{
    emit signalPopupMenu();
}

void CanvasView::setController(PatchWindowController* c)
{
    _controller = c;

    _objectMaker->setParentController(_controller);

    // connect(_pmProperties, &QAction::triggered, _controller, &PatchWindowController::openPropertiesWindow);
}

// todo fix

// ------------------------------

QPoint CanvasView::newObjectPos() { return _newObjectPos; }

UIObject* CanvasView::dragObject() { return _dragObject; }
void CanvasView::setDragObject(UIObject* object) { _dragObject = object; }

float CanvasView::getZoom() { return _zoom; }

t_editMode CanvasView::getEditMode() { return *_canvasEditMode; }
t_editMode* CanvasView::getEditModeRef() { return _canvasEditMode; }

bool CanvasView::gridSnap() { return _gridSnap; }
int CanvasView::gridStep() { return _grid->gridStep(); }

void CanvasView::setKeepPdObject(bool v) { _keepPdObject = v; }
bool CanvasView::keepPdObject() { return _keepPdObject; }

void CanvasView::setReadOnly(bool val)
{
    _readOnly = val;

    if (_readOnly)
        setEditMode(em_Locked);
}

bool CanvasView::readOnly() { return _readOnly; }

// -- NEW ---------------------------------------

void CanvasView::resizeEvent(QResizeEvent*)
{
    _grid->setSize(size());
    _grid->move(0, 0);
}

// end namespace
}
