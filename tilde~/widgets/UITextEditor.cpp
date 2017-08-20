// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UITextEditor.h"

#include "Preferences.h"

#include <QPushButton>

namespace tilde {

UITextEditor::UITextEditor(QWidget* parent)
    : QWidget(parent)
{
    QFont font = QFont(PREF_QSTRING("Font"), 11, 0, false);

    _textEdit = new QPlainTextEdit();
    _textEdit->setFont(font);
    _textEdit->setAttribute(Qt::WA_MacShowFocusRect, 0);
    _textEdit->setCursorWidth(2);
    _textEdit->setParent(this);

    setBaseSize(300, 200);

    QPalette Pal; //palette());
    Pal.setColor(QPalette::Background, QColor(224, 240, 255));
    Pal.setColor(QPalette::Base, QColor(255, 248, 240));
    _textEdit->setPalette(Pal);

    //buttons
    QPushButton* b1 = new QPushButton("Compile");
    b1->setParent(this);
    b1->setFont(font);
    b1->move(10, 1);
    b1->setFixedSize(80, 20);
    b1->show();
    connect(b1, &QPushButton::clicked, this, &UITextEditor::slotCompileBtn);
}

void UITextEditor::resizeEvent(QResizeEvent*)
{
    _textEdit->move(2, 22);
    _textEdit->setFixedSize(width() - 5, height() - 25);
}

QPlainTextEdit* UITextEditor::textEdit() { return _textEdit; }
void UITextEditor::setTextEdit(QPlainTextEdit* textEdit) { _textEdit = textEdit; }

void UITextEditor::slotCompileBtn()
{
    emit signalCompile();
}
}
