// (c) 2017 Alex Nadzharov
// License: GPL3

#include "Canvas.h"

#include "FileParser.h"

namespace qtpd {

static const QSize EmptyCanvasSize = QSize(300, 200);

Canvas::Canvas(QGraphicsView* parent)
    : QGraphicsView(parent)
{

    //test
    //setFixedSize(400, 300);

    setMouseTracking(true);

    _newLine = new NewLine;
    _newLine->setActive(false);

    _selectionRect = new SelectionRect;
    _selectionRect->setActive(false);

    fileName = "";

    Canvas::setEditMode(em_Unlocked);

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
    setPdObject(0); //extra

    _readOnly = false;

    _objectMaker = new ObjectMaker((QLineEdit*)this);
    _objectMaker->hide();

    _replaceObject = 0;

    _filePath = Preferences::inst().get("Patches")->asQString();

    // ------NEW
    setStyleSheet("QGraphicsView { border-style: none; }");
    setMouseTracking(true);

    scale(1, 1);
    _zoom = 1;
}

// ---------------------------------------------

void Canvas::s_InMousePressed(UIItem* obj, QGraphicsSceneMouseEvent*)
{
    qDebug("in: mouse pressed\n");
    _newLine->setActive(false);

    if ((_connectionStartObject) && (_connectionStartOutlet)) {
        patchcord(_connectionStartObject, _connectionStartOutlet, (UIObject*)obj->parent(), obj);

        viewport()->update();
    }

    _connectionStartObject = 0;
    _connectionStartOutlet = 0;
}

void Canvas::s_InMouseReleased(UIItem*, QGraphicsSceneMouseEvent*) {}

void Canvas::s_OutMousePressed(UIItem* obj, QGraphicsSceneMouseEvent*)
{
    qDebug("out: mouse pressed\n");

    _newLine->setStart(((UIItem*)obj->parent())->pos().toPoint() + obj->pos().toPoint() + QPoint(5, 1)); //((QWidget*)obj->parent())->pos() +
    _newLine->setActive(true);

    _connectionStartObject = (UIObject*)obj->parent();
    _connectionStartOutlet = (UIObject*)obj;
}

void Canvas::s_OutMouseReleased(UIItem*, QGraphicsSceneMouseEvent*) {}

void Canvas::selectBox(UIItem* box)
{
    qDebug() << "canvas selectbox";

    _canvasData.selectBox((UIObject*)box);

    viewport()->update(); //
}

void Canvas::s_SelectBox(UIItem* box, QGraphicsSceneMouseEvent* ev)
{

    qDebug() << "select box";

    if (Canvas::getEditMode() == em_Unlocked) {
        if (!(ev->modifiers() & Qt::ShiftModifier))
            if (_canvasData.selectedBoxes()->size() < 2)
                if (_canvasData.selectedBoxes()->size() == 1)
                    if (_canvasData.findBox(_canvasData.selectedBoxes(), (UIObject*)box) == -1) //fix
                    {
                        qDebug() << "deselect";
                        _canvasData.deselectBoxes();

                    } else {
                        qDebug() << "edit";
                        objectStartsEdit((void*)box);
                    }
                else
                    qDebug() << "size" << _canvasData.selectedBoxes()->size();

        selectBox(box);
    }

    //temporary
    setDragObject(0);

    viewport()->update();
}

void Canvas::s_MoveBox(UIItem* box, QGraphicsSceneMouseEvent* event)
{
    if (!(Canvas::getEditMode() == em_Unlocked))
        return;
    for (int i = 0; i < (int)_canvasData.selectedBoxes()->size(); i++) {
        UIObject* w = ((UIObject*)_canvasData.selectedBoxes()->at(i));
        QPoint pos = (((UIObject*)_canvasData.selectedBoxes()->at(i))->pos().toPoint()) + mapToParent((event->pos().toPoint() - box->dragOffset));

        if (_gridSnap) {
            pos.setX(ceil(pos.x() / _grid->gridStep()) * _grid->gridStep());
            pos.setY(ceil(pos.y() / _grid->gridStep()) * _grid->gridStep());
        }

        w->move(pos);
        t_object* obj = (t_object*)w->pdObject();
        if (obj)
            cmp_moveobject(obj, (int)pos.x(), (int)pos.y());

        //todo
        viewport()->update();
    }

    //setFixedSize(minimumCanvasSize());
}

// -----------------------------------------------------------------------

void Canvas::addInlet()
{
}

void Canvas::addOutlet()
{
}

// ------------------------------------------------------------------------

void Canvas::mouseMoveEvent(QMouseEvent* ev)
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

