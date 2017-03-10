#include "cmo_msg.h"


cmo_msg::cmo_msg(UIObject *parent) : UIObject(parent)
{
    //this->setMinimumWidth(30);
    this->setFixedSize(65,20);

    this->setMouseTracking(true);

    this->deselect();
    this->clicked_ = false;

    this->editor_ = new QLineEdit(this);
    this->editor_->setFixedSize(65-5,18);
    this->editor_->move(1,1);
    this->editor_->setFont(QFont(PREF_STRING("Font"),11,0,false));
    this->editor_->hide();
    this->editor_->setAttribute(Qt::WA_MacShowFocusRect, 0);
    this->editor_->setFrame(false);


    connect(this->editor_,&QLineEdit::editingFinished,this,&cmo_msg::editorDone);
    connect(this->editor_,&QLineEdit::textEdited, this,&cmo_msg::editorChanged);

    this->setMinimumWidth(40);
}

///////

void  cmo_msg::editorDone()
{
    qDebug("editor done");

    this->setPdMessage(this->editor_->text().toStdString());
    //todo

    this->editor_->hide();
}

void  cmo_msg::editorChanged()
{
    QFont myFont(PREF_STRING("Font"), 11);
    QFontMetrics fm(myFont);
    int new_w = fm.width(QString(this->editor_->text())) + 10;
    new_w = (new_w<25) ? 25 : new_w;
    this->setFixedWidth(new_w);
    this->editor_->setFixedWidth(this->width()-5);

}

