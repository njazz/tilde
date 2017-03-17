// (c) 2017 Alex Nadzharov
// License: GPL3

#include "cmo_text.h"

namespace qtpd {
UIText::UIText(UIObject* parent)
    : UIObject(parent)
{
    setPdObjectName("ui.text");

    //this->setMinimumWidth(30);
    this->setFixedSize(65, 20);

    this->setMouseTracking(true);

    this->deselect();
    this->clicked_ = false;

    this->editor_ = new QPlainTextEdit(this);
    this->editor_->setFixedSize(65 - 5, 18);
    this->editor_->move(1, 1);
    this->editor_->setFont(QFont(PREF_QSTRING("Font"), 11, 0, false));
    this->editor_->hide();
    this->editor_->setAttribute(Qt::WA_MacShowFocusRect, 0);

    connect(this->editor_, &QPlainTextEdit::textChanged, this, &UIText::editorChanged);

    this->editor_->installEventFilter(this);

    this->setMinimumBoxWidth(80);
    this->setMinimumBoxHeight(20);
}

///////

void UIText::editorDone()
{
    qDebug("editor done");

    this->setPdMessage(this->editor_->document()->toPlainText().toStdString()); //text().toStdString());
    //todo

    this->editor_->hide();
}

void UIText::editorChanged()
{
    QFont myFont(PREF_QSTRING("Font"), 11);
    QFontMetrics fm(myFont);
    QString text = QString(this->editor_->document()->toPlainText());
    int new_w = fm.width(text) + 20;
    new_w = (new_w < 25) ? 25 : new_w;

    int new_h = fm.boundingRect(QRect(0, 0, new_w, 100), 0, text).height() + 20;

    new_h = (new_h < 25) ? 25 : new_h;

    this->setFixedWidth(new_w);
    this->setFixedHeight(new_h);

    this->editor_->setFixedWidth(this->width() - 1);
    this->editor_->setFixedHeight(this->height() - 2);
}
}
