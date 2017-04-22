// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIMessage.h"

#include <QGraphicsProxyWidget>

namespace qtpd {
UIMessage::UIMessage()

{

    deselect();
    _clicked = false;

    _editor = new QLineEdit(); //this

    _editor->setFixedSize(65 - 5, 18);
    _editor->move(1, 1);
    _editor->setFont(QFont(PREF_QSTRING("Font"), 11, 0, false));
    _editor->hide();
    _editor->setAttribute(Qt::WA_MacShowFocusRect, 0);
    _editor->setFrame(false);

    QGraphicsProxyWidget* proxy = new QGraphicsProxyWidget(this);
    proxy->setWidget(_editor);

    connect(_editor, &QLineEdit::editingFinished, this, &UIMessage::editorDone);
    connect(_editor, &QLineEdit::textEdited, this, &UIMessage::editorChanged);

    setMinimumBoxWidth(40);
    setMinimumBoxHeight(20);

    setSize(65, 20);

    resizeEvent();
}

///////

void UIMessage::editorDone()
{
    qDebug("editor done");

    setPdMessage(_editor->text());
    //todo

    _editor->hide();
}

void UIMessage::editorChanged()
{
    QFont myFont(PREF_QSTRING("Font"), 11);
    QFontMetrics fm(myFont);
    int new_w = fm.width(QString(_editor->text())) + 10;
    new_w = (new_w < 25) ? 25 : new_w;
    setWidth(new_w);
    _editor->setFixedWidth(width() - 5);
}
}
