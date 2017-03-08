#include "cm_canvas.h"

cm_canvas::cm_canvas(cm_widget *parent) : cm_widget(parent)
{

    QPalette Pal;
    Pal.setColor(QPalette::Background, Qt::white);
    this->setAutoFillBackground(true);
    this->setPalette(Pal);

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
    this->conn_obj1 = 0;
    this->conn_out = 0;
    this->dragObject = 0;
    this->pd_canvas = 0;
}

//cm_canvas::cm_canvas(QWidget *parent) : cm_widget((cm_widget*)parent)
//{
//    this->parent()->setParent(parent->parent());

//}

///////

void cm_canvas::s_InMousePressed(cm_widget* obj, QMouseEvent* )
{
    //    printf("in: mouse pressed\n");
    this->newLine.active = false;

    if ( (this->conn_obj1) && (this->conn_out))
    {
        this->patchcord(this->conn_obj1, this->conn_out, (cm_object*)obj->parent(), obj);
        this->repaint();
    }

    this->conn_obj1 = 0;
    this->conn_out = 0;


}

void cm_canvas::s_InMouseReleased(cm_widget* , QMouseEvent* )
{
    //    printf("in:  mouse released\n");

}

void cm_canvas::s_OutMousePressed(cm_widget* obj, QMouseEvent* )
{
    //    printf("out: mouse pressed\n");

    this->newLine.start = ((QWidget*)obj->parent())->pos() + obj->pos() + QPoint(5,1);

    this->newLine.active = true;

    this->conn_obj1 = (cm_object*)obj->parent();
    this->conn_out = (cm_object*)obj;

}

void cm_canvas::s_OutMouseReleased(cm_widget* , QMouseEvent* )
{
    //    printf("out:  mouse released\n");




}

void cm_canvas::s_SelectBox(cm_widget *box)
{

    if (this->editMode == em_Unlocked)
    {
        this->selObjectBoxes.push_back((cm_object*)box);
        box->select();
        box->repaint();
    }

    //temporary
    this->dragObject = 0;

    //this->dragPrevPos = box->pos();
}


void cm_canvas::s_MoveBox(cm_widget *box, QMouseEvent* event)
{
    if (! (this->getEditMode() == em_Unlocked) ) return;
    for (int i=0;i<(int)this->selObjectBoxes.size();i++)
    {
        cm_object* w = ((cm_object*)this->selObjectBoxes.at(i));
        QPoint pos = ((cm_object*)this->selObjectBoxes.at(i))->pos() +
                mapToParent((event->pos()-box->dragOffset));

        if (this->gridSnap)
        {
            pos.setX(floor(pos.x()/this->gridStep)*this->gridStep);
            pos.setY(floor(pos.y()/this->gridStep)*this->gridStep);
        }


        w->move(pos);

        cmp_moveobject((t_object*)w->getPdObject(), (int)pos.x(), (int)pos.y() );

    }


}
