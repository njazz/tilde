#include "cm_box.h"

cm_box::cm_box(QWidget *parent) : QWidget(parent)
{
    cm_port *in1 = new cm_port(this);
    cm_port *out1 = new cm_port(this);

    in1->move(0,0);
    in1->setFixedSize(10,3);
    out1->move(0,17);
    out1->setFixedSize(10,3);

    this->setFixedSize(65,20);
    this->move(30,30);

}




///////////////////


void cm_box::portMousePressed()
{

}
void cm_box::portMouseReleased()
{

}
void cm_box::portMouseEntered()
{

}
void cm_box::portMouseLeaved()
{

}
