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

}

//cm_canvas::cm_canvas(QWidget *parent) : cm_widget((cm_widget*)parent)
//{
//    this->parent()->setParent(parent->parent());

//}

///////

void cm_canvas::s_InMousePressed(cm_widget* obj, QMouseEvent* ev)
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

void cm_canvas::s_InMouseReleased(cm_widget* obj, QMouseEvent* ev)
{
    //    printf("in:  mouse released\n");



}

void cm_canvas::s_OutMousePressed(cm_widget* obj, QMouseEvent* ev)
{
    //    printf("out: mouse pressed\n");

    this->newLine.start = ((QWidget*)obj->parent())->pos() + obj->pos() + QPoint(5,1);

    this->newLine.active = true;

    this->conn_obj1 = (cm_widget*)obj->parent();
    this->conn_out = obj;

}

void cm_canvas::s_OutMouseReleased(cm_widget* obj, QMouseEvent* ev)
{
    //    printf("out:  mouse released\n");




}

void cm_canvas::s_SelectBox(cm_box* box)
{
    this->selObjectBoxes.clear();
    this->selObjectBoxes.push_back(box);
    box->select();

}
