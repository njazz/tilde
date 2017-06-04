// (c) 2017 Alex Nadzharov
// License: GPL3

#include "CanvasView.h"

#include "FileParser.h"

namespace qtpd {

static const QSize EmptyCanvasSize = QSize(300, 200);

CanvasView::CanvasView(QGraphicsView* parent)
    : QGraphicsView(parent)
{

    //test
    //setFixedSize(400, 300);

    setMouseTracking(true);

    _newLine = new UINewPatchcord;
    _newLine->setActive(false);

    _selectionRect = new SelectionRect;
    _selectionRect->setActive(false);

    //_fileName = "";

    _canvasEditMode = new t_editMode;
    //    qDebug() << "new em ref";

    CanvasView::setEditMode(em_Unlocked);

    _grid = new Grid;
    setScene(new QGraphicsScene(0, 0, 400, 300, this));
    scene()->addItem(_grid);
    scene()->addItem(_newLine);
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

    _replaceObject = 0;

    // ------NEW
    setStyleSheet("QGraphicsView { border-style: none; }");
    setMouseTracking(true);

    scale(1, 1);
    _zoom = 1;

    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

    objectMaker()->close();
}

// ---------------------------------------------

void CanvasView::slotInletMousePress(UIItem* obj, QGraphicsSceneMouseEvent*)
{
    qDebug("in: mouse pressed\n");
    _newLine->setActive(false);

    if ((_connectionStartObject) && (_connectionStartOutlet)) {

        //patchcord(_connectionStartObject, _connectionStartOutlet, (UIObject*)obj->parent(), obj);

        int nOut = ((Port*)_connectionStartOutlet)->portIndex();
        int nIn = ((Port*)obj)->portIndex();

        emit signalPatchcord(_connectionStartObject, nOut, (UIObject*)obj->parent(), nIn);

        viewport()->update();
    }

    _connectionStartObject = 0;
    _connectionStartOutlet = 0;
}

void CanvasView::slotInletMouseRelease(UIItem*, QGraphicsSceneMouseEvent*) {}

void CanvasView::slotOutletMousePressed(UIItem* obj, QGraphicsSceneMouseEvent*)
{
    qDebug("out: mouse pressed\n");

    _newLine->setStart(((UIItem*)obj->parent())->pos().toPoint() + obj->pos().toPoint() + QPoint(5, 1)); //((QWidget*)obj->parent())->pos() +
    _newLine->setActive(true);

    _connectionStartObject = (UIObject*)obj->parent();
    _connectionStartOutlet = (UIObject*)obj;
}

void CanvasView::slotOutletMouseReleased(UIItem*, QGraphicsSceneMouseEvent*) {}

//void CanvasView::selectBox(UIItem* box)
//{
//    qDebug() << "canvas selectbox";

//    _canvasData.selectBox((UIObject*)box);

//    viewport()->update(); //
//}

void CanvasView::slotSelectBox(UIItem* box, QGraphicsSceneMouseEvent* ev)
{

    qDebug() << "select box";

    if (box->isSelected()) {
        slotObjectStartsEdit((void*)box);
        return;
    }

    if (CanvasView::getEditMode() == em_Unlocked) {

        if (!(ev->modifiers() & Qt::ShiftModifier)) {
            emit signalDeselectObjects();
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

    //workaround
    if (_objectMaker->isVisible()) {
        _objectMaker->setFocus();
        return;
    }

    QGraphicsView::mouseMoveEvent(ev);

    if (!ev)
        return;

    //    if (ev->isAccepted())
    //        return;

    //    qDebug() << "canvas mouse move accepted";

    QPoint pos = ev->pos();

    if (!_objectMaker->isVisible())
        _newObjectPos = pos;

    _selectionRect->setEnd(pos - _selectionRect->start());
    _newLine->setEnd(pos);

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
    if (_newLine->active()) {
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
    if (ev->button() == Qt::RightButton) {
        //QPoint pos = mapToGlobal(ev->pos());
        //showPopupMenu(pos);
        ev->accept();
        return;
    }

    // TODO
    //_canvasData.deselectBoxes();
    //_canvasData.deselectPatchcords();

    //deselect
    // TODO
    //    hoverPatchcordsOff();

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

    qDebug("canvas mouseup");

    QGraphicsView::mouseReleaseEvent(ev);

    //    if (ev->isAccepted())
    //        return;

    qDebug("canvas mouseup accepted");

    setDragObject(0);

    _selectionRect->setActive(false);

    //todo
    viewport()->update();

    QPoint pos = ev->pos();
    emit signalMouseRelease(pos);
}

// ---------------------------------------------------------------------------

//void Canvas::deselectBoxes()
//{
//    for (int i = 0; i < (int)_canvasData.selectedBoxes()->size(); i++) {
//        if (_canvasData.selectedBoxes()->at(i))

//            ((UIBox*)_canvasData.selectedBoxes()->at(i))->deselect();
//    }

//    _canvasData.selectedBoxes()->clear();

//    viewport()->update();
//}

// ====================================================================================

/*

UIObject* CanvasView::createObject(QString objectData1, QPoint pos) //std::string UIObjectItemName,
{

    qDebug("* create object *");

    //pos = objectMaker()->pos();

    QStringList list = objectData1.split(" ");

    //this is moved here to have all checks for special objects in one place
    //(later - inlets/outlets)

    if (list.count()) {

        if (list.at(0) == "pd") {
            //lol
            std::pair<QMainWindow*, UIObject*> newPatch;

            // todo return just QMainWindow
            newPatch = emit createSubpatchWindow();

            QMainWindow* subPatch = newPatch.first;
            UIObject* obj = UISubpatch::createObject(objectData1, 0, this);

            ((UISubpatch*)obj)->setSubpatchWindow(subPatch);

            //qDebug()<<"objdata1" << objectData1;
            qDebug("subpatch>>");

            subPatch->show();

            connect(obj, &UIObject::selectBox, this, &CanvasView::s_SelectBox);
            connect(obj, &UIObject::moveBox, this, &CanvasView::s_MoveBox);

            obj->setEditModeRef(_canvasEditMode); //Canvas::getEditModeRef());
            obj->move(pos.x(), pos.y());
            _canvasData.addUniqueBox(_canvasData.boxes(), obj);
            scene()->addItem(obj);

            return obj;
        }

        // temporary to check G-O-P
        if (list.at(0) == "pds") {
            //lol
            std::pair<QMainWindow*, UIObject*> newPatch;

            // todo return just QMainWindow
            newPatch = emit createSubpatchWindow();

            QMainWindow* subPatch = newPatch.first;
            UIObject* obj = UISubpatch::createObject(objectData1, 0, this);

            ((UISubpatch*)obj)->setSubpatchWindow(subPatch);

            //qDebug()<<"objdata1" << objectData1;
            qDebug("subpatch>>");

            subPatch->show();

            connect(obj, &UIObject::selectBox, this, &CanvasView::s_SelectBox);
            connect(obj, &UIObject::moveBox, this, &CanvasView::s_MoveBox);

            obj->setEditModeRef(_canvasEditMode); //Canvas::getEditModeRef());
            obj->move(pos.x(), pos.y());
            _canvasData.addUniqueBox(_canvasData.boxes(), obj);
            scene()->addItem(obj);

            //temp
            obj->setSize(400, 300);

            return obj;
        }

        if (list.at(0) == "restore") {
            // unused?
            return 0;
        }
    }

    UIObject* obj = ObjectLoader::inst().createObject(objectData1, (t_canvas*)pdObject(), this);

    //obj->setCanvas((void*)this);

    connect(obj, &UIObject::selectBox, this, &CanvasView::s_SelectBox);
    connect(obj, &UIObject::moveBox, this, &CanvasView::s_MoveBox);

    obj->setEditModeRef(_canvasEditMode); //Canvas::getEditModeRef());
    obj->move(pos.x(), pos.y());
    _canvasData.addUniqueBox(_canvasData.boxes(), obj);
    scene()->addItem(obj);

    //qDebug() << "created object: [" << objectData1 << "] :" << list.count() << "@" << QString(std::to_string((long)pdObject()).c_str());

    if (list.count()) {
        if (
            (list.at(0) == "inlet") || (list.at(0) == "inlet~") || (list.at(0) == "outlet") || (list.at(0) == "outlet~")) {
            //qDebug("ports");
            emit updatePortCount();
            //

            portLocalCountUpdated();
        }
    }

    connect(obj, &UIObject::editObject, this, &CanvasView::objectStartsEdit);

    //if (drawStyle() == ds_Canvas)

    //setFixedSize(minimumCanvasSize());

    resizeToObjects();

    return (UIObject*)obj;
}

*/

// ====================================================================================

// TODO ???
/*
UIObject* CanvasView::createBoxForPatchWindow(QMainWindow* patchWindow, QString objectData, QPoint pos)
{
    std::pair<QMainWindow*, UIObject*> newPatch;

    UIObject* obj = UISubpatch::createObject(objectData, 0, this);
    ((UIBox*)obj)->setSubpatchWindow((QMainWindow*)patchWindow);

    qDebug("subpatch restored>>");

    //patchWindow->show();

    connect(obj, &UIObject::selectBox, this, &CanvasView::signalSelectBox);
    connect(obj, &UIObject::moveBox, this, &CanvasView::signalMoveBox);

    obj->setEditModeRef(_canvasEditMode); //Canvas::getEditModeRef());
    obj->move(pos.x(), pos.y());

    // TODO
    //_canvasData.addUniqueBox(_canvasData.boxes(), obj);

    scene()->addItem(obj);

    resizeToObjects();

    return obj;
}
*/

//void CanvasView::patchcord(UIObject* obj1, int outlet, UIObject* obj2, int inlet)
//{

//    if (obj1->serverObject() && obj2->serverObject()) {
//        if (((UIBox*)obj1)->errorBox()) {
//            //create dummy inlets / outlets
//            qDebug() << "errorbox";
//        };

//        if (((UIBox*)obj2)->errorBox()) {
//            //create dummy inlets / outlets
//            qDebug() << "errorbox";
//        };

//        Port* outport = obj1->outletAt(outlet);
//        Port* inport = obj2->inletAt(inlet);

//        UIPatchcord* pc = new UIPatchcord(obj1, outport, obj2, inport);

//        if (obj1->pdOutletType(outlet))
//            pc->setPatchcordType(cm_pt_signal);

//        qDebug("server patchcord");

//        qDebug() << "pc: " <<  obj1->serverObject() << outlet << obj2->serverObject() << inlet ;

//        // TODO
//        // _canvasData.serverCanvas()->connect(obj1->serverObject(), outlet, obj2->serverObject(), inlet);
//        // _canvasData.addPatchcord(pc);

//        //        cmp_patchcord((t_object*)obj1->pdObject(), outlet, (t_object*)obj2->pdObject(), inlet);
//        //        _canvasData.addPatchcord(pc); //patchcords()->push_back(pc);

//        scene()->addItem(pc);
//    } else
//        qDebug("canvas patchcord error");
//}

//void CanvasView::patchcord(UIObject* obj1, UIItem* outport, UIObject* obj2, UIItem* inport)
//{

//    //todo

//    int n1 = ((Port*)outport)->portIndex();
//    int n2 = ((Port*)inport)->portIndex();
//    patchcord(obj1, n1, obj2, n2);
//}

//void CanvasView::deletePatchcordsFor(UIItem* obj)
//{
//    //for //(int i=0;i<data_.patchcords()->size();i++)
//    std::vector<UIPatchcord*>::iterator it;
//    for (it = _canvasData.patchcords()->begin(); it != _canvasData.patchcords()->end();) {
//        if ((*it)->isConnectedToObject(obj)) {
//            scene()->removeItem(*it);
//            it = _canvasData.patchcords()->erase(it);
//        } else
//            ++it;
//    }

//    viewport()->update();
//}

////
/// \brief delete single box
///
//void CanvasView::deleteObject(UIObject* box)
//{
//    _canvasData.deselectBoxes();
//    //_selectionData.addUniqueBox(box);
//    _canvasData.selectBox(box);
//    deleteSelectedObjects();
//}

//////
///// \brief delete all selected object boxes()
/////
//void CanvasView::deleteSelectedObjects()
//{
//    qDebug("del selected");

//    objectVec::iterator it;
//    for (it = _canvasData.selectedBoxes()->begin(); it != _canvasData.selectedBoxes()->end(); ++it)

//    {
//        //
//        UIObject* box = *it;
//        qDebug("delete %lu | %lu", (long)box, (long)box->pdObject());

//        if (box->pdObject()) {
//            //NEEDS FIX
//            if ((t_object*)(box->pdObject())) {
//                if (!box->errorBox())
//                    cmp_deleteobject((t_canvas*)pdObject(), (t_object*)box->pdObject());
//                box->setPdObject(0);
//            }
//        } else {
//            qDebug("didn't delete pd object");
//        }

//        deletePatchcordsFor(box);

//        scene()->removeItem(box);
//        viewport()->update();
//        //box->close();

//        _canvasData.boxes()->erase(std::remove(_canvasData.boxes()->begin(), _canvasData.boxes()->end(), *it), _canvasData.boxes()->end());
//        //selectionData_.boxes()->erase(std::remove(selectionData_.boxes()->begin(), selectionData_.boxes()->end(), *it), selectionData_.boxes()->end());
//    }

//    _canvasData.selectedBoxes()->clear();
//    ;
//}

//////
///// \brief delete all selected patchcords()
/////
//void CanvasView::deleteSelectedPatchcords()
//{
//    qDebug() << "del selected patchcords";

//    //cleanup
//    //for (int i=0;i<data_.patchcords()->size(); i++)
//    std::vector<UIPatchcord*>::iterator it;
//    for (it = _canvasData.patchcords()->begin(); it != _canvasData.patchcords()->end();) {
//        UIPatchcord* p = *it;

//        if (p->isSelected()) {

//            t_object* obj1 = (t_object*)p->obj1()->pdObject();
//            t_object* obj2 = (t_object*)p->obj2()->pdObject();

//            if (obj1 && obj2) {
//                int out1 = p->outletIndex();
//                int in2 = p->inletIndex();

//                if ((out1 >= 0) && (in2 >= 0))
//                    cmp_delete_patchcord(obj1, out1, obj2, in2);
//                else
//                    qDebug("object error. didn't delete pd patchcord");
//            } else
//                qDebug("object error. didn't delete pd patchcord");

//            scene()->removeItem(p);
//            //qDebug() << "remove item";

//            it = _canvasData.patchcords()->erase(it);

//        } else
//            ++it;
//    }

//    _canvasData.selectedPatchcords()->clear();
//    update();
//}

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

//UIObject* CanvasView::getObjectByIndex(int idx)
//{
//    // getobjbyindex
//    // TODO
//    /*
//    if ((idx < (int)_canvasData.boxes()->size()) && (idx >= 0))
//        return _canvasData.boxes()->at(idx);
//    else {
//        qDebug("object not found");
//        return 0;
//    }
//    */
//}

void CanvasView::setGridEnabled(bool val)
{
    _grid->setVisible(val);
}

void CanvasView::setGridSnap(bool val)
{
    _gridSnap = val;
}

//objectVec CanvasView::objectBoxes()
//{
//    return *_canvasData.boxes();
//}

//patchcordVec CanvasView::patchcords()
//{
//    return *_canvasData.patchcords();
//}

//objectVec CanvasView::selectedObjectBoxes()
//{
//    return *_canvasData.selectedBoxes();
//}

//patchcordVec CanvasView::selectedPatchcords()
//{
//    return *_canvasData.selectedPatchcords();
//}

// TODO MOVE

//int CanvasView::findObjectIndex(UIObject* obj)
//{

//    return _canvasData.findObjectIndex(obj);
//}

//std::string CanvasView::asPdFileString()
//{

//    // todo cleanup
//    std::string ret;

//    ret = "#N canvas ";
//    ret += std::to_string(x()) + " ";
//    ret += std::to_string(y()) + " ";
//    ret += std::to_string(width()) + " ";
//    ret += std::to_string(height()) + " ";
//    ret += "10; \r\n";

//    return ret;
//}

//std::string CanvasView::patchcordAsPdFileString(UIPatchcord* pcord)
//{
//    //TODO

//    int obj1i = findObjectIndex(pcord->obj1());
//    int obj2i = findObjectIndex(pcord->obj2());

//    if ((obj1i >= 0) && (obj2i >= 0)) {
//        std::string ret;

//        ret += std::to_string(obj1i) + " ";
//        ret += std::to_string(pcord->outletIndex()) + " ";

//        ret += std::to_string(obj2i) + " ";
//        ret += std::to_string(pcord->inletIndex()) + " ";

//        return ret;

//    } else
//        qDebug("patchcord to string error");

//    return "";
//}

//t_patchcordAsNumbers CanvasView::patchcordAsNumbers(UIPatchcord* pcord)
//{
//    //TODO

//    t_patchcordAsNumbers ret;

//    int obj1i = findObjectIndex(pcord->obj1());
//    int obj2i = findObjectIndex(pcord->obj2());

//    if ((obj1i >= 0) && (obj2i >= 0)) {
//        //std::string ret;

//        ret.obj1 = (obj1i);
//        ret.out1 = pcord->outletIndex();

//        ret.obj2 = (obj2i);
//        ret.in2 = pcord->inletIndex();

//    } else {
//        qDebug("patchcord to string error");
//        ret.obj1 = 0;
//        ret.obj2 = 0;
//        ret.out1 = 0;
//        ret.in2 = 0;
//    }

//    return ret;
//}

//void CanvasView::selectObject(UIObject* obj)
//{
//    // TODO
//    //obj->select();
//    //_canvasData.selectBox(obj);
//}

//void CanvasView::selectAll()
//{
//    qDebug("select all");
//    objectVec::iterator it;
//    for (it = _canvasData.boxes()->begin(); it != _canvasData.boxes()->end(); ++it) {
//        selectObject(*it);
//    }

//    //selectionData_.patchcords()_ = data_.patchcords()_;
//}

void CanvasView::resizeToObjects()
{
    scene()->setSceneRect(scene()->itemsBoundingRect());
    _grid->setSize(scene()->itemsBoundingRect().size().toSize());
}

//QStringList CanvasView::canvasAsPdStrings()
//{

//    QStringList ret;

//    //save canvas
//    //todo canvas is subpatch flag
//    std::string out1;

//    out1 = asPdFileString(); //"#N canvas 0 0 400 300 10;\r\n";     //temporary

//    ret.append(out1.c_str());

//    ret += _canvasData.objectsAsPdFileStrings();

//    return ret;
//}

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
    _newLine->setActive(false);

    // TODO
    viewport()->update();
}

ObjectMaker* CanvasView::objectMaker()
{
    return _objectMaker;
}

void CanvasView::portLocalCountUpdated()
{
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
    objectMaker()->setText(QString(_replaceObject->_objectDataModel.objectData()));
    objectMaker()->setFocus();
    //replaceObject_->hide();
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

// ==========================================

//void CanvasView::dataCut()
//{

//    if (!_canvasData.hasSelectedObjects())
//        return;

//    _canvasData.cut();

//    deleteSelectedObjects();
//}

//void CanvasView::dataCopy()
//{
//    if (!_canvasData.hasSelectedObjects())
//        return;

//    _canvasData.cut();

//    qDebug() << "***copy\n"
//             << Clipboard::inst()->get();
//}

//void CanvasView::dataDuplicate()
//{
//    CanvasView::dataCopy();
//    CanvasView::dataPaste();
//}

//void CanvasView::dataPaste()
//{

//    qDebug() << "***paste:\n"
//             << Clipboard::inst()->get();

//    if (Clipboard::inst()->get().size() < 1)
//        return;

//    QStringList list1;

//    for (size_t i = 0; i < Clipboard::inst()->size(); i++) {
//        QString str = Clipboard::inst()->at(i);

//        QStringList subList = str.split(" ");

//        // offset copied objects
//        if (subList.size() >= 3) {
//            if (subList.at(1) == "obj") {
//                int x = ((QString)subList.at(2)).toFloat();
//                int y = ((QString)subList.at(3)).toFloat();

//                subList[2] = QString::number(x + 20);
//                subList[3] = QString::number(y + 20);
//            }

//            qDebug() << "paste" << subList;

//            Clipboard::inst()->setStringAt(i, subList.join(" "));
//            FileParser::parseQString(Clipboard::inst()->at(i));
//        }
//    }

//    // TODO copy patchcords
//}

// ------------------------------------

void CanvasView::setZoom(float zoom)
{
    if ((_zoom <= .5) && (zoom < 1)) {
        zoom = .5;
        return;
    }
    if ((_zoom > 2) && (zoom > 1)) {
        zoom = 2.;
        return;
    }

    _zoom *= zoom;

    scale(zoom, zoom);
    viewport()->update();
}

// end namespace
}
