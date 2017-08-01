// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIScriptTextEdit.h"

namespace tilde {

UIScriptTextEdit::UIScriptTextEdit(QPlainTextEdit* parent)
    : QPlainTextEdit(parent)
{
    //
    _completer = new QCompleter(this);
    _completer->setWidget(this);
    QObject::connect(_completer, SIGNAL(activated(const QString&)),
        this, SLOT(insertCompletion(const QString&)));
}
}
