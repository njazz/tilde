#include "cmo_script.h"

#include <QPushButton>

namespace qtpd
{
UIScript::UIScript(UIObject *parent) : UIObject(parent)
{
    setPdObjectName("ui.script ");

    this->setMouseTracking(true);

    this->deselect();
    this->clicked_ = false;

    QFont font = QFont(PREF_QSTRING("Font"),11,0,false);

    this->editor_ = new QPlainTextEdit(this);
    this->editor_->setFixedSize(150-5,300-27);//setFixedSize(65-5,18);
    this->editor_->move(2,21);
    this->editor_->setFont(font);
    this->editor_->show();
    this->editor_->setAttribute(Qt::WA_MacShowFocusRect, 0);

    connect(this->editor_,&QPlainTextEdit::textChanged, this,&UIScript::editorChanged);

    initProperties();

    this->setMinimumSize(300,200);
    this->setFixedSize(300,200);
    setMinimumBoxWidth(300);
    setMinimumBoxHeight(200);

    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, QColor(224,240,255));
    Pal.setColor(QPalette::Base, QColor(240,248,255));
    setAutoFillBackground(true);
    setPalette(Pal);
    editor_->setPalette(Pal);

    setBackgroundRole(QPalette::Background);

    //temporary. needs fixing
    hideSizeBox();

    //buttons
    QPushButton *b1 = new QPushButton("Run", this);
    b1->setFont(font);
    b1->move(40,1);
    b1->setFixedSize(40,20);
    b1->show();
    connect(b1, &QPushButton::clicked, this, &UIScript::btnRun);

    b1 = new QPushButton("Load", this);
    b1->setFont(font);
    b1->move(100,1);
    b1->setFixedSize(50,20);
    b1->show();
    connect(b1, &QPushButton::clicked, this, &UIScript::btnLoad);

    b1 = new QPushButton("Save", this);
    b1->setFont(font);
    b1->move(150,1);
    b1->setFixedSize(50,20);
    b1->show();
    connect(b1, &QPushButton::clicked, this, &UIScript::btnSave);

    b1 = new QPushButton("Clear", this);
    b1->setFont(font);
    b1->move(220,1);
    b1->setFixedSize(50,20);
    b1->show();
    connect(b1, &QPushButton::clicked, this, &UIScript::btnClear);

}




void  UIScript::editorChanged()
{

    QStringList list = getEditorData();

    // fix later
    properties()->set("Script", list);
}

}