        for (int i = 0; i < (int)_canvasData.boxes()->size(); i++) {
            QPointF pos = ((UIBox*)_canvasData.boxes()->at(i))->pos();
            QPoint pos_ = QPoint(pos.x(), pos.y());
            QSizeF size = ((UIBox*)_canvasData.boxes()->at(i))->size();
            QRect r = QRect(pos_, pos_ + QPoint(size.width(), size.height()));

            QRect frame = QRect(_selectionRect->start(), _selectionRect->start() + _selectionRect->end());

            if (frame.contains(r, false)) {
                ((UIBox*)_canvasData.boxes()->at(i))->select();
                //_selectionData.addUniqueBox(_canvasData.boxes()->at(i));
                _canvasData.selectBox(_canvasData.boxes()->at(i));
            } else {
                ((UIBox*)_canvasData.boxes()->at(i))->deselect();

                auto it = std::find(_canvasData.selectedBoxes()->begin(), _canvasData.selectedBoxes()->end(), _canvasData.boxes()->at(i));
                if (it != _canvasData.selectedBoxes()->end()) {
                    _canvasData.selectedBoxes()->erase(it);
                }
            }
        }

        viewport()->update();
    }

    //todo
    if (_newLine->active()) {
        viewport()->update();
    }
}

void Canvas::mousePressEvent(QMouseEvent* ev)
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

    _canvasData.deselectBoxes();
    _canvasData.deselectPatchcords();

    //deselect
    // TODO
    //    hoverPatchcordsOff();

    //setFocus();

    if (Canvas::getEditMode() == em_Unlocked) {
        //sel frame
        _selectionRect->setActive(true); // = true;
        _selectionRect->setStart(ev->pos());
        _selectionRect->setEnd(QPoint(0, 0));
    }

    if (_objectMaker->isVisible()) {
        //_objectMaker->cancel();
        _objectMaker->done();
    }
}

void Canvas::mouseReleaseEvent(QMouseEvent* ev)
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

UIObject* Canvas::createObject(QString objectData1, QPoint pos) //std::string UIObjectItemName,
{

    qDebug("!!!");

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
            //Canvas* newCanvas = (Canvas*)newPatch.second;

            UIObject* obj = UISubpatch::createObject(objectData1, 0, this);

            ((UISubpatch*)obj)->setSubpatchWindow(subPatch);

            //qDebug()<<"objdata1" << objectData1;
            qDebug("subpatch>>");

            subPatch->show();

            connect(obj, &UIObject::selectBox, this, &Canvas::s_SelectBox);
            connect(obj, &UIObject::moveBox, this, &Canvas::s_MoveBox);

            obj->setEditModeRef(&_canvasEditMode); //Canvas::getEditModeRef());
            obj->move(pos.x(), pos.y());
            _canvasData.addUniqueBox(_canvasData.boxes(), obj);
            scene()->addItem(obj);

            return obj;
        }

        if (list.at(0) == "restore") {
            // unused?
            return 0;
        }
    }

    UIObject* obj = ObjectLoader::inst().createObject(objectData1, (t_canvas*)pdObject(), this);

    //obj->setCanvas((void*)this);

    connect(obj, &UIObject::selectBox, this, &Canvas::s_SelectBox);
    connect(obj, &UIObject::moveBox, this, &Canvas::s_MoveBox);

    obj->setEditModeRef(&_canvasEditMode); //Canvas::getEditModeRef());
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

    connect(obj, &UIObject::editObject, this, &Canvas::objectStartsEdit);

    //if (drawStyle() == ds_Canvas)

    //setFixedSize(minimumCanvasSize());

    return (UIObject*)obj;
}

