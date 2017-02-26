#include "cm_canvas.h"

cm_canvas::cm_canvas(QWidget *parent) : QWidget(parent)
{

    QPalette Pal;
    Pal.setColor(QPalette::Background, Qt::white);
    this->setAutoFillBackground(true);
    this->setPalette(Pal);

    this->setMouseTracking(true);

}

///////


void cm_canvas::portMousePressed()
{

}
void cm_canvas::portMouseReleased()
{

}
void cm_canvas::portMouseEntered()
{

}
void cm_canvas::portMouseLeaved()
{

}
