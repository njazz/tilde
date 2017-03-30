// (c) 2017 Alex Nadzharov
// License: GPL3

#include "Canvas.h"

#include "FileParser.h"

namespace qtpd {

static const QSize EmptyCanvasSize = QSize(300, 200);

Canvas::Canvas(UIObject* parent)
    : UIObject(parent)
{

    QPalette Pal;
    Pal.setColor(QPalette::Background, Qt::white);
    setAutoFillBackground(true);
    setPalette(Pal);

    //test
    setFixedSize(400, 300);

    setMouseTracking(true);

    _selFrame.active = false;
    _newLine.active = false;

    _editMode = em_Unlocked;

    fileName = "";

    //
    _gridEnabled = true;
    _gridSnap = true;
    _gridStep = 20;

    //
    _connectionStartObject = 0;
    _connectionStartOutlet = 0;
    dragObject = 0;
    setPdObject(0); //extra

    //
    _drawStyle = ds_Canvas;

    _readOnly = false;

    //
    //    editor_ = new QLineEdit(this);
    //    editor_->setFixedSize(65-5,18);
    //    editor_->move(1,1);
    //    editor_->setFont(QFont(PREF_QSTRING("Font"),11,0,false));
    //    editor_->hide();
    //    editor_->setAttribute(Qt::WA_MacShowFocusRect, 0);
    //    editor_->setFrame(false);

    //connect(editor_,&QLineEdit::editingFinished,this,&Canvas::editorDone);
    //connect(editor_,&QLineEdit::textEdited, this,&Canvas::editorChanged);

    _objectMaker = new ObjectMaker((QLineEdit*)this);
    _objectMaker->hide();

    //
    setMinimumBoxWidth(40);
    setMinimumBoxHeight(20);

    _replaceObject = 0;
}

//cm_canvas::cm_canvas(QWidget *parent) : cm_widget((cm_widget*)parent)
//{
//    parent()->setParent(parent->parent());

//}

///////

void Canvas::s_InMousePressed(UIWidget* obj, QMouseEvent*)
{
    //    printf("in: mouse pressed\n");
    _newLine.active = false;

    if ((_connectionStartObject) && (_connectionStartOutlet)) {
        patchcord(_connectionStartObject, _connectionStartOutlet, (UIObject*)obj->parent(), obj);
        repaint();
    }

    _connectionStartObject = 0;
    _connectionStartOutlet = 0;
}

void Canvas::s_InMouseReleased(UIWidget*, QMouseEvent*)
{
    //    printf("in:  mouse released\n");
}

void Canvas::s_OutMousePressed(UIWidget* obj, QMouseEvent*)
{
    //    printf("out: mouse pressed\n");

    _newLine.start = ((QWidget*)obj->parent())->pos() + obj->pos() + QPoint(5, 1);

    _newLine.active = true;

    _connectionStartObject = (UIObject*)obj->parent();
    _connectionStartOutlet = (UIObject*)obj;
}

void Canvas::s_OutMouseReleased(UIWidget*, QMouseEvent*)
{
    //    printf("out:  mouse released\n");
}

void Canvas::s_SelectBox(UIWidget* box)
{

    if (_editMode == em_Unlocked) {
        _selectionData.addUniqueBox((UIObject*)box);
        box->select();
        box->repaint();
    }

    //temporary
    dragObject = 0;

    //dragPrevPos = box->pos();
}

void Canvas::s_MoveBox(UIWidget* box, QMouseEvent* event)
{
    if (!(getEditMode() == em_Unlocked))
        return;
    for (int i = 0; i < (int)_selectionData.boxes()->size(); i++) {
        UIObject* w = ((UIObject*)_selectionData.boxes()->at(i));
        QPoint pos = ((UIObject*)_selectionData.boxes()->at(i))->pos() + mapToParent((event->pos() - box->dragOffset));

        if (_gridSnap) {
            pos.setX(floor(pos.x() / _gridStep) * _gridStep);
            pos.setY(floor(pos.y() / _gridStep) * _gridStep);
        }

        w->move(pos);
        t_object* obj = (t_object*)w->pdObject();
        if (obj)
            cmp_moveobject(obj, (int)pos.x(), (int)pos.y());
    }

    if (drawStyle() == ds_Canvas)
        setFixedSize(minimumCanvasSize());
}

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

Canvas* Canvas::newView(Canvas* srcCanvas, UIObject* parentCanvas, canvasDrawStyle dStyle)
{
    Canvas* ret = new Canvas(parentCanvas);

    //copy here
    ret->setPdObject(srcCanvas->pdObject());

    ret->setDrawStyle(dStyle);

    ret->setMinimumWidth(40);

    qDebug() << " *** src canvas: " << (long)srcCanvas;
    qDebug(" *** port count: %i %i", srcCanvas->inletCount(), srcCanvas->outletCount());

    int ci = cmp_get_inlet_count((t_object*)srcCanvas->pdObject());
    int co = cmp_get_outlet_count((t_object*)srcCanvas->pdObject());

    qDebug(" *** port count @pd: %i %i", ci, co);

    //copying. later fix that with separate data class etc
    for (int i = 0; i < srcCanvas->inletCount(); i++)
        ret->addInlet();
    for (int i = 0; i < srcCanvas->outletCount(); i++)
        ret->addOutlet();

    connect(srcCanvas, &Canvas::updatePortCount, ret, &Canvas::portCountUpdated);

    return ret;
}

void Canvas::addInlet()
{
    UIObject::addInlet();
    Port* last = inletAt(inletCount() - 1);
    if (drawStyle() == ds_Canvas)
        last->hide();
}

void Canvas::addOutlet()
{
    UIObject::addOutlet();
    Port* last = inletAt(inletCount() - 1);
    if (drawStyle() == ds_Canvas)
        last->hide();
}

void Canvas::setDrawStyle(canvasDrawStyle ds)
{
    _drawStyle = ds;
}

canvasDrawStyle Canvas::drawStyle()
{
    return _drawStyle;
}

void Canvas::paintEvent(QPaintEvent*)
{
    if (_drawStyle == ds_Canvas)
        drawCanvas();
    if (_drawStyle == ds_Box)
        drawObjectBox();
}

void Canvas::drawCanvas()
{
    //grid
    if (_gridEnabled && (_editMode != em_Locked)) {
        QPainter p(this);
        p.scale(scale(), scale());

        p.setPen(QPen(QColor(224, 224, 224), 1, Qt::DotLine, Qt::SquareCap, Qt::BevelJoin));
        for (int x = 0; x < width(); x += _gridStep) {
            p.drawLine(x, 0, x, height());
        }
        for (int y = 0; y < height(); y += _gridStep) {
            p.drawLine(0, y, width(), y);
        }
    }
    if (_selFrame.active) {
        QPainter p(this);

        p.setPen(QPen(QColor(128, 128, 128), 1, Qt::DashLine, Qt::SquareCap, Qt::BevelJoin));
        p.drawRect(_selFrame.start.x(), _selFrame.start.y(), _selFrame.end.x(), _selFrame.end.y());
    }

    if (_newLine.active) {
        QPainter p(this);

        p.setPen(QPen(QColor(128, 128, 128), 1, Qt::DashLine, Qt::SquareCap, Qt::BevelJoin));
        p.drawLine(_newLine.start, _newLine.end);
    }

    paintPatchcords();
}

void Canvas::drawObjectBox()
{
    QPainter p(this);
    p.setRenderHint(QPainter::HighQualityAntialiasing, true);

    {
        p.setPen(QPen(QColor(192, 192, 192), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        p.drawRect(0, 1, width(), height() - 2);
    }

    QColor rectColor = (errorBox()) ? QColor(255, 0, 0) : QColor(128, 128, 128);
    p.setPen(QPen(rectColor, 2, (errorBox()) ? Qt::DashLine : Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
    p.drawRect(0, 0, width(), height());
    QTextOption* op = new QTextOption;
    op->setAlignment(Qt::AlignLeft);
    p.setPen(QPen(QColor(0, 0, 0), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

    p.setFont(QFont(PREF_QSTRING("Font"), 11, 0, false));
    p.drawText(2, 3, width() - 2, height() - 3, 0, objectData().c_str(), 0);

    if (isSelected()) {
        p.setPen(QPen(QColor(0, 192, 255), 2, (errorBox()) ? Qt::DashLine : Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        p.drawRect(0, 0, width(), height());
    }
}

void Canvas::paintPatchcords()
{
    for (int i = 0; i < (int)_data.patchcords()->size(); i++) {
        QPainter p(this);

        QColor b_pc_color = (((Patchcord*)_data.patchcords()->at(i))->patchcordType() == cm_pt_signal) ? QColor(128, 160, 192) : QColor(0, 0, 0);
        // cleanup
        QColor pc_color = ((Patchcord*)_data.patchcords()->at(i))->mouseover ? QColor(255, 192, 0) : b_pc_color;
        if (((Patchcord*)_data.patchcords()->at(i))->selected)
            pc_color = QColor(0, 192, 255);

        p.setRenderHint(QPainter::HighQualityAntialiasing, true);
        p.setPen(QPen(pc_color, 1 + (((Patchcord*)_data.patchcords()->at(i))->patchcordType() == cm_pt_signal), Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

        //todo option
        //p.drawLine(((cm_patchcord*)data_.patchcords()->at(i))->getStartPoint(), ((cm_patchcord*)data_.patchcords()->at(i))->getEndPoint());

        QPainterPath path;
        QPoint start = ((Patchcord*)_data.patchcords()->at(i))->startPoint();
        QPoint end = ((Patchcord*)_data.patchcords()->at(i))->endPoint();

        QPoint b1 = QPoint(start.x() + (end.x() - start.x()) * .5, fabs(end.y() - start.y()) * .5 + start.y());
        QPoint b2 = QPoint(end.x() - (end.x() - start.x()) * .5, -fabs(end.y() - start.y()) * .5 + end.y());

        //TODO
        //spaghetti lol
        if (start.y() > end.y()) {
            if (b1.y() - start.y() > 80) {
                b1.setY(start.y() + 80);
            }

            if (b2.y() - end.y() < -80) {
                b2.setY(end.y() - 80);
            }
        }

        //               if (b1.x() - start.x() < 20)
        //                {
        //                    b1.setX(start.x() + 20);
        //                }

        //                if (b2.x() - end.x() < -20)
        //                {
        //                    b2.setX(end.x() - 20);
        //                }

        //            }

        path.moveTo(start);
        path.cubicTo(b1, b2, end);

        p.drawPath(path);
    }
}

bool Canvas::hoverPatchcords(QPoint pos)
{
    bool ret = false;
    for (int i = 0; i < (int)_data.patchcords()->size(); i++) {
        ((Patchcord*)_data.patchcords()->at(i))->mouseover = ((Patchcord*)_data.patchcords()->at(i))->hover(pos);
        if (((Patchcord*)_data.patchcords()->at(i))->mouseover)
            ret = true;
    }
    return ret;
}

void Canvas::hoverPatchcordsOff()
{
    //bool ret = false;
    for (int i = 0; i < (int)_data.patchcords()->size(); i++) {
        ((Patchcord*)_data.patchcords()->at(i))->mouseover = false; // ((cm_patchcord*)data_.patchcords()->at(i))->hover(pos);
    }
}

bool Canvas::clickPatchcords(QPoint pos)
{
    bool ret = false;
    for (int i = 0; i < (int)_data.patchcords()->size(); i++) {
        ((Patchcord*)_data.patchcords()->at(i))->selected = ((Patchcord*)_data.patchcords()->at(i))->hover(pos);
        if (((Patchcord*)_data.patchcords()->at(i))->selected)
            ret = true;
    }
    return ret;
}

void Canvas::mouseMoveEvent(QMouseEvent* ev)
{
    if (drawStyle() == ds_Canvas)
        mouseMoveEventForCanvas(ev);
    if (drawStyle() == ds_Box)
        mouseMoveEventForBox(ev);
}

void Canvas::mousePressEvent(QMouseEvent* ev)
{
    if (drawStyle() == ds_Canvas)
        mousePressEventForCanvas(ev);
    if (drawStyle() == ds_Box)
        mousePressEventForBox(ev);
}

void Canvas::mouseReleaseEvent(QMouseEvent* ev)
{
    if (drawStyle() == ds_Canvas)
        mouseReleaseEventForCanvas(ev);
    if (drawStyle() == ds_Box)
        mouseReleaseEventForBox(ev);
}

/////////

void Canvas::mouseMoveEventForCanvas(QMouseEvent* ev)
{
    if (!ev)
        return;

    QPoint pos = ev->pos();

    _newObjectPos = pos;

    _selFrame.end = pos - _selFrame.start;
    _newLine.end = pos;

    repaint();

    // move new object
    if (dragObject) {
        QPoint offset = QPoint(10, 10);

        QPoint newpos = mapToParent(ev->pos() - offset);
        if (_gridSnap) {
            newpos.setX(floor(newpos.x() / _gridStep) * _gridStep);
            newpos.setY(floor(newpos.y() / _gridStep) * _gridStep);
        }

        dragObject->move(newpos);
    }

    //selection frame
    if (_selFrame.active) {
        for (int i = 0; i < (int)_data.boxes()->size(); i++) {
            QPoint pos = ((UIBox*)_data.boxes()->at(i))->pos();
            QSize size = ((UIBox*)_data.boxes()->at(i))->size();
            QRect r = QRect(pos, pos + QPoint(size.width(), size.height()));

            QRect frame = QRect(_selFrame.start, _selFrame.start + _selFrame.end);

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
    }

    //patchcords()
    if (_editMode == em_Unlocked)
        if (hoverPatchcords(pos))
            repaint();

    //remove patchcord selection if making frame
    if (_selFrame.active)
        clickPatchcords(QPoint(-1, -1));
}

void Canvas::mousePressEventForCanvas(QMouseEvent* ev)
{

    //context menu
    if (ev->button() == Qt::RightButton) {
        QPoint pos = mapToGlobal(ev->pos());
        showPopupMenu(pos);
        ev->accept();
        return;
    }

    deselectBoxes();

    //deselect
    hoverPatchcordsOff();

    setFocus();
    //objectMaker()->hide();

    if (_editMode == em_Unlocked) {
        //sel frame
        _selFrame.active = true;
        _selFrame.start = ev->pos();
        _selFrame.end = QPoint(0, 0);

        //click patchcords()
        clickPatchcords(ev->pos());
        repaint();
    }
}

void Canvas::mouseReleaseEventForCanvas(QMouseEvent*)
{
    dragObject = 0;

    _selFrame.active = false;
    _newLine.active = false;

    repaint();
}

/////////

void Canvas::mousePressEventForBox(QMouseEvent* ev)
{
    //open canvas for subpatch
    if (getEditMode() != em_Unlocked) {
        if (_Subcanvas) {
            _Subcanvas->show();
        }
    }

    //        if ( (getEditMode()==em_Unlocked) && isSelected())
    //        {
    //            editor_->setText(QString(objectData().c_str()));
    //            editor_->show();
    //            editor_->setFocus();
    //        }

    emit selectBox(this);
    dragOffset = ev->pos();
}

void Canvas::mouseReleaseEventForBox(QMouseEvent*)
{
    repaint();
}

void Canvas::mouseMoveEventForBox(QMouseEvent* event)
{
    if (event->buttons() & Qt::LeftButton) {
        emit moveBox(this, event);
    }
    event->ignore();

    if ((getEditMode() != em_Unlocked) && (_Subcanvas)) {
        setCursor(QCursor(Qt::PointingHandCursor));
    } else {
        setCursor(QCursor(Qt::ArrowCursor));
    }
}

/////////

void Canvas::deselectBoxes()
{
    for (int i = 0; i < (int)_selectionData.boxes()->size(); i++) {
        if (_selectionData.boxes()->at(i))
            ((UIBox*)_selectionData.boxes()->at(i))->deselect();
    }

    _selectionData.boxes()->clear();
}

UIBox* Canvas::restoreSubcanvas(std::string pdObjectName, QPoint pos, t_canvas* canvas)
{
    UIBox* box = new UIBox((UIObject*)this); //test?
    box->setObjectData(pdObjectName);

    connect(box, &UIBox::selectBox, this, &Canvas::s_SelectBox);
    connect(box, &UIBox::moveBox, this, &Canvas::s_MoveBox);

    box->setEditModeRef(&_editMode);

    const char* obj_name = pdObjectName.c_str();

    t_object* new_obj = 0;
    int in_c = 0, out_c = 0;

    //temp
    if (!pdObject()) {
        qDebug("bad pd canvas instance");
        box->setErrorBox(true);
    } else {
        new_obj = (t_object*)canvas; //cmp_create_object(pd_canvas,(char*)obj_name,pos.x(), pos.y());
    }

    if (new_obj) {

        // qDebug ("created object %lu, new_obj");

        in_c = cmp_get_inlet_count(new_obj);
        out_c = cmp_get_outlet_count(new_obj);

        qDebug("created object %s ins %i outs %i ptr %lu", obj_name, in_c, out_c, (long)new_obj);

        //cm_box* newBox = canvas->createBox(objectMaker->text().toStdString(),objectMaker->pos(),in_c,out_c);
        box->setPdObject(new_obj);

    } else {
        qDebug("Error: no such object %s", obj_name);
        box->setErrorBox(true);
        in_c = 0;
        out_c = 0;
        //return 0;
    }

    for (int i = 0; i < in_c; i++)
        box->addInlet();
    for (int i = 0; i < out_c; i++)
        box->addOutlet();

    box->move(pos);

    _data.addUniqueBox(box);

    box->show();

    return box;
}

UIObject* Canvas::createObject(QString objectData1, QPoint pos) //std::string uiObjectName,
{

    qDebug("!!!");

    QStringList list = QString(objectData1).split(" ");

    //this is moved here to have all checks for special objects in one place
    //(later - inlets/outlets)

    if (list.count()) {
        if (list.at(0) == "pd") {
            //lol
            std::pair<QMainWindow*, UIObject*> newPatch;

            newPatch = emit createSubpatchWindow();

            QMainWindow* subPatch = newPatch.first;
            Canvas* newCanvas = (Canvas*)newPatch.second;

            // crazy here
            UIObject* b = createBoxForCanvas(newCanvas, objectData1.toStdString(), pos);
            ((UIBox*)b)->setSubpatchWindow((QMainWindow*)subPatch);
            ((Canvas*)b)->setSubcanvas(newCanvas);

            //                dragObject = 0;
            //                objectMaker()->close();

            qDebug("subpatch>>");

            subPatch->show();
            return b;
        }

        if (list.at(0) == "restore") {
            return 0;
        }
    }

    UIObject* obj = ObjectLoader::inst().createObject(objectData1, (t_canvas*)pdObject(), (UIWidget*)this);

    connect(obj, &UIMessage::selectBox, this, &Canvas::s_SelectBox);
    connect(obj, &UIMessage::moveBox, this, &Canvas::s_MoveBox);
    obj->setEditModeRef(&_editMode);
    obj->move(pos);
    _data.addUniqueBox(obj);

    obj->show();

    qDebug() << "created object: [" << objectData1 << "] :" << list.count() << "@" << QString(std::to_string((long)pdObject()).c_str());

    if (list.count()) {
        if (
            (list.at(0) == "inlet") || (list.at(0) == "inlet~") || (list.at(0) == "outlet") || (list.at(0) == "outlet~")) {
            qDebug("ports");
            emit updatePortCount();
            //

            portLocalCountUpdated();
        }
    }

    connect(obj, &UIObject::editObject, this, &Canvas::objectStartsEdit);

    if (drawStyle() == ds_Canvas)
        setFixedSize(minimumCanvasSize());

    return obj;
}

UIObject* Canvas::createBoxForCanvas(Canvas* newCanvas, std::string objectData, QPoint pos)
{

    //cleanup
    UIObject* obj = (UIObject*)Canvas::newView(newCanvas, (UIObject*)this, ds_Box);

    //test
    //obj->setFixedWidth(40);

    obj->setObjectData(objectData);

    connect(obj, &UIMessage::selectBox, this, &Canvas::s_SelectBox);
    connect(obj, &UIMessage::moveBox, this, &Canvas::s_MoveBox);

    obj->setEditModeRef(&_editMode);
    obj->move(pos);
    _data.addUniqueBox(obj);

    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, QColor(240, 240, 240));
    obj->setAutoFillBackground(true);
    obj->setPalette(Pal);

    obj->show();

    qDebug() << "create subcanvas @" << QString(std::to_string((long)pdObject()).c_str());

    return obj;
}

void Canvas::patchcord(UIObject* obj1, int outlet, UIObject* obj2, int inlet)
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
    } else
        qDebug("canvas patchcord error");
}

void Canvas::patchcord(UIObject* obj1, UIWidget* outport, UIObject* obj2, UIWidget* inport)
{

    //todo

    int n1 = ((Port*)outport)->portIndex;
    int n2 = ((Port*)inport)->portIndex;
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

void Canvas::deletePatchcordsFor(UIWidget* obj)
{
    //for //(int i=0;i<data_.patchcords()->size();i++)
    std::vector<Patchcord*>::iterator it;
    for (it = _data.patchcords()->begin(); it != _data.patchcords()->end();) {
        if ((*it)->connectsObject(obj))
            it = _data.patchcords()->erase(it);
        else
            ++it;
    }

    repaint();
}

////
/// \brief delete single box
///
void Canvas::deleteBox(UIObject* box)
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
    objectVec::iterator it;
    for (it = _selectionData.boxes()->begin(); it != _selectionData.boxes()->end(); ++it)

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

        box->close();

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
        if ((*it)->selected) {
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

    repaint();
}

void Canvas::setEditMode(t_editMode mode)
{
    _editMode = mode;

    if (_readOnly)
        _editMode = em_Locked;

    QPalette Pal(palette());
    QColor lockedColor = (_readOnly) ? QColor(245, 245, 255) : QColor(245, 245, 245);
    Pal.setColor(QPalette::Background, (mode != em_Locked) ? QColor(255, 255, 255) : lockedColor);
    setAutoFillBackground(true);
    setPalette(Pal);

    if (mode == em_Unlocked) {
        deselectBoxes();
        hoverPatchcordsOff();
    }

    repaint();
}

t_editMode Canvas::getEditMode() { return _editMode; }

UIObject* Canvas::getObjectByIndex(int idx)
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
    if (drawStyle() == ds_Box) {
        UIObject::setObjectData(objData);

        QFont myFont(PREF_QSTRING("Font"), 11);
        QFontMetrics fm(myFont);
        int new_w = fm.width(QString(objData.c_str())) + 10;
        new_w = (new_w < 25) ? 25 : new_w;
        setFixedWidth(new_w);
        setFixedHeight(20);

        qDebug("obj width %i", new_w);
        //
        setInletsPos();
        setOutletsPos();
    }
}

void Canvas::setGridEnabled(bool val)
{
    _gridEnabled = val;
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

patchcordVec Canvas::patchcordsForObject(UIObject* obj)
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

int Canvas::findObjectIndex(UIObject* obj)
{
    //UIObject* obj1;
    //    std::vector<UIObject*>::iterator iter = std::find(_data.boxes()->begin(), _data.boxes()->end(), obj);
    //    size_t index = std::distance(_data.boxes()->begin(), iter);
    //    if (index != _data.boxes()->size()) {
    //        return index;
    //    }
    //    return -1;

    return _data.findObjectIndex(obj);
}

void Canvas::setSubcanvas(UIObject* obj) { _Subcanvas = obj; }

//lol
//QStringList canvasAsPdStrings();

std::string Canvas::asPdFileString()
{
    if (drawStyle() == ds_Canvas) {

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

    if (drawStyle() == ds_Box) {
        std::string ret;

        if (_Subcanvas) {
            QStringList patchList = ((Canvas*)_Subcanvas)->canvasAsPdStrings();

            ret += patchList.join("\r\n").toStdString();
        } else {
            qDebug() << "missing subcanvas data";
        }

        ret += "#X restore ";
        ret += std::to_string(x()) + " " + std::to_string(y()) + " ";
        //ret += pdObjectName_+ objectData_ + properties_.asPdFileString();
        ret += objectData();

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

void Canvas::selectObject(UIObject* obj)
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
    //    std::vector<UIObject*> objects = objectboxes()();
    //    std::vector<UIObject*>::iterator it;

    //    for (it = objects.begin(); it != objects.end(); ++it) {
    //        // !check for subpatches
    //        //            out1 = "#X obj ";
    //        //            out1 += std::to_string(((UIObject*)*it)->x()) + " " + std::to_string(((UIObject*)*it)->y())+ " ";

    //        out1 = ((UIObject*)*it)->asPdFileString();
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
    _newLine.active = false;
    repaint();
}

ObjectMaker* Canvas::objectMaker()
{
    return _objectMaker;
}

void Canvas::portLocalCountUpdated()
{
    qDebug("port local count update");

    if (pdObject()) {
        qDebug("setting ports");

        int in_c = cmp_get_inlet_count((t_object*)pdObject());
        int out_c = cmp_get_outlet_count((t_object*)pdObject());

        int obj_in = inletCount();
        int obj_out = outletCount();

        if (in_c > obj_in) {
            addInlet();
            qDebug("add inlet");
        }

        if (out_c > obj_out) {
            addOutlet();
            qDebug("add outlet");
        }

        qDebug() << " ** canvas: " << (long)this;

        qDebug(" ** port count: %i %i", inletCount(), outletCount());

        int ci = cmp_get_inlet_count((t_object*)pdObject());
        int co = cmp_get_outlet_count((t_object*)pdObject());

        qDebug(" ** port count @pd: %i %i", ci, co);

        //            qDebug () << ((drawStyle()==ds_Box)?"this is box canvas":"this is canvas");
        //            qDebug () << "size" << size();

        //repaint();
    }
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

    dragObject = objectMaker();
    objectMaker()->setText(QString(""));
    objectMaker()->show();
}

void Canvas::portCountUpdated()
{
    qDebug("port count update");

    if (pdObject()) {
        qDebug("setting ports");

        int in_c = cmp_get_inlet_count((t_object*)pdObject());
        int out_c = cmp_get_outlet_count((t_object*)pdObject());

        int obj_in = inletCount();
        int obj_out = outletCount();

        if (in_c > obj_in) {
            addInlet();
            qDebug("add inlet");
        }

        if (out_c > obj_out) {
            addOutlet();
            qDebug("add outlet");
        }

        qDebug() << ((drawStyle() == ds_Box) ? "this is box canvas" : "this is canvas");
        qDebug() << "size" << size();

        repaint();
    }
};

void Canvas::objectStartsEdit(void* obj)
{
    deselectBoxes();

    qDebug("edit box>>");

    _replaceObject = (UIObject*)obj;

    objectMaker()->move(_replaceObject->pos());
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

    for (it = _data.boxes()->begin(); it != _data.boxes()->end(); ++it) {
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

    if (!_selectionData.hasObjects())
        return;

    _clipboard = _selectionData.boxesAsPdFileStrings();
    _clipboard += _selectionData.patchcordsAsPdFileStrings();

    deleteSelectedBoxes();
}
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