UIObject* Canvas::createBoxForPatchWindow(QMainWindow* patchWindow, QString objectData, QPoint pos)
{
    std::pair<QMainWindow*, UIObject*> newPatch;

    UIObject* obj = UISubpatch::createObject(objectData, 0, this);
    ((UIBox*)obj)->setSubpatchWindow((QMainWindow*)patchWindow);

    qDebug("subpatch restored>>");

    patchWindow->show();

    connect(obj, &UIObject::selectBox, this, &Canvas::s_SelectBox);
    connect(obj, &UIObject::moveBox, this, &Canvas::s_MoveBox);

    obj->setEditModeRef(&_canvasEditMode); //Canvas::getEditModeRef());
    obj->move(pos.x(), pos.y());
    _canvasData.addUniqueBox(_canvasData.boxes(), obj);
    scene()->addItem(obj);

    return obj;
}

void Canvas::patchcord(UIObject* obj1, int outlet, UIObject* obj2, int inlet)
{
    if (obj1->pdObject() && obj2->pdObject()) {
        if (((UIBox*)obj1)->errorBox()) {
            //create dummy inlets / outlets
            qDebug() << "errorbox";
        };
        if (((UIBox*)obj2)->errorBox()) {
            //create dummy inlets / outlets
            qDebug() << "errorbox";
        };

        Port* outport = obj1->outletAt(outlet);
        Port* inport = obj2->inletAt(inlet);

        Patchcord* pc = new Patchcord(obj1, outport, obj2, inport);

        if (obj1->pdOutletType(outlet))
            pc->setPatchcordType(cm_pt_signal);

        qDebug("pdlib patchcord");
        cmp_patchcord((t_object*)obj1->pdObject(), outlet, (t_object*)obj2->pdObject(), inlet);
        _canvasData.addPatchcord(pc); //patchcords()->push_back(pc);

        scene()->addItem(pc);
    } else
        qDebug("canvas patchcord error");
}

void Canvas::patchcord(UIObject* obj1, UIItem* outport, UIObject* obj2, UIItem* inport)
{

    //todo

    int n1 = ((Port*)outport)->portIndex();
    int n2 = ((Port*)inport)->portIndex();
    patchcord(obj1, n1, obj2, n2);
}

void Canvas::deletePatchcordsFor(UIItem* obj)
{
    //for //(int i=0;i<data_.patchcords()->size();i++)
    std::vector<Patchcord*>::iterator it;
    for (it = _canvasData.patchcords()->begin(); it != _canvasData.patchcords()->end();) {
        if ((*it)->connectsObject(obj)) {
            scene()->removeItem(*it);
            it = _canvasData.patchcords()->erase(it);
        } else
            ++it;
    }

    //viewport()->update();
}

////
/// \brief delete single box
///
void Canvas::deleteBox(UIObject* box)
{
    _canvasData.deselectBoxes();
    //_selectionData.addUniqueBox(box);
    _canvasData.selectBox(box);
    deleteSelectedBoxes();
}

////
/// \brief delete all selected object boxes()
///
void Canvas::deleteSelectedBoxes()
{
    qDebug("del selected");

    objectVec::iterator it;
    for (it = _canvasData.selectedBoxes()->begin(); it != _canvasData.selectedBoxes()->end(); ++it)

    {
        //
        UIObject* box = *it;
        qDebug("delete %lu | %lu", (long)box, (long)box->pdObject());

        if (box->pdObject()) {
            //NEEDS FIX
            if ((t_object*)(box->pdObject())) {
                if (!box->errorBox())
                    cmp_deleteobject((t_canvas*)pdObject(), (t_object*)box->pdObject());
                box->setPdObject(0);
            }
        } else {
            qDebug("didn't delete pd object");
        }

        deletePatchcordsFor(box);

        scene()->removeItem(box);
        viewport()->update();
        //box->close();

        _canvasData.boxes()->erase(std::remove(_canvasData.boxes()->begin(), _canvasData.boxes()->end(), *it), _canvasData.boxes()->end());
        //selectionData_.boxes()->erase(std::remove(selectionData_.boxes()->begin(), selectionData_.boxes()->end(), *it), selectionData_.boxes()->end());
    }

    _canvasData.selectedBoxes()->clear();
    ;
}

