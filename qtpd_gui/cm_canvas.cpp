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

    this->editMode = true;

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
        this->patchcord(this->conn_obj1, this->conn_out, (cm_widget*)obj->parent(), obj);
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

    this->conn_obj1 = (cm_widget*)obj->parent();
    this->conn_out = obj;

}

void cm_canvas::s_OutMouseReleased(cm_widget* , QMouseEvent* )
{
    //    printf("out:  mouse released\n");




}

void cm_canvas::s_SelectBox(cm_widget *box)
{

    if (this->editMode)
    {
        this->selObjectBoxes.push_back(box);
        box->select();
    }

    //temporary
    this->dragObject = 0;

    //this->dragPrevPos = box->pos();
}


void cm_canvas::s_MoveBox(cm_widget *box, QMouseEvent* event)
{
    if (!this->getEditMode()) return;
    for (int i=0;i<this->selObjectBoxes.size();i++)
    {
        ((cm_widget*)this->selObjectBoxes.at(i))->move(

                    ((cm_widget*)this->selObjectBoxes.at(i))->pos() +
                    mapToParent((event->pos()-box->dragOffset))

                    );



    }


}
