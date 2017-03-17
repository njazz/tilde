#include "cmo_box.h"


namespace qtpd
{
UIBox::UIBox(UIObject *parent) : UIObject(parent)
{
    //setPdObjectName("ui.bang");

    this->setFixedHeight(20);
    //this->setMinimumWidth(22);
    this->setMouseTracking(true);

    this->deselect();// = false;

    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, QColor(240,240,240));
    this->setAutoFillBackground(true);
    this->setPalette(Pal);

    this->setErrorBox(false);

    this->setSubpatchWindow(0);


    //this->clicked_ = false;

    this->editor_ = new QLineEdit(this);
    this->editor_->setFixedSize(65-5,18);
    this->editor_->move(1,1);
    this->editor_->setFont(QFont(PREF_QSTRING("Font"),11,0,false));
    this->editor_->hide();
    this->editor_->setAttribute(Qt::WA_MacShowFocusRect, 0);
    this->editor_->setFrame(false);


    connect(this->editor_,&QLineEdit::editingFinished,this,&UIBox::editorDone);
    connect(this->editor_,&QLineEdit::textEdited, this,&UIBox::editorChanged);

    this->setMinimumBoxWidth(40);
    this->setMinimumBoxHeight(20);
}









///////

void  UIBox::editorDone()
{
    qDebug("editor done");

    this->setPdMessage(this->editor_->text().toStdString());
    //todo

    this->editor_->hide();
}

void  UIBox::editorChanged()
{
    QFont myFont(PREF_QSTRING("Font"), 11);
    QFontMetrics fm(myFont);
    int new_w = fm.width(QString(this->editor_->text())) + 10;
    new_w = (new_w<25) ? 25 : new_w;
    this->setFixedWidth(new_w);
    this->editor_->setFixedWidth(this->width()-5);

    //
    this->setInletsPos();
    this->setOutletsPos();

}

}