////
/// \brief delete all selected patchcords()
///
void Canvas::delSelectedPatchcords()
{
    //cleanup
    //for (int i=0;i<data_.patchcords()->size(); i++)
    std::vector<Patchcord*>::iterator it;
    for (it = _canvasData.patchcords()->begin(); it != _canvasData.patchcords()->end();) {
        if ((*it)->isSelected()) {
            Patchcord* p = *it;

            t_object* obj1 = (t_object*)p->obj1()->pdObject();
            t_object* obj2 = (t_object*)p->obj2()->pdObject();

            if (obj1 && obj2) {
                int out1 = p->outletIndex();
                int in2 = p->inletIndex();

                if ((out1 >= 0) && (in2 >= 0))
                    cmp_delete_patchcord(obj1, out1, obj2, in2);
                else
                    qDebug("object error. didn't delete pd patchcord");
            } else
                qDebug("object error. didn't delete pd patchcord");

            it = _canvasData.patchcords()->erase(it);
        } else
            ++it;
    }

    //viewport()->update();
}

void Canvas::setEditMode(t_editMode mode)
{

    if (_readOnly)
        _canvasEditMode = em_Locked;
    else
        _canvasEditMode = mode;

    QColor lockedColor = (_readOnly) ? QColor(245, 245, 255) : QColor(245, 245, 245);
    QColor bgColor = (mode != em_Locked) ? QColor(255, 255, 255) : lockedColor;
    if (scene())
        setBackgroundBrush(QBrush(bgColor));

    if (_grid)
        if (scene())
            _grid->setVisible(_canvasEditMode != em_Locked);

    if (mode == em_Locked) {
        _canvasData.deselectBoxes();
        _canvasData.deselectPatchcords();
        //        hoverPatchcordsOff();
    }
}

UIObject* Canvas::getObjectByIndex(int idx)
{
    if ((idx < (int)_canvasData.boxes()->size()) && (idx >= 0))
        return _canvasData.boxes()->at(idx);
    else {
        qDebug("object not found");
        return 0;
    }
}

void Canvas::setGridEnabled(bool val)
{
    _grid->setVisible(val);
}

void Canvas::setGridSnap(bool val)
{
    _gridSnap = val;
}

objectVec Canvas::objectBoxes()
{
    return *_canvasData.boxes();
}

patchcordVec Canvas::patchcords()
{
    return *_canvasData.patchcords();
}

objectVec Canvas::selectedObjectBoxes()
{
    return *_canvasData.selectedBoxes();
}

patchcordVec Canvas::selectedPatchcords()
{
    return *_canvasData.selectedPatchcords();
}

patchcordVec Canvas::patchcordsForObject(UIObject* obj)
{
    patchcordVec ret;

    patchcordVec::iterator it;
    for (it = _canvasData.patchcords()->begin(); it != _canvasData.patchcords()->end(); ++it) {
        if (
            (((Patchcord*)*it)->obj1() == obj)
            || (((Patchcord*)*it)->obj2() == obj)) {
            ret.push_back(*it);
        }
    }

    return ret;
}

int Canvas::findObjectIndex(UIObject* obj)
{

    return _canvasData.findObjectIndex(obj);
}

std::string Canvas::asPdFileString()
{

    // todo cleanup
    std::string ret;

    ret = "#N canvas ";
    ret += std::to_string(x()) + " ";
    ret += std::to_string(y()) + " ";
    ret += std::to_string(width()) + " ";
    ret += std::to_string(height()) + " ";
    ret += "10; \r\n";

    return ret;

    return "";
}

std::string Canvas::patchcordAsPdFileString(Patchcord* pcord)
{
    //TODO

    int obj1i = findObjectIndex(pcord->obj1());
    int obj2i = findObjectIndex(pcord->obj2());

    if ((obj1i >= 0) && (obj2i >= 0)) {
        std::string ret;

        ret += std::to_string(obj1i) + " ";
        ret += std::to_string(pcord->outletIndex()) + " ";

        ret += std::to_string(obj2i) + " ";
        ret += std::to_string(pcord->inletIndex()) + " ";

        return ret;

    } else
        qDebug("patchcord to string error");

    return "";
}

