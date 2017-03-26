// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIMessage.h"

namespace qtpd {

UIMessage::UIMessage(UIObject* parent)
    : UIObject(parent)
{
    //setPdObjectName("ui.msg");

    //this->setMinimumWidth(30);
    this->setFixedSize(65, 20);

    this->setMouseTracking(true);

    this->deselect();
    this->_clicked = false;

    this->_editor = new QLineEdit(this);
    this->_editor->setFixedSize(65 - 5, 18);
    this->_editor->move(1, 1);
    this->_editor->setFont(QFont(PREF_QSTRING("Font"), 11, 0, false));
    this->_editor->hide();
    this->_editor->setAttribute(Qt::WA_MacShowFocusRect, 0);
    this->_editor->setFrame(false);

    connect(this->_editor, &QLineEdit::editingFinished, this, &UIMessage::editorDone);
    connect(this->_editor, &QLineEdit::textEdited, this, &UIMessage::editorChanged);

    this->setMinimumBoxWidth(40);
    this->setMinimumBoxHeight(20);
}

///////

void UIMessage::editorDone()
{
    qDebug("editor done");

    this->setPdMessage(this->_editor->text().toStdString());
    //todo

    this->_editor->hide();
}

void UIMessage::editorChanged()
{
    QFont myFont(PREF_QSTRING("Font"), 11);
    QFontMetrics fm(myFont);
    int new_w = fm.width(QString(this->_editor->text())) + 10;
    new_w = (new_w < 25) ? 25 : new_w;
    this->setFixedWidth(new_w);
    this->_editor->setFixedWidth(this->width() - 5);
}
}
