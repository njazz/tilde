#include "cm_canvas.h"

namespace qtpd{

Canvas::Canvas(UIObject *parent) : UIObject(parent)
{

    QPalette Pal;
    Pal.setColor(QPalette::Background, Qt::white);
    this->setAutoFillBackground(true);
    this->setPalette(Pal);

    //test
    this->setFixedSize(400,300);

    this->setMouseTracking(true);

    this->selFrame.active = false;
    this->newLine.active = false;

    this->editMode = em_Unlocked;

    this->fileName = "";

    //
    this->gridEnabled = true;
    this->gridSnap = true;
    this->gridStep = 20;

    //
    this->connObj1 = 0;
    this->connOutlet = 0;
    this->dragObject = 0;
    this->setPdObject(0);   //extra

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

    replaceObject_ = 0;



}

//cm_canvas::cm_canvas(QWidget *parent) : cm_widget((cm_widget*)parent)
//{
//    this->parent()->setParent(parent->parent());

//}

///////

void Canvas::s_InMousePressed(UIWidget* obj, QMouseEvent* )
{
    //    printf("in: mouse pressed\n");
    this->newLine.active = false;

    if ( (this->connObj1) && (this->connOutlet))
    {
        this->patchcord(this->connObj1, this->connOutlet, (UIObject*)obj->parent(), obj);
        this->repaint();
    }

    this->connObj1 = 0;
    this->connOutlet = 0;


}

void Canvas::s_InMouseReleased(UIWidget* , QMouseEvent* )
{
    //    printf("in:  mouse released\n");

}

void Canvas::s_OutMousePressed(UIWidget* obj, QMouseEvent* )
{
    //    printf("out: mouse pressed\n");

    this->newLine.start = ((QWidget*)obj->parent())->pos() + obj->pos() + QPoint(5,1);

    this->newLine.active = true;

    this->connObj1 = (UIObject*)obj->parent();
    this->connOutlet = (UIObject*)obj;

}

void Canvas::s_OutMouseReleased(UIWidget* , QMouseEvent* )
{
    //    printf("out:  mouse released\n");




}

void Canvas::s_SelectBox(UIWidget *box)
{

    if (this->editMode == em_Unlocked)
    {
        this->selectionData_.boxes_.push_back((UIObject*)box);
        box->select();
        box->repaint();
    }

    //temporary
    this->dragObject = 0;

    //this->dragPrevPos = box->pos();
}


void Canvas::s_MoveBox(UIWidget *box, QMouseEvent* event)
{
    if (! (this->getEditMode() == em_Unlocked) ) return;
    for (int i=0;i<(int)this->selectionData_.boxes_.size();i++)
    {
        UIObject* w = ((UIObject*)this->selectionData_.boxes_.at(i));
        QPoint pos = ((UIObject*)this->selectionData_.boxes_.at(i))->pos() +
                mapToParent((event->pos()-box->dragOffset));

        if (this->gridSnap)
        {
            pos.setX(floor(pos.x()/this->gridStep)*this->gridStep);
            pos.setY(floor(pos.y()/this->gridStep)*this->gridStep);
        }


        w->move(pos);
        t_object *obj = (t_object*)w->pdObject();
        if (obj)
            cmp_moveobject(obj, (int)pos.x(), (int)pos.y() );

    }


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

}