structPatchcordNumbers Canvas::patchcordAsNumbers(Patchcord* pcord)
{
    //TODO

    structPatchcordNumbers ret;

    int obj1i = findObjectIndex(pcord->obj1());
    int obj2i = findObjectIndex(pcord->obj2());

    if ((obj1i >= 0) && (obj2i >= 0)) {
        //std::string ret;

        ret.obj1 = (obj1i);
        ret.out1 = pcord->outletIndex();

        ret.obj2 = (obj2i);
        ret.in2 = pcord->inletIndex();

    } else {
        qDebug("patchcord to string error");
        ret.obj1 = 0;
        ret.obj2 = 0;
        ret.out1 = 0;
        ret.in2 = 0;
    }

    return ret;
}

void Canvas::selectObject(UIObject* obj)
{
    obj->select();
    _canvasData.selectBox(obj);
}

void Canvas::selectAll()
{
    qDebug("select all");
    objectVec::iterator it;
    for (it = _canvasData.boxes()->begin(); it != _canvasData.boxes()->end(); ++it) {
        selectObject(*it);
    }

    //selectionData_.patchcords()_ = data_.patchcords()_;
}

void Canvas::resizeToObjects()
{
}

QStringList Canvas::canvasAsPdStrings()
{

    QStringList ret;

    //save canvas
    //todo canvas is subpatch flag
    std::string out1;

    out1 = asPdFileString(); //"#N canvas 0 0 400 300 10;\r\n";     //temporary

    ret.append(out1.c_str());

    ret += _canvasData.objectsAsPdFileStrings();

    return ret;
}

void Canvas::canvasFromPdStrings(QStringList strings)
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

void Canvas::cancelPatchcord()
{
    _newLine->setActive(false);

    // TODO
    viewport()->update();
}

ObjectMaker* Canvas::objectMaker()
{
    return _objectMaker;
}

void Canvas::portLocalCountUpdated()
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

void Canvas::setReplaceObject(UIObject* obj)
{
    _replaceObject = obj;
}

UIObject* Canvas::replaceObject()
{
    return _replaceObject;
}

void Canvas::showNewObjectMaker()
{

    objectMaker()->move(_newObjectPos);
    objectMaker()->setFixedSize(60, 20);
    objectMaker()->setFocus();

    //dragObject = (QGraphicsView*)objectMaker();
    objectMaker()->setText(QString(""));
    objectMaker()->show();
}

void Canvas::portCountUpdated()
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

void Canvas::objectStartsEdit(void* obj)
{
    _canvasData.deselectBoxes();

    qDebug("edit box>>");

    _replaceObject = (UIObject*)obj;

    objectMaker()->move(_replaceObject->pos().toPoint());
    objectMaker()->setFixedSize(_replaceObject->size());
    objectMaker()->setText(QString(_replaceObject->objectData().c_str()));
    objectMaker()->setFocus();
    //replaceObject_->hide();
    objectMaker()->show();
    objectMaker()->raise();
}

QSize Canvas::minimumCanvasSize()
{
    objectVec::iterator it;

    QSize ret = QSize(300, 200); //EmptyCanvasSize;

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

    return ret;
}

void Canvas::setWindowSize(QSize wsize)
{
    _windowSize = wsize;
}

// ==========================================

void Canvas::dataCut()
{

    if (!_canvasData.hasSelectedObjects())
        return;

    _canvasData.cut();

    deleteSelectedBoxes();
}

void Canvas::dataCopy()
{
    if (!_canvasData.hasSelectedObjects())
        return;

    _canvasData.cut();

    qDebug() << "***copy\n"
             << Clipboard::inst()->get();
}

void Canvas::dataDuplicate()
{
    Canvas::dataCopy();
    Canvas::dataPaste();
}

void Canvas::dataPaste()
{

    qDebug() << "***paste:\n"
             << Clipboard::inst()->get();

    if (Clipboard::inst()->get().size() < 1)
        return;

    QStringList list1;

    for (size_t i = 0; i < Clipboard::inst()->size(); i++) {
        QString str = Clipboard::inst()->at(i);

        QStringList subList = str.split(" ");

        // offset copied objects
        if (subList.size() > 4) {
            if (subList.at(1) == "obj") {
                int x = ((QString)subList.at(2)).toInt();
                int y = ((QString)subList.at(3)).toInt();

                subList[2] = QString::number(x + 20);
                subList[3] = QString::number(y + 20);
            }

            Clipboard::inst()->setStringAt(i, subList.join(" "));
            FileParser::parseQString(Clipboard::inst()->at(i));
        }
    }
}

// end namespace
}
