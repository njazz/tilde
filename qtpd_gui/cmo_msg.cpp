#include "cmo_msg.h"

//cmo_msg::cmo_msg()
//{

//}

cmo_msg::cmo_msg(cm_widget *parent) : cm_widget(parent)
{
    this->setFixedSize(65,20);

    this->setMouseTracking(true);

    this->deselect();

    this->editor_ = new QLineEdit(this);
    this->editor_->setFixedSize(65-5,18);
    this->editor_->move(1,1);
    this->editor_->hide();

    this->editor_->setFrame(false);

    connect(this->editor_,&QLineEdit::editingFinished,this,&cmo_msg::editorDone);

//    QPalette Pal(palette());
//    Pal.setColor(QPalette::Background, QColor(220,220,220));
//    this->editor_->setAutoFillBackground(true);
//    this->editor_->setPalette(Pal);

}

///////

void  cmo_msg::editorDone()
{
    qDebug("editor done");

    this->setPdMessage(this->editor_->text().toStdString());
    //todo

    this->editor_->hide();
}
