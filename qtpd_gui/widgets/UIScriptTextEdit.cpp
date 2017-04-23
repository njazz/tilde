#include "UIScriptTextEdit.h"

namespace qtpd {

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
