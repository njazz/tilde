// (c) 2017 Alex Nadzharov
// License: GPL3

#include "cm_canvas.h"

namespace qtpd {

static const QSize EmptyCanvasSize = QSize(300, 200);

Canvas::Canvas(UIObject* parent)
    : UIObject(parent)
{

    QPalette Pal;
    Pal.setColor(QPalette::Background, Qt::white);
    this->setAutoFillBackground(true);
    this->setPalette(Pal);

    //test
    this->setFixedSize(400, 300);

    this->setMouseTracking(true);

    this->selFrame.active = false;
    this->newLine.active = false;

    this->editMode = em_Unlocked;

    this->fileName = "";

    //
    this->gridEnabled_ = true;
    this->gridSnap_ = true;
    this->gridStep_ = 20;

    //
    this->connObj1 = 0;
    this->connOutlet = 0;
    this->dragObject = 0;
    this->setPdObject(0); //extra

    //
    this->drawStyle_ = ds_Canvas;

    //
    //    this->editor_ = new QLineEdit(this);
    //    this->editor_->setFixedSize(65-5,18);
    //    this->editor_->move(1,1);
    //    this->editor_->setFont(QFont(PREF_QSTRING("Font"),11,0,false));
    //    this->editor_->hide();
    //    this->editor_->setAttribute(Qt::WA_MacShowFocusRect, 0);
    //    this->editor_->setFrame(false);

    //connect(this->editor_,&QLineEdit::editingFinished,this,&Canvas::editorDone);
    //connect(this->editor_,&QLineEdit::textEdited, this,&Canvas::editorChanged);

    objectMaker_ = new ObjectMaker((QLineEdit*)this);
    objectMaker_->hide();

    //
    this->setMinimumBoxWidth(40);
    this->setMinimumBoxHeight(20);

    replaceObject_ = 0;
}

//cm_canvas::cm_canvas(QWidget *parent) : cm_widget((cm_widget*)parent)
//{
//    this->parent()->setParent(parent->parent());

//}

///////

void Canvas::s_InMousePressed(UIWidget* obj, QMouseEvent*)
{
    //    printf("in: mouse pressed\n");
    this->newLine.active = false;

    if ((this->connObj1) && (this->connOutlet)) {
        this->patchcord(this->connObj1, this->connOutlet, (UIObject*)obj->parent(), obj);
        this->repaint();
    }

    this->connObj1 = 0;
    this->connOutlet = 0;
}

void Canvas::s_InMouseReleased(UIWidget*, QMouseEvent*)
{
    //    printf("in:  mouse released\n");
}

void Canvas::s_OutMousePressed(UIWidget* obj, QMouseEvent*)
{
    //    printf("out: mouse pressed\n");

    this->newLine.start = ((QWidget*)obj->parent())->pos() + obj->pos() + QPoint(5, 1);

    this->newLine.active = true;

    this->connObj1 = (UIObject*)obj->parent();
    this->connOutlet = (UIObject*)obj;
}

void Canvas::s_OutMouseReleased(UIWidget*, QMouseEvent*)
{
    //    printf("out:  mouse released\n");
}

void Canvas::s_SelectBox(UIWidget* box)
{

    if (this->editMode == em_Unlocked) {
        this->selectionData_.boxes_.push_back((UIObject*)box);
        box->select();
        box->repaint();
    }

    //temporary
    this->dragObject = 0;

    //this->dragPrevPos = box->pos();
}

void Canvas::s_MoveBox(UIWidget* box, QMouseEvent* event)
{
    if (!(this->getEditMode() == em_Unlocked))
        return;
    for (int i = 0; i < (int)this->selectionData_.boxes_.size(); i++) {
        UIObject* w = ((UIObject*)this->selectionData_.boxes_.at(i));
        QPoint pos = ((UIObject*)this->selectionData_.boxes_.at(i))->pos() + mapToParent((event->pos() - box->dragOffset));

        if (this->gridSnap_) {
            pos.setX(floor(pos.x() / this->gridStep_) * this->gridStep_);
            pos.setY(floor(pos.y() / this->gridStep_) * this->gridStep_);
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

//    this->setObjectData(this->editor_->text().toStdString());

//    //this->setPdMessage();
//    //todo

//    //this->editor_->hide();
//}

//void  Canvas::editorChanged()
//{
//    QFont myFont(PREF_QSTRING("Font"), 11);
//    QFontMetrics fm(myFont);
//    int new_w = fm.width(QString(this->editor_->text())) + 10;
//    new_w = (new_w<25) ? 25 : new_w;
//    this->setFixedWidth(new_w);
//    this->editor_->setFixedWidth(this->width()-5);

//    //
//    this->setInletsPos();
//    this->setOutletsPos();

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
    if (this->drawStyle() == ds_Canvas)
        last->hide();
}

void Canvas::addOutlet()
{
    UIObject::addOutlet();
    Port* last = inletAt(inletCount() - 1);
    if (this->drawStyle() == ds_Canvas)
        last->hide();
}

void Canvas::setDrawStyle(canvasDrawStyle ds)
{
    this->drawStyle_ = ds;
}

canvasDrawStyle Canvas::drawStyle()
{
    return this->drawStyle_;
}

void Canvas::paintEvent(QPaintEvent*)
{
    if (this->drawStyle_ == ds_Canvas)
        this->drawCanvas();
    if (this->drawStyle_ == ds_Box)
        this->drawObjectBox();
}

void Canvas::drawCanvas()
{
    //grid
    if (this->gridEnabled_ && (this->editMode != em_Locked)) {
        QPainter p(this);
        p.scale(this->scale(), this->scale());

        p.setPen(QPen(QColor(224, 224, 224), 1, Qt::DotLine, Qt::SquareCap, Qt::BevelJoin));
        for (int x = 0; x < this->width(); x += this->gridStep_) {
            p.drawLine(x, 0, x, this->height());
        }
        for (int y = 0; y < this->height(); y += this->gridStep_) {
            p.drawLine(0, y, this->width(), y);
        }
    }
    if (this->selFrame.active) {
        QPainter p(this);

        p.setPen(QPen(QColor(128, 128, 128), 1, Qt::DashLine, Qt::SquareCap, Qt::BevelJoin));
        p.drawRect(this->selFrame.start.x(), this->selFrame.start.y(), this->selFrame.end.x(), this->selFrame.end.y());
    }

    if (this->newLine.active) {
        QPainter p(this);

        p.setPen(QPen(QColor(128, 128, 128), 1, Qt::DashLine, Qt::SquareCap, Qt::BevelJoin));
        p.drawLine(this->newLine.start, this->newLine.end);
    }

    this->paintPatchcords();
}

void Canvas::drawObjectBox()
{
    QPainter p(this);
    p.setRenderHint(QPainter::HighQualityAntialiasing, true);

    {
        p.setPen(QPen(QColor(192, 192, 192), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        p.drawRect(0, 1, this->width(), this->height() - 2);
    }

    QColor rectColor = (this->errorBox()) ? QColor(255, 0, 0) : QColor(128, 128, 128);
    p.setPen(QPen(rectColor, 2, (this->errorBox()) ? Qt::DashLine : Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
    p.drawRect(0, 0, this->width(), this->height());
    QTextOption* op = new QTextOption;
    op->setAlignment(Qt::AlignLeft);
    p.setPen(QPen(QColor(0, 0, 0), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

    p.setFont(QFont(PREF_QSTRING("Font"), 11, 0, false));
    p.drawText(2, 3, this->width() - 2, this->height() - 3, 0, this->objectData().c_str(), 0);

    if (this->isSelected()) {
        p.setPen(QPen(QColor(0, 192, 255), 2, (this->errorBox()) ? Qt::DashLine : Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        p.drawRect(0, 0, this->width(), this->height());
    }
}

void Canvas::paintPatchcords()
{
    for (int i = 0; i < (int)this->data_.patchcords_.size(); i++) {
        QPainter p(this);

        QColor b_pc_color = (((Patchcord*)this->data_.patchcords_.at(i))->patchcordType() == cm_pt_signal) ? QColor(128, 160, 192) : QColor(0, 0, 0);
        // cleanup
        QColor pc_color = ((Patchcord*)this->data_.patchcords_.at(i))->mouseover ? QColor(255, 192, 0) : b_pc_color;
        if (((Patchcord*)this->data_.patchcords_.at(i))->selected)
            pc_color = QColor(0, 192, 255);

        p.setRenderHint(QPainter::HighQualityAntialiasing, true);
        p.setPen(QPen(pc_color, 1 + (((Patchcord*)this->data_.patchcords_.at(i))->patchcordType() == cm_pt_signal), Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

        //todo option
        //p.drawLine(((cm_patchcord*)this->data_.patchcords.at(i))->getStartPoint(), ((cm_patchcord*)this->data_.patchcords.at(i))->getEndPoint());

        QPainterPath path;
        QPoint start = ((Patchcord*)this->data_.patchcords_.at(i))->startPoint();
        QPoint end = ((Patchcord*)this->data_.patchcords_.at(i))->endPoint();

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
    for (int i = 0; i < (int)this->data_.patchcords_.size(); i++) {
        ((Patchcord*)this->data_.patchcords_.at(i))->mouseover = ((Patchcord*)this->data_.patchcords_.at(i))->hover(pos);
        if (((Patchcord*)this->data_.patchcords_.at(i))->mouseover)
            ret = true;
    }
    return ret;
}

void Canvas::hoverPatchcordsOff()
{
    //bool ret = false;
    for (int i = 0; i < (int)this->data_.patchcords_.size(); i++) {
        ((Patchcord*)this->data_.patchcords_.at(i))->mouseover = false; // ((cm_patchcord*)this->data_.patchcords.at(i))->hover(pos);
    }
}

bool Canvas::clickPatchcords(QPoint pos)
{
    bool ret = false;
    for (int i = 0; i < (int)this->data_.patchcords_.size(); i++) {
        ((Patchcord*)this->data_.patchcords_.at(i))->selected = ((Patchcord*)this->data_.patchcords_.at(i))->hover(pos);
        if (((Patchcord*)this->data_.patchcords_.at(i))->selected)
            ret = true;
    }
    return ret;
}

void Canvas::mouseMoveEvent(QMouseEvent* ev)
{
    if (this->drawStyle() == ds_Canvas)
        this->mouseMoveEventForCanvas(ev);
    if (this->drawStyle() == ds_Box)
        this->mouseMoveEventForBox(ev);
}

void Canvas::mousePressEvent(QMouseEvent* ev)
{
    if (this->drawStyle() == ds_Canvas)
        this->mousePressEventForCanvas(ev);
    if (this->drawStyle() == ds_Box)
        this->mousePressEventForBox(ev);
}

void Canvas::mouseReleaseEvent(QMouseEvent* ev)
{
    if (this->drawStyle() == ds_Canvas)
        this->mouseReleaseEventForCanvas(ev);
    if (this->drawStyle() == ds_Box)
        this->mouseReleaseEventForBox(ev);
}

/////////

void Canvas::mouseMoveEventForCanvas(QMouseEvent* ev)
{
    if (!ev)
        return;

    QPoint pos = ev->pos();

    newObjectPos = pos;

    this->selFrame.end = pos - this->selFrame.start;
    this->newLine.end = pos;

    this->repaint();

    // move new object
    if (this->dragObject) {
        QPoint offset = QPoint(10, 10);

        QPoint newpos = mapToParent(ev->pos() - offset);
        if (this->gridSnap_) {
            newpos.setX(floor(newpos.x() / this->gridStep_) * this->gridStep_);
            newpos.setY(floor(newpos.y() / this->gridStep_) * this->gridStep_);
        }

        this->dragObject->move(newpos);
    }

    //selection frame
    if (this->selFrame.active) {
        for (int i = 0; i < (int)this->data_.boxes_.size(); i++) {
            QPoint pos = ((UIBox*)this->data_.boxes_.at(i))->pos();
            QSize size = ((UIBox*)this->data_.boxes_.at(i))->size();
            QRect r = QRect(pos, pos + QPoint(size.width(), size.height()));

            QRect frame = QRect(this->selFrame.start, this->selFrame.start + this->selFrame.end);

            if (frame.contains(r, false)) {
                ((UIBox*)this->data_.boxes_.at(i))->select();
                this->selectionData_.boxes_.push_back(this->data_.boxes_.at(i));
            } else {
                ((UIBox*)this->data_.boxes_.at(i))->deselect();

                auto it = std::find(this->selectionData_.boxes_.begin(), this->selectionData_.boxes_.end(), this->data_.boxes_.at(i));
                if (it != this->selectionData_.boxes_.end()) {
                    this->selectionData_.boxes_.erase(it);
                }
            }
        }
    }

    //patchcords
    if (this->editMode == em_Unlocked)
        if (this->hoverPatchcords(pos))
            this->repaint();

    //remove patchcord selection if making frame
    if (this->selFrame.active)
        this->clickPatchcords(QPoint(-1, -1));
}

void Canvas::mousePressEventForCanvas(QMouseEvent* ev)
{

    deselectBoxes();

    //deselect
    this->hoverPatchcordsOff();

    setFocus();
    //objectMaker()->hide();

    if (this->editMode == em_Unlocked) {
        //sel frame
        this->selFrame.active = true;
        this->selFrame.start = ev->pos();
        this->selFrame.end = QPoint(0, 0);

        //click patchcords
        this->clickPatchcords(ev->pos());
        this->repaint();
    }
}

void Canvas::mouseReleaseEventForCanvas(QMouseEvent*)
{
    this->dragObject = 0;

    this->selFrame.active = false;
    this->newLine.active = false;

    this->repaint();
}

/////////

void Canvas::mousePressEventForBox(QMouseEvent* ev)
{
    //open canvas for subpatch
    if (this->getEditMode() != em_Unlocked) {
        if (this->Subcanvas_) {
            this->Subcanvas_->show();
        }
    }

    //        if ( (this->getEditMode()==em_Unlocked) && this->isSelected())
    //        {
    //            this->editor_->setText(QString(this->objectData().c_str()));
    //            this->editor_->show();
    //            this->editor_->setFocus();
    //        }

    emit selectBox(this);
    this->dragOffset = ev->pos();
}

void Canvas::mouseReleaseEventForBox(QMouseEvent*)
{
    this->repaint();
}

void Canvas::mouseMoveEventForBox(QMouseEvent* event)
{
    if (event->buttons() & Qt::LeftButton) {
        emit moveBox(this, event);
    }
    event->ignore();

    if ((this->getEditMode() != em_Unlocked) && (this->Subcanvas_)) {
        this->setCursor(QCursor(Qt::PointingHandCursor));
    } else {
        this->setCursor(QCursor(Qt::ArrowCursor));
    }
}

/////////

void Canvas::deselectBoxes()
{
    for (int i = 0; i < (int)this->selectionData_.boxes_.size(); i++) {
        if (this->selectionData_.boxes_.at(i))
            ((UIBox*)this->selectionData_.boxes_.at(i))->deselect();
    }

    this->selectionData_.boxes_.clear();
}

UIBox* Canvas::restoreSubcanvas(std::string pdObjectName, QPoint pos, t_canvas* canvas)
{
    UIBox* box = new UIBox((UIObject*)this); //test?
    box->setObjectData(pdObjectName);

    connect(box, &UIBox::selectBox, this, &Canvas::s_SelectBox);
    connect(box, &UIBox::moveBox, this, &Canvas::s_MoveBox);

    box->setEditModeRef(&this->editMode);

    const char* obj_name = pdObjectName.c_str();

    t_object* new_obj = 0;
    int in_c = 0, out_c = 0;

    //temp
    if (!this->pdObject()) {
        qDebug("bad pd canvas instance");
        box->setErrorBox(true);
    } else {
        new_obj = (t_object*)canvas; //cmp_create_object(this->pd_canvas,(char*)obj_name,pos.x(), pos.y());
    }

    if (new_obj) {

        // qDebug ("created object %lu, new_obj");

        in_c = cmp_get_inlet_count(new_obj);
        out_c = cmp_get_outlet_count(new_obj);

        qDebug("created object %s ins %i outs %i ptr %lu", obj_name, in_c, out_c, (long)new_obj);

        //cm_box* newBox = this->canvas->createBox(this->objectMaker->text().toStdString(),this->objectMaker->pos(),in_c,out_c);
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

    this->data_.boxes_.push_back(box);

    box->show();

    return box;
}

UIObject* Canvas::createObject(std::string uiObjectName, std::string objectData1, QPoint pos)
{

    qDebug("!!!");

    QStringList atoms = QString(objectData1.c_str()).split(" ");

    //this is moved here to have all checks for special objects in one place
    //(later - inlets/outlets)

    if (atoms.count()) {
        if (atoms.at(0) == "pd") {
            //lol
            std::pair<QMainWindow*, UIObject*> newPatch;

            newPatch = emit createSubpatchWindow();

            QMainWindow* subPatch = newPatch.first;
            Canvas* newCanvas = (Canvas*)newPatch.second;

            // crazy here
            UIObject* b = this->createBoxForCanvas(newCanvas, objectData1, pos);
            ((UIBox*)b)->setSubpatchWindow((QMainWindow*)subPatch);
            ((Canvas*)b)->setSubcanvas(newCanvas);

            //                this->dragObject = 0;
            //                this->objectMaker()->close();

            qDebug("subpatch>>");

            subPatch->show();
            return b;
        }

        if (atoms.at(0) == "restore") {
            return 0;
        }
    }

    UIObject* obj = ObjectLoader::inst().createObject(uiObjectName, objectData1, (t_canvas*)this->pdObject(), (UIWidget*)this);

    connect(obj, &UIMessage::selectBox, this, &Canvas::s_SelectBox);
    connect(obj, &UIMessage::moveBox, this, &Canvas::s_MoveBox);
    obj->setEditModeRef(&this->editMode);
    obj->move(pos);
    this->data_.boxes_.push_back(obj);

    obj->show();

    qDebug() << "created object: [" << QString(uiObjectName.c_str()) << "]" << objectData1.c_str() << ":" << atoms.count() << "@" << QString(std::to_string((long)this->pdObject()).c_str());

    if (atoms.count()) {
        if (
            (atoms.at(0) == "inlet") || (atoms.at(0) == "inlet~") || (atoms.at(0) == "outlet") || (atoms.at(0) == "outlet~")) {
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

    obj->setEditModeRef(&this->editMode);
    obj->move(pos);
    this->data_.boxes_.push_back(obj);

    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, QColor(240, 240, 240));
    obj->setAutoFillBackground(true);
    obj->setPalette(Pal);

    obj->show();

    qDebug() << "create subcanvas @" << QString(std::to_string((long)this->pdObject()).c_str());

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
        this->data_.patchcords_.push_back(pc);
    } else
        qDebug("canvas patchcord error");
}

void Canvas::patchcord(UIObject* obj1, UIWidget* outport, UIObject* obj2, UIWidget* inport)
{

    //todo

    int n1 = ((Port*)outport)->portIndex;
    int n2 = ((Port*)inport)->portIndex;
    this->patchcord(obj1, n1, obj2, n2);
}

//    ////unused?
//    void deletePatchcord(Patchcord* pc)
//    {
//        // no repaint

//        //cleanup !!!
//        patchcordVec::iterator it = std::find(this->data_.patchcords.begin(), this->data_.patchcords.end(), pc);

//        if (it != this->data_.patchcords.end()) { this->data_.patchcords.erase(it); }

//    }

void Canvas::deletePatchcordsFor(UIWidget* obj)
{
    //for //(int i=0;i<this->data_.patchcords.size();i++)
    std::vector<Patchcord*>::iterator it;
    for (it = this->data_.patchcords_.begin(); it != this->data_.patchcords_.end();) {
        if ((*it)->connectsObject(obj))
            it = this->data_.patchcords_.erase(it);
        else
            ++it;
    }

    this->repaint();
}

////
/// \brief delete single box
///
void Canvas::deleteBox(UIObject* box)
{
    deselectBoxes();
    selectionData_.boxes_.push_back(box);
    delBoxes();
}

////
/// \brief delete all selected object boxes
///
void Canvas::delBoxes()
{
    objectVec::iterator it;
    for (it = selectionData_.boxes_.begin(); it != selectionData_.boxes_.end(); ++it)

    {
        //
        UIObject* box = *it;
        qDebug("delete %lu | %lu", (long)box, (long)box->pdObject());

        if (box->pdObject()) {
            //NEEDS FIX
            if ((t_object*)(box->pdObject())) {
                if (!box->errorBox())
                    cmp_deleteobject((t_canvas*)this->pdObject(), (t_object*)box->pdObject());
                box->setPdObject(0);
            }
        } else {
            qDebug("didn't delete pd object");
        }

        this->deletePatchcordsFor(box);

        box->close();

        data_.boxes_.erase(std::remove(data_.boxes_.begin(), data_.boxes_.end(), *it), data_.boxes_.end());
        //selectionData_.boxes.erase(std::remove(selectionData_.boxes.begin(), selectionData_.boxes.end(), *it), selectionData_.boxes.end());
    }

    selectionData_.boxes_.clear();
    ;
}

////
/// \brief delete all selected patchcords
///
void Canvas::delSelectedPatchcords()
{
    //cleanup
    //for (int i=0;i<this->data_.patchcords.size(); i++)
    std::vector<Patchcord*>::iterator it;
    for (it = this->data_.patchcords_.begin(); it != this->data_.patchcords_.end();) {
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

            it = this->data_.patchcords_.erase(it);
        } else
            ++it;
    }

    this->repaint();
}

void Canvas::setEditMode(t_editMode mode)
{
    this->editMode = mode;

    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, (mode != em_Locked) ? QColor(255, 255, 255) : QColor(245, 245, 245));
    this->setAutoFillBackground(true);
    this->setPalette(Pal);

    this->deselectBoxes();
    this->hoverPatchcordsOff();

    this->repaint();
}

t_editMode Canvas::getEditMode() { return this->editMode; }

UIObject* Canvas::getObjectByIndex(int idx)
{
    if ((idx < (int)this->data_.boxes_.size()) && (idx >= 0))
        return this->data_.boxes_.at(idx);
    else {
        qDebug("object not found");
        return 0;
    }
}

void Canvas::setObjectData(std::string objData)
{
    if (this->drawStyle() == ds_Box) {
        UIObject::setObjectData(objData);

        QFont myFont(PREF_QSTRING("Font"), 11);
        QFontMetrics fm(myFont);
        int new_w = fm.width(QString(objData.c_str())) + 10;
        new_w = (new_w < 25) ? 25 : new_w;
        this->setFixedWidth(new_w);
        this->setFixedHeight(20);

        qDebug("obj width %i", new_w);
        //
        this->setInletsPos();
        this->setOutletsPos();
    }
}

void Canvas::setGridEnabled(bool val)
{
    this->gridEnabled_ = val;
}

void Canvas::setGridSnap(bool val)
{
    this->gridSnap_ = val;
}

objectVec Canvas::objectBoxes()
{
    return this->data_.boxes_;
}

patchcordVec Canvas::patchcords()
{
    return this->data_.patchcords_;
}

objectVec Canvas::selectedObjectBoxes()
{
    return this->selectionData_.boxes_;
}

patchcordVec Canvas::selectedPatchcords()
{
    return this->selectionData_.patchcords_;
}

patchcordVec Canvas::patchcordsForObject(UIObject* obj)
{
    patchcordVec ret;

    patchcordVec::iterator it;
    for (it = data_.patchcords_.begin(); it != data_.patchcords_.end(); ++it) {
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
    std::vector<UIObject*>::iterator iter = std::find(this->data_.boxes_.begin(), data_.boxes_.end(), obj);
    size_t index = std::distance(this->data_.boxes_.begin(), iter);
    if (index != this->data_.boxes_.size()) {
        return index;
    }
    return -1;
}

void Canvas::setSubcanvas(UIObject* obj) { Subcanvas_ = obj; }

//lol
//QStringList canvasAsPdStrings();

std::string Canvas::asPdFileString()
{
    if (this->drawStyle() == ds_Canvas) {

        // todo cleanup

        std::string ret;

        ret = "#N canvas ";
        ret += std::to_string(this->x()) + " ";
        ret += std::to_string(this->y()) + " ";
        ret += std::to_string(this->width()) + "  ";
        ret += std::to_string(this->height()) + " ";
        ret += "10; \r\n";

        return ret;
    }

    if (this->drawStyle() == ds_Box) {
        std::string ret;

        if (this->Subcanvas_) {
            QStringList patchList = ((Canvas*)this->Subcanvas_)->canvasAsPdStrings();

            ret += patchList.join("\r\n").toStdString();
        } else {
            qDebug() << "missing subcanvas data";
        }

        ret += "#X restore ";
        ret += std::to_string(this->x()) + " " + std::to_string(this->y()) + " ";
        //ret += this->pdObjectName_+ this->objectData_ + this->properties_.asPdFileString();
        ret += objectData();

        return ret;
    }

    return "";
}

std::string Canvas::patchcordAsPdFileString(Patchcord* pcord)
{
    //TODO

    int obj1i = this->findObjectIndex(pcord->obj1());
    int obj2i = this->findObjectIndex(pcord->obj2());

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

    int obj1i = this->findObjectIndex(pcord->obj1());
    int obj2i = this->findObjectIndex(pcord->obj2());

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
    selectionData_.boxes_.push_back(obj);
}

void Canvas::selectAll()
{
    qDebug("select all");
    objectVec::iterator it;
    for (it = data_.boxes_.begin(); it != data_.boxes_.end(); ++it) {
        selectObject(*it);
    }

    //selectionData_.patchcords_ = data_.patchcords_;
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

    out1 = this->asPdFileString(); //"#N canvas 0 0 400 300 10;\r\n";     //temporary
    //file->write(out1.c_str(),out1.size());

    ret.append(out1.c_str());

    //objects
    std::vector<UIObject*> objects = this->objectBoxes();
    std::vector<UIObject*>::iterator it;

    for (it = objects.begin(); it != objects.end(); ++it) {
        // !check for subpatches
        //            out1 = "#X obj ";
        //            out1 += std::to_string(((UIObject*)*it)->x()) + " " + std::to_string(((UIObject*)*it)->y())+ " ";

        out1 = ((UIObject*)*it)->asPdFileString();
        out1 += ";\r\n";

        ret.append(out1.c_str());
    }

    //patchcords
    std::vector<Patchcord*> patchcords = this->patchcords();
    std::vector<Patchcord*>::iterator it2;

    for (it2 = patchcords.begin(); it2 != patchcords.end(); ++it2) {
        // check for subpatches
        out1 = "#X connect ";
        out1 += this->patchcordAsPdFileString(*it2);
        out1 += ";\r\n";

        ret.append(out1.c_str());
    }

    return ret;
}

void Canvas::cancelPatchcord()
{
    this->newLine.active = false;
    this->repaint();
}

ObjectMaker* Canvas::objectMaker()
{
    return objectMaker_;
}

void Canvas::portLocalCountUpdated()
{
    qDebug("port local count update");

    if (this->pdObject()) {
        qDebug("setting ports");

        int in_c = cmp_get_inlet_count((t_object*)this->pdObject());
        int out_c = cmp_get_outlet_count((t_object*)this->pdObject());

        int obj_in = this->inletCount();
        int obj_out = this->outletCount();

        if (in_c > obj_in) {
            this->addInlet();
            qDebug("add inlet");
        }

        if (out_c > obj_out) {
            this->addOutlet();
            qDebug("add outlet");
        }

        qDebug() << " ** canvas: " << (long)this;

        qDebug(" ** port count: %i %i", this->inletCount(), this->outletCount());

        int ci = cmp_get_inlet_count((t_object*)this->pdObject());
        int co = cmp_get_outlet_count((t_object*)this->pdObject());

        qDebug(" ** port count @pd: %i %i", ci, co);

        //            qDebug () << ((drawStyle()==ds_Box)?"this is box canvas":"this is canvas");
        //            qDebug () << "size" << this->size();

        //this->repaint();
    }
};

void Canvas::setReplaceObject(UIObject* obj)
{
    replaceObject_ = obj;
}

UIObject* Canvas::replaceObject()
{
    return replaceObject_;
}

void Canvas::showNewObjectMaker()
{

    objectMaker()->move(newObjectPos);
    objectMaker()->setFixedSize(60, 20);
    objectMaker()->setFocus();

    dragObject = objectMaker();
    objectMaker()->setText(QString(""));
    objectMaker()->show();
}

void Canvas::portCountUpdated()
{
    qDebug("port count update");

    if (this->pdObject()) {
        qDebug("setting ports");

        int in_c = cmp_get_inlet_count((t_object*)this->pdObject());
        int out_c = cmp_get_outlet_count((t_object*)this->pdObject());

        int obj_in = this->inletCount();
        int obj_out = this->outletCount();

        if (in_c > obj_in) {
            this->addInlet();
            qDebug("add inlet");
        }

        if (out_c > obj_out) {
            this->addOutlet();
            qDebug("add outlet");
        }

        qDebug() << ((drawStyle() == ds_Box) ? "this is box canvas" : "this is canvas");
        qDebug() << "size" << this->size();

        this->repaint();
    }
};

void Canvas::objectStartsEdit(void* obj)
{
    deselectBoxes();

    qDebug("edit box>>");

    replaceObject_ = (UIObject*)obj;

    objectMaker()->move(replaceObject_->pos());
    objectMaker()->setFixedSize(replaceObject_->size());
    objectMaker()->setText(QString(replaceObject_->objectData().c_str()));
    objectMaker()->setFocus();
    //replaceObject_->hide();
    objectMaker()->show();
    objectMaker()->raise();
}

QSize Canvas::minimumCanvasSize()
{
    objectVec::iterator it;

    QSize ret = QSize(300, 200); //EmptyCanvasSize;

    for (it = data_.boxes_.begin(); it != data_.boxes_.end(); ++it) {
        int obj_x = ((UIObject*)*it)->x() + ((UIObject*)*it)->width() + 80;
        int obj_y = ((UIObject*)*it)->y() + ((UIObject*)*it)->height() + 80;

        if (obj_x > (ret.width() - 80))
            ret.setWidth(obj_x);
        if (obj_y > (ret.height() - 80))
            ret.setHeight(obj_y);
    }

    if (ret.width() < windowSize_.width())
        ret.setWidth(windowSize_.width());
    if (ret.height() < windowSize_.height())
        ret.setHeight(windowSize_.height());

    return ret;
}

void Canvas::setWindowSize(QSize wsize)
{
    windowSize_ = wsize;
}
}
