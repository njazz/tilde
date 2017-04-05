// (c) 2017 Alex Nadzharov
// License: GPL3

#include "Canvas.h"

#include "FileParser.h"

namespace qtpd {

static const QSize EmptyCanvasSize = QSize(300, 200);

Canvas::Canvas(QGraphicsView* parent)
    : QGraphicsView(parent)
{

    //    QGraphicsScene* sc = new QGraphicsScene;
    //    setScene(sc);
    //    setSceneRect(frameRect());

    //    QPalette Pal;
    //    Pal.setColor(QPalette::Background, Qt::white);
    //    setAutoFillBackground(true);
    //    setPalette(Pal);

    //test
    setFixedSize(400, 300);

    setMouseTracking(true);

    //_selFrame.active = false;

    _newLine = new NewLine;
    _newLine->setActive(false);

    _selectionRect = new SelectionRect;
    _selectionRect->setActive(false);

    //_editMode = em_Unlocked;

    fileName = "";

    //t_editMode* em = new t_editMode;
    //UIItem::setEditModeRef(em);

    Canvas::setEditMode(em_Unlocked);

    //
    //_gridEnabled = true;
    _grid = new Grid;
    setScene(new QGraphicsScene(0, 0, 400, 300, this));
    scene()->addItem(_grid);
    scene()->addItem(_newLine);
    scene()->addItem(_selectionRect);

    _grid->setSize(300, 300);
    _gridSnap = true;
    _grid->setGridStep(20);

    //
    _connectionStartObject = 0;
    _connectionStartOutlet = 0;
    dragObject = 0;
    setPdObject(0); //extra

    //
    //_drawStyle = ds_Canvas;

    _readOnly = false;

    _objectMaker = new ObjectMaker((QLineEdit*)this);
    _objectMaker->hide();

    //
    //setMinimumBoxWidth(40);
    //setMinimumBoxHeight(20);

    _replaceObject = 0;

    _filePath = Preferences::inst().get("Patches")->asQString();

    //setScale(.5);

    //_canvasEditMode = em_Unlocked;

    // ------NEW
    setStyleSheet("QGraphicsView { border-style: none; }");
    //setAcceptHoverEvents(true);
}

//cm_canvas::cm_canvas(QWidget *parent) : cm_widget((cm_widget*)parent)
//{
//    parent()->setParent(parent->parent());

//}

///////

void Canvas::s_InMousePressed(UIItem* obj, QGraphicsSceneMouseEvent*)
{
    qDebug("in: mouse pressed\n");
    _newLine->setActive(false);

    if ((_connectionStartObject) && (_connectionStartOutlet)) {
        patchcord(_connectionStartObject, _connectionStartOutlet, (UIObjectItem*)obj->parent(), obj);

        viewport()->update();
    }

    _connectionStartObject = 0;
    _connectionStartOutlet = 0;
}

void Canvas::s_InMouseReleased(UIItem*, QGraphicsSceneMouseEvent*)
{
    //    qDebug("in:  mouse released\n");
}

void Canvas::s_OutMousePressed(UIItem* obj, QGraphicsSceneMouseEvent*)
{
    qDebug("out: mouse pressed\n");

    //((UIItem*)obj->parent())->pos().toPoint()

    //qDebug() << obj->parent();
    _newLine->setStart(((UIItem*)obj->parent())->pos().toPoint() + obj->pos().toPoint() + QPoint(5, 1)); //((QWidget*)obj->parent())->pos() +
    _newLine->setActive(true);

    _connectionStartObject = (UIObjectItem*)obj->parent();
    _connectionStartOutlet = (UIObjectItem*)obj;
}

void Canvas::s_OutMouseReleased(UIItem*, QGraphicsSceneMouseEvent*)
{
        qDebug("out:  mouse released\n");
}

void Canvas::selectBox(UIItem* box)
{
    qDebug()<<"canvas selectbox";

    _selectionData.addUniqueBox((UIObjectItem*)box);
    box->select();
    //viewport()->update(box->boundingRect().toRect());
    viewport()->update();//
}

void Canvas::s_SelectBox(UIItem* box, QGraphicsSceneMouseEvent* ev)
{


    if (!(ev->modifiers() & Qt::ShiftModifier))
        deselectBoxes();

    if (Canvas::getEditMode() == em_Unlocked) {

        selectBox(box);
    }

    //temporary
    dragObject = 0;

   viewport()->update();
}

//void Canvas::s_SelectBoxItem(UIItem* box, QMouseEvent* ev)
//{

//    if (!(ev->modifiers() & Qt::ShiftModifier)) // && !(ev->modifiers() & Qt::ControlModifier))
//        deselectBoxes();

//    if (Canvas::getEditMode() == em_Unlocked) {
//        // FIX
//        selectBox((UIItem*)box);
//    }

//    //temporary
//    dragObject = 0;

//    //dragPrevPos = box->pos();
//}

void Canvas::s_MoveBox(UIItem* box, QGraphicsSceneMouseEvent* event)
{
    if (!(Canvas::getEditMode() == em_Unlocked))
        return;
    for (int i = 0; i < (int)_selectionData.boxes()->size(); i++) {
        UIObjectItem* w = ((UIObjectItem*)_selectionData.boxes()->at(i));
        QPoint pos = (((UIObjectItem*)_selectionData.boxes()->at(i))->pos().toPoint()) + mapToParent((event->pos().toPoint() - box->dragOffset));

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

    //if (drawStyle() == ds_Canvas)
    setFixedSize(minimumCanvasSize());
}

//void Canvas::s_MoveBoxItem(UIItem* box, QMouseEvent* event)
//{
//    if (!(Canvas::getEditMode() == em_Unlocked))
//        return;
//    for (int i = 0; i < (int)_selectionData.boxes()->size(); i++) {
//        UIObjectItem* w = ((UIObjectItem*)_selectionData.boxes()->at(i));
//        QPoint pos; // = ((UIObjectItem*)_selectionData.boxes()->at(i))->pos() + mapToParent((event->pos() - box->dragOffset));

//        if (_gridSnap) {
//            pos.setX(ceil(pos.x() / _grid->gridStep()) * _grid->gridStep());
//            pos.setY(ceil(pos.y() / _grid->gridStep()) * _grid->gridStep());
//        }

//        w->move(pos);
//        t_object* obj = (t_object*)w->pdObject();
//        if (obj)
//            cmp_moveobject(obj, (int)pos.x(), (int)pos.y());

//        //todo
//        //viewport()->update();
//    }

//    //if (drawStyle() == ds_Canvas)
//    setFixedSize(minimumCanvasSize());
//}
//void  Canvas::editorDone()
//{
//    qDebug("editor done");

//    setObjectData(editor_->text().toStdString());

//    //setPdMessage();
//    //todo

//    //editor_->hide();
//}

//void  Canvas::editorChanged()
//{
//    QFont myFont(PREF_QSTRING("Font"), 11);
//    QFontMetrics fm(myFont);
//    int new_w = fm.width(QString(editor_->text())) + 10;
//    new_w = (new_w<25) ? 25 : new_w;
//    setFixedWidth(new_w);
//    editor_->setFixedWidth(width()-5);

//    //
//    setInletsPos();
//    setOutletsPos();

//}

//-----------------------------------------------------------------------

Canvas* Canvas::newView(Canvas* srcCanvas, UIObjectItem* parentCanvas, canvasDrawStyle dStyle)
{
    Canvas* ret = new Canvas((QGraphicsView*)parentCanvas);

    //copy here
    //ret->setPdObject(srcCanvas->pdObject());

    //ret->setDrawStyle(dStyle);

    ret->setMinimumWidth(40);

    qDebug() << " *** src canvas: " << (long)srcCanvas;
    //qDebug(" *** port count: %i %i", srcCanvas->inletCount(), srcCanvas->outletCount());

    //int ci = cmp_get_inlet_count((t_object*)srcCanvas->pdObject());
    //int co = cmp_get_outlet_count((t_object*)srcCanvas->pdObject());

    //qDebug(" *** port count @pd: %i %i", ci, co);

    //copying. later fix that with separate data class etc
    //    for (int i = 0; i < srcCanvas->inletCount(); i++)
    //        ret->addInlet();
    //    for (int i = 0; i < srcCanvas->outletCount(); i++)
    //        ret->addOutlet();

    connect(srcCanvas, &Canvas::updatePortCount, ret, &Canvas::portCountUpdated);

    return ret;
}

void Canvas::addInlet()
{
    //UIObjectItem::addInlet();
    //    Port* last = inletAt(inletCount() - 1);
    //    if (drawStyle() == ds_Canvas)
    //        last->hide();
}

void Canvas::addOutlet()
{
    //    UIObjectItem::addOutlet();
    //    Port* last = inletAt(inletCount() - 1);
    //    if (drawStyle() == ds_Canvas)
    //        last->hide();
}

//void Canvas::setDrawStyle(canvasDrawStyle ds)
//{
//    _drawStyle = ds;
//}

//canvasDrawStyle Canvas::drawStyle()
//{
//    return _drawStyle;
//}

//void Canvas::paintEvent(QPaintEvent*)
//{
//    if (_drawStyle == ds_Canvas)
//        drawCanvas();
//    if (_drawStyle == ds_Box)
//        drawObjectBox();
//}

void Canvas::drawCanvas()
{
    //cmp_post("paintevent");

    //    if (_selFrame.active) {
    //        QPainter p(0);//viewport());

    //        p.setPen(QPen(QColor(128, 128, 128), 1, Qt::DashLine, Qt::SquareCap, Qt::BevelJoin));
    //        p.drawRect(_selFrame.start.x(), _selFrame.start.y(), _selFrame.end.x(), _selFrame.end.y());
    //    }

    //    if (_newLine->active) {
    //        QPainter p(0);//viewport());

    //        p.setPen(QPen(QColor(128, 128, 128), 1, Qt::DashLine, Qt::SquareCap, Qt::BevelJoin));
    //        p.drawLine(_newLine->start, _newLine->end);
    //    }

    //    paintPatchcords();
}

//void Canvas::drawObjectBox()
//{
//    //    QPainter p(0);//viewport());
//    //    p.setRenderHint(QPainter::HighQualityAntialiasing, true);

//    //    {
//    //        p.setPen(QPen(QColor(192, 192, 192), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
//    //        p.drawRect(0, 1, width(), height() - 2);
//    //    }

//    //    QColor rectColor = (errorBox()) ? QColor(255, 0, 0) : QColor(128, 128, 128);
//    //    p.setPen(QPen(rectColor, 2, (errorBox()) ? Qt::DashLine : Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
//    //    p.drawRect(0, 0, width(), height());
//    //    QTextOption* op = new QTextOption;
//    //    op->setAlignment(Qt::AlignLeft);
//    //    p.setPen(QPen(QColor(0, 0, 0), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

//    //    p.setFont(QFont(PREF_QSTRING("Font"), 11, 0, false));
//    //    p.drawText(2, 3, width() - 2, height() - 3, 0, objectData().c_str(), 0);

//    //    if (isselected()()) {
//    //        p.setPen(QPen(QColor(0, 192, 255), 2, (errorBox()) ? Qt::DashLine : Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
//    //        p.drawRect(0, 0, width(), height());
//    //    }
//}

//void Canvas::paintPatchcords()
//{
//    for (int i = 0; i < (int)_data.patchcords()->size(); i++) {
//        QPainter p(0); //viewport());

//        QColor b_pc_color = (((Patchcord*)_data.patchcords()->at(i))->patchcordType() == cm_pt_signal) ? QColor(128, 160, 192) : QColor(0, 0, 0);
//        // cleanup
//        QColor pc_color = ((Patchcord*)_data.patchcords()->at(i))->hover() ? QColor(255, 192, 0) : b_pc_color;
//        if (((Patchcord*)_data.patchcords()->at(i))->isSelected())
//            pc_color = QColor(0, 192, 255);

//        p.setRenderHint(QPainter::HighQualityAntialiasing, true);
//        p.setPen(QPen(pc_color, 1 + (((Patchcord*)_data.patchcords()->at(i))->patchcordType() == cm_pt_signal), Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

//        //todo option
//        //p.drawLine(((cm_patchcord*)data_.patchcords()->at(i))->getStartPoint(), ((cm_patchcord*)data_.patchcords()->at(i))->getEndPoint());

//        QPainterPath path;
//        QPoint start = ((Patchcord*)_data.patchcords()->at(i))->startPoint();
//        QPoint end = ((Patchcord*)_data.patchcords()->at(i))->endPoint();

//        QPoint b1 = QPoint(start.x() + (end.x() - start.x()) * .5, fabs(end.y() - start.y()) * .5 + start.y());
//        QPoint b2 = QPoint(end.x() - (end.x() - start.x()) * .5, -fabs(end.y() - start.y()) * .5 + end.y());

//        //TODO
//        //spaghetti lol
//        if (start.y() > end.y()) {
//            if (b1.y() - start.y() > 80) {
//                b1.setY(start.y() + 80);
//            }

//            if (b2.y() - end.y() < -80) {
//                b2.setY(end.y() - 80);
//            }
//        }

//        //               if (b1.x() - start.x() < 20)
//        //                {
//        //                    b1.setX(start.x() + 20);
//        //                }

//        //                if (b2.x() - end.x() < -20)
//        //                {
//        //                    b2.setX(end.x() - 20);
//        //                }

//        //            }

//        path.moveTo(start);
//        path.cubicTo(b1, b2, end);

//        p.drawPath(path);
//    }
//}

bool Canvas::hoverPatchcords(QPoint pos)
{
    bool ret = false;
    for (int i = 0; i < (int)_data.patchcords()->size(); i++) {
        //((Patchcord*)_data.patchcords()->at(i))->hover() =
        ((Patchcord*)_data.patchcords()->at(i))->isHover(pos);
        if (((Patchcord*)_data.patchcords()->at(i))->hover())
            ret = true;
    }
    return ret;
}

void Canvas::hoverPatchcordsOff()
{
    //bool ret = false;
    for (int i = 0; i < (int)_data.patchcords()->size(); i++) {
        //((Patchcord*)_data.patchcords()->at(i))->hover() = false; // ((cm_patchcord*)data_.patchcords()->at(i))->hover(pos);
        ((Patchcord*)_data.patchcords()->at(i))->setHover(false);
    }
}

bool Canvas::clickPatchcords(QPoint pos)
{
    bool ret = false;
    for (int i = 0; i < (int)_data.patchcords()->size(); i++) {
        //((Patchcord*)_data.patchcords()->at(i))->selected() =
        ((Patchcord*)_data.patchcords()->at(i))->isHover(pos);
        if (((Patchcord*)_data.patchcords()->at(i))->isSelected())
            ret = true;
    }
    return ret;
}

void Canvas::mouseMoveEvent(QMouseEvent* ev)
{
    QGraphicsView::mouseMoveEvent(ev);
    // if (drawStyle() == ds_Canvas)

    //if (ev->isAccepted())
    mouseMoveEventForCanvas(ev);
    //    if (drawStyle() == ds_Box)
    //        mouseMoveEventForBox(ev);
}

void Canvas::mousePressEvent(QMouseEvent* ev)
{
    QGraphicsView::mousePressEvent(ev);

    qDebug("click canvas");

    //if (drawStyle() == ds_Canvas)

    //if (ev->isAccepted())
    mousePressEventForCanvas(ev);
    //    if (drawStyle() == ds_Box)
    //        mousePressEventForBox(ev);


}

void Canvas::mouseReleaseEvent(QMouseEvent* ev)
{
     QGraphicsView::mouseReleaseEvent(ev);
    // if (drawStyle() == ds_Canvas)
    //if (ev->isAccepted())
    mouseReleaseEventForCanvas(ev);
    //    if (drawStyle() == ds_Box)
    //        mouseReleaseEventForBox(ev);
}

/////////

void Canvas::mouseMoveEventForCanvas(QMouseEvent* ev)
{

    if (!ev)
        return;

    //qDebug("move");

    QPoint pos = ev->pos();

    //    qDebug()<<"move "<<pos;

    _newObjectPos = pos;

    //_selFrame.end = pos - _selFrame.start;
    _selectionRect->setEnd(pos - _selectionRect->start());
    _newLine->setEnd(pos);

    // move new object
    if (dragObject) {
        QPoint offset = QPoint(10, 10);

        QPoint newpos = mapToParent(ev->pos() - offset);
        if (_gridSnap) {
            newpos.setX(ceil(newpos.x() / _grid->gridStep()) * _grid->gridStep());
            newpos.setY(ceil(newpos.y() / _grid->gridStep()) * _grid->gridStep());
        }

        dragObject->move(newpos);

        viewport()->update();
    }

    //selection frame
    if (_selectionRect->active()) {

        for (int i = 0; i < (int)_data.boxes()->size(); i++) {
            QPointF pos = ((UIBox*)_data.boxes()->at(i))->pos();
            QPoint pos_ = QPoint(pos.x(), pos.y());
            QSizeF size = ((UIBox*)_data.boxes()->at(i))->size();
            QRect r = QRect(pos_, pos_ + QPoint(size.width(), size.height()));

            QRect frame = QRect(_selectionRect->start(), _selectionRect->start() + _selectionRect->end());

            if (frame.contains(r, false)) {
                ((UIBox*)_data.boxes()->at(i))->select();
                _selectionData.addUniqueBox(_data.boxes()->at(i));
            } else {
                ((UIBox*)_data.boxes()->at(i))->deselect();

                auto it = std::find(_selectionData.boxes()->begin(), _selectionData.boxes()->end(), _data.boxes()->at(i));
                if (it != _selectionData.boxes()->end()) {
                    _selectionData.boxes()->erase(it);
                }
            }
        }

        viewport()->update();

        //
        //viewport()->update();
    }

    //todo
    if (_newLine->active()) {
        viewport()->update();
        qDebug("new line");
    }

    //patchcords()
    //if (Canvas::getEditMode() == em_Unlocked)
    //    if (hoverPatchcords(pos))
    //viewport()->update();

    //remove patchcord selection if making frame
    if (_selectionRect->active())
        clickPatchcords(QPoint(-1, -1));
}

void Canvas::mousePressEventForCanvas(QMouseEvent* ev)
{

    //context menu
    if (ev->button() == Qt::RightButton) {
        QPoint pos = mapToGlobal(ev->pos());
        //showPopupMenu(pos);
        ev->accept();
        return;
    }

    deselectBoxes();

    //deselect
    hoverPatchcordsOff();

    setFocus();
    //objectMaker()->hide();

    if (Canvas::getEditMode() == em_Unlocked) {
        //sel frame
        _selectionRect->setActive(true); // = true;
        _selectionRect->setStart(ev->pos());
        _selectionRect->setEnd(QPoint(0, 0));

        //click patchcords()
        clickPatchcords(ev->pos());

        //viewport()->update();
    }
}

void Canvas::mouseReleaseEventForCanvas(QMouseEvent*)
{
    dragObject = 0;

    _selectionRect->setActive(false);
//    _newLine->setActive(false);

    //todo
    viewport()->update();
}

/////////

//void Canvas::mousePressEventForBox(QMouseEvent* ev)
//{
//    //open canvas for subpatch
//    //    if (Canvas::getEditMode() != em_Unlocked) {
//    //        if (_Subcanvas) {
//    //            _Subcanvas->show();
//    //        }
//    //    }

//    //    //        if ( (getEditMode()==em_Unlocked) && isselected()())
//    //    //        {
//    //    //            editor_->setText(QString(objectData().c_str()));
//    //    //            editor_->show();
//    //    //            editor_->setFocus();
//    //    //        }

//    //    emit UIObjectItem::selectBox(this, ev);
//    //    dragOffset = ev->pos();
//}

//void Canvas::mouseReleaseEventForBox(QMouseEvent*)
//{

//    //viewport()->update();
//}

//void Canvas::mouseMoveEventForBox(QMouseEvent* event)
//{
//    //    if (event->buttons() & Qt::LeftButton) {
//    //        emit moveBox(this, event);
//    //    }
//    //    event->ignore();

//    //    if ((Canvas::getEditMode() != em_Unlocked) && (_Subcanvas)) {
//    //        setCursor(QCursor(Qt::PointingHandCursor));
//    //    } else {
//    //        setCursor(QCursor(Qt::ArrowCursor));
//    //    }
//}

/////////

void Canvas::deselectBoxes()
{
    for (int i = 0; i < (int)_selectionData.boxes()->size(); i++) {
        if (_selectionData.boxes()->at(i))

            ((UIBox*)_selectionData.boxes()->at(i))->deselect();
    }

    _selectionData.boxes()->clear();

    viewport()->update();
}

UIBox* Canvas::restoreSubcanvas(std::string pdObjectName, QPoint pos, t_canvas* canvas)
{
    //    UIBox* box = new UIBox((UIObjectItemItem*)this); //test?
    //    box->setObjectData(pdObjectName);

    //    connect(box, &UIBox::selectBox, this, &Canvas::s_SelectBoxItem);
    //    connect(box, &UIBox::moveBox, this, &Canvas::s_MoveBoxItem);

    //    box->setEditModeRef(Canvas::getEditModeRef());

    //    const char* obj_name = pdObjectName.c_str();

    //    t_object* new_obj = 0;
    //    int in_c = 0, out_c = 0;

    //    //temp
    //    if (!pdObject()) {
    //        qDebug("bad pd canvas instance");
    //        box->setErrorBox(true);
    //    } else {
    //        new_obj = (t_object*)canvas; //cmp_create_object(pd_canvas,(char*)obj_name,pos.x(), pos.y());
    //    }

    //    if (new_obj) {

    //        // qDebug ("created object %lu, new_obj");

    //        in_c = cmp_get_inlet_count(new_obj);
    //        out_c = cmp_get_outlet_count(new_obj);

    //        qDebug("created object %s ins %i outs %i ptr %lu", obj_name, in_c, out_c, (long)new_obj);

    //        //cm_box* newBox = canvas->createBox(objectMaker->text().toStdString(),objectMaker->pos(),in_c,out_c);
    //        box->setPdObject(new_obj);

    //    } else {
    //        qDebug("Error: no such object %s", obj_name);
    //        box->setErrorBox(true);
    //        in_c = 0;
    //        out_c = 0;
    //        //return 0;
    //    }

    //    for (int i = 0; i < in_c; i++)
    //        box->addInlet();
    //    for (int i = 0; i < out_c; i++)
    //        box->addOutlet();

    //    box->move(pos);

    //    // FIX
    //    _data.addUniqueBox((UIObjectItem*)box);

    //    box->show();

    //    return box;
}

UIObjectItem* Canvas::createObject(QString objectData1, QPoint pos) //std::string UIObjectItemName,
{

    qDebug("!!!");

    //pos = objectMaker()->pos();

    QStringList list = QString(objectData1).split(" ");

    //this is moved here to have all checks for special objects in one place
    //(later - inlets/outlets)

    if (list.count()) {
        if (list.at(0) == "pd") {
            //lol
            std::pair<QMainWindow*, UIObjectItem*> newPatch;

            newPatch = emit createSubpatchWindow();

            QMainWindow* subPatch = newPatch.first;
            Canvas* newCanvas = (Canvas*)newPatch.second;

            // crazy here
            UIObjectItem* b = createBoxForCanvas(newCanvas, objectData1.toStdString(), pos);
            ((UIBox*)b)->setSubpatchWindow((QMainWindow*)subPatch);
            //((Canvas*)b)->setSubcanvas(newCanvas);

            qDebug("subpatch>>");

            subPatch->show();
            return b;
        }

        if (list.at(0) == "restore") {
            return 0;
        }
    }

    UIObjectItem* obj = ObjectLoader::inst().createObject(objectData1, (t_canvas*)pdObject(), this);

    obj->setCanvas((void*)this);

    connect(obj, &UIObjectItem::selectBox, this, &Canvas::s_SelectBox);
    connect(obj, &UIObjectItem::moveBox, this, &Canvas::s_MoveBox);

    obj->setEditModeRef(&_canvasEditMode); //Canvas::getEditModeRef());
    obj->move(pos.x(), pos.y());
    _data.addUniqueBox(obj);

    scene()->addItem(obj);

    //    obj->show();

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

    //connect(obj, &UIObjectItem::editObject, this, &Canvas::objectStartsEdit);

    //if (drawStyle() == ds_Canvas)
    setFixedSize(minimumCanvasSize());

    return (UIObjectItem*)0; //obj;
}

UIObjectItem* Canvas::createBoxForCanvas(Canvas* newCanvas, std::string objectData, QPoint pos)
{

    //cleanup
    UIObjectItem* obj = (UIObjectItem*)Canvas::newView(newCanvas, (UIObjectItem*)this, ds_Box);

    //test
    //obj->setFixedWidth(40);

    obj->setObjectData(objectData);

    //    connect(obj, &UIMessage::selectBox, this, &Canvas::s_SelectBox);
    //    connect(obj, &UIMessage::moveBox, this, &Canvas::s_MoveBox);

    obj->setEditModeRef(Canvas::getEditModeRef());
    obj->move(pos);
    _data.addUniqueBox(obj);

    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, QColor(240, 240, 240));
    //    obj->setAutoFillBackground(true);
    //    obj->setPalette(Pal);

    // obj->show();

    // qDebug() << "create subcanvas @" << QString(std::to_string((long)pdObject()).c_str());

    return obj;
}

void Canvas::patchcord(UIObjectItem* obj1, int outlet, UIObjectItem* obj2, int inlet)
{
    if (obj1->pdObject() && obj2->pdObject()) {
        if (((UIBox*)obj1)->errorBox()) {
            //create dummy inlets / outlets
        };
        if (((UIBox*)obj2)->errorBox()) {
            //create dummy inlets / outlets
        };

        Port* outport = obj1->outletAt(outlet);
        Port* inport = obj2->inletAt(inlet);

        Patchcord* pc = new Patchcord(obj1, outport, obj2, inport);

        if (obj1->pdOutletType(outlet))
            pc->setPatchcordType(cm_pt_signal);

        qDebug("pdlib patchcord");
        cmp_patchcord((t_object*)obj1->pdObject(), outlet, (t_object*)obj2->pdObject(), inlet);
        _data.addPatchcord(pc); //patchcords()->push_back(pc);

        scene()->addItem(pc);
    } else
        qDebug("canvas patchcord error");
}

void Canvas::patchcord(UIObjectItem* obj1, UIItem* outport, UIObjectItem* obj2, UIItem* inport)
{

    //todo

        int n1 = ((Port*)outport)->portIndex();
        int n2 = ((Port*)inport)->portIndex();
        patchcord(obj1, n1, obj2, n2);
}

//    ////unused?
//    void deletePatchcord(Patchcord* pc)
//    {
//        // no repaint

//        //cleanup !!!
//        patchcordVec::iterator it = std::find(data_.patchcords()->begin(), data_.patchcords()->end(), pc);

//        if (it != data_.patchcords()->end()) { data_.patchcords()->erase(it); }

//    }

void Canvas::deletePatchcordsFor(UIItem* obj)
{
    //for //(int i=0;i<data_.patchcords()->size();i++)
    std::vector<Patchcord*>::iterator it;
    for (it = _data.patchcords()->begin(); it != _data.patchcords()->end();) {
        if ((*it)->connectsObject(obj))
        {
            scene()->removeItem(*it);
            it = _data.patchcords()->erase(it);
        }
        else
            ++it;
    }

    //viewport()->update();
}

////
/// \brief delete single box
///
void Canvas::deleteBox(UIObjectItem* box)
{
    deselectBoxes();
    _selectionData.addUniqueBox(box);
    deleteSelectedBoxes();
}

////
/// \brief delete all selected object boxes()
///
void Canvas::deleteSelectedBoxes()
{
    qDebug("del selected");

    objectVec::iterator it;
    for (it = _selectionData.boxes()->begin(); it != _selectionData.boxes()->end(); ++it)

    {
        //
        UIObjectItem* box = *it;
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

        _data.boxes()->erase(std::remove(_data.boxes()->begin(), _data.boxes()->end(), *it), _data.boxes()->end());
        //selectionData_.boxes()->erase(std::remove(selectionData_.boxes()->begin(), selectionData_.boxes()->end(), *it), selectionData_.boxes()->end());
    }

    _selectionData.boxes()->clear();
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
    for (it = _data.patchcords()->begin(); it != _data.patchcords()->end();) {
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

            it = _data.patchcords()->erase(it);
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

    //    QPalette Pal(palette());
    //    QColor lockedColor = (_readOnly) ? QColor(245, 245, 255) : QColor(245, 245, 245);
    //    Pal.setColor(QPalette::Background, (mode != em_Locked) ? QColor(255, 255, 255) : lockedColor);
    //    setAutoFillBackground(true);
    //    setPalette(Pal);

    //    if (_grid)
    //    _grid->setVisible(_canvasEditMode);

    if (mode == em_Locked) {
        deselectBoxes();
        hoverPatchcordsOff();
    }

    //viewport()->update();
}

UIObjectItem* Canvas::getObjectByIndex(int idx)
{
    if ((idx < (int)_data.boxes()->size()) && (idx >= 0))
        return _data.boxes()->at(idx);
    else {
        qDebug("object not found");
        return 0;
    }
}

void Canvas::setObjectData(std::string objData)
{
    //    if (drawStyle() == ds_Box) {
    //        UIObjectItem::setObjectData(objData);

    //        QFont myFont(PREF_QSTRING("Font"), 11);
    //        QFontMetrics fm(myFont);
    //        int new_w = fm.width(QString(objData.c_str())) + 10;
    //        new_w = (new_w < 25) ? 25 : new_w;
    //        setFixedWidth(new_w);
    //        setFixedHeight(20);

    //        qDebug("obj width %i", new_w);
    //        //
    //        setInletsPos();
    //        setOutletsPos();
    //    }
}

void Canvas::setGridEnabled(bool val)
{
    _grid->setVisible(val);
    //_gridEnabled = val;
}

void Canvas::setGridSnap(bool val)
{
    _gridSnap = val;
}

objectVec Canvas::objectBoxes()
{
    return *_data.boxes();
}

patchcordVec Canvas::patchcords()
{
    return *_data.patchcords();
}

objectVec Canvas::selectedObjectBoxes()
{
    return *_selectionData.boxes();
}

patchcordVec Canvas::selectedPatchcords()
{
    return *_selectionData.patchcords();
}

patchcordVec Canvas::patchcordsForObject(UIObjectItem* obj)
{
    patchcordVec ret;

    patchcordVec::iterator it;
    for (it = _data.patchcords()->begin(); it != _data.patchcords()->end(); ++it) {
        if (
            (((Patchcord*)*it)->obj1() == obj)
            || (((Patchcord*)*it)->obj2() == obj)) {
            ret.push_back(*it);
        }
    }

    return ret;
}

int Canvas::findObjectIndex(UIObjectItem* obj)
{
    //UIObjectItem* obj1;
    //    std::vector<UIObjectItem*>::iterator iter = std::find(_data.boxes()->begin(), _data.boxes()->end(), obj);
    //    size_t index = std::distance(_data.boxes()->begin(), iter);
    //    if (index != _data.boxes()->size()) {
    //        return index;
    //    }
    //    return -1;

    return _data.findObjectIndex(obj);
}

//void Canvas::setSubcanvas(UIObjectItem* obj) { _Subcanvas = obj; }

//lol
//QStringList canvasAsPdStrings();

std::string Canvas::asPdFileString()
{
    //if (drawStyle() == ds_Canvas)
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
    }

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

void Canvas::selectObject(UIObjectItem* obj)
{
    obj->select();
    _selectionData.addUniqueBox(obj);
}

void Canvas::selectAll()
{
    qDebug("select all");
    objectVec::iterator it;
    for (it = _data.boxes()->begin(); it != _data.boxes()->end(); ++it) {
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

    ret += _data.boxesAsPdFileStrings();
    ret += _data.patchcordsAsPdFileStrings();

    //objects
    //    std::vector<UIObjectItem*> objects = objectboxes()();
    //    std::vector<UIObjectItem*>::iterator it;

    //    for (it = objects.begin(); it != objects.end(); ++it) {
    //        // !check for subpatches
    //        //            out1 = "#X obj ";
    //        //            out1 += std::to_string(((UIObjectItem*)*it)->x()) + " " + std::to_string(((UIObjectItem*)*it)->y())+ " ";

    //        out1 = ((UIObjectItem*)*it)->asPdFileString();
    //        out1 += ";\r\n";

    //        ret.append(out1.c_str());
    //    }

    //patchcords()
    //    std::vector<Patchcord*> patchcords() = this->patchcords()();
    //    std::vector<Patchcord*>::iterator it2;

    //    for (it2 = patchcords()->begin(); it2 != patchcords()->end(); ++it2) {
    //        // check for subpatches
    //        out1 = "#X connect ";
    //        out1 += patchcordAsPdFileString(*it2);
    //        out1 += ";\r\n";

    //        ret.append(out1.c_str());
    //    }

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

        //list1.push_back(str);
    }
}

void Canvas::cancelPatchcord()
{
    _newLine->setActive(false);
    ;

    //viewport()->update();
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

void Canvas::setReplaceObject(UIObjectItem* obj)
{
    _replaceObject = obj;
}

UIObjectItem* Canvas::replaceObject()
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
    //    deselectBoxes();

    //    qDebug("edit box>>");

    //    _replaceObject = (UIObjectItem*)obj;

    //    objectMaker()->move(_replaceObject->pos());
    //    objectMaker()->setFixedSize(_replaceObject->size());
    //    objectMaker()->setText(QString(_replaceObject->objectData().c_str()));
    //    objectMaker()->setFocus();
    //    //replaceObject_->hide();
    //    objectMaker()->show();
    //    objectMaker()->raise();
}

QSize Canvas::minimumCanvasSize()
{
    objectVec::iterator it;

    QSize ret = QSize(300, 200); //EmptyCanvasSize;

    for (it = _data.boxes()->begin(); it != _data.boxes()->end(); ++it) {
        int obj_x = ((UIObjectItem*)*it)->x() + ((UIObjectItem*)*it)->width() + 80;
        int obj_y = ((UIObjectItem*)*it)->y() + ((UIObjectItem*)*it)->height() + 80;

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

    if (!_selectionData.hasObjects())
        return;

    _clipboard = _selectionData.boxesAsPdFileStrings();
    _clipboard += _selectionData.patchcordsAsPdFileStrings();

    deleteSelectedBoxes();
}

void Canvas::dataCopy()
{
    if (!_selectionData.hasObjects())
        return;

    _clipboard = _selectionData.boxesAsPdFileStrings();
    _clipboard += _selectionData.patchcordsAsPdFileStrings();

    qDebug() << "***copy\n"
             << _clipboard;
}

void Canvas::dataDuplicate()
{
    Canvas::dataCopy();
    Canvas::dataPaste();
}
void Canvas::dataPaste()
{

    qDebug() << "***paste:\n"
             << _clipboard;

    if (_clipboard.size() < 1)
        return;

    QStringList list1;

    for (int i = 0; i < _clipboard.size(); i++) {
        QString str = _clipboard.at(i);

        QStringList subList = str.split(" ");

        // offset copied objects
        if (subList.size() > 4) {
            if (subList.at(1) == "obj") {
                int x = ((QString)subList.at(2)).toInt();
                int y = ((QString)subList.at(3)).toInt();

                subList[2] = QString::number(x + 20);
                subList[3] = QString::number(y + 20);
            }

            _clipboard[i] = subList.join(" ");
            FileParser::parseQString(_clipboard[i]);
        }

        //list1.push_back(str);
    }
}

// end namespace
}
