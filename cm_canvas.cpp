#include "cm_canvas.h"

cm_canvas::cm_canvas(QWidget *parent) : QWidget(parent)
{

    QPalette Pal;
    Pal.setColor(QPalette::Background, Qt::white);
    this->setAutoFillBackground(true);
    this->setPalette(Pal);

    this->setMouseTracking(true);

}

