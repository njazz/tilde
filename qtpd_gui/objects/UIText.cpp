// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIText.h"

namespace qtpd {
UIText::UIText(UIObject* parent)
    : UIObject(parent)
{
    //setPdObjectName("ui.text");

    //this->setMinimumWidth(30);
    this->setFixedSize(65, 20);

    this->setMouseTracking(true);

    initProperties();

    this->deselect();
    this->_clicked = false;

    this->_editor = new QPlainTextEdit(this);
    this->_editor->setFixedSize(65 - 5, 18);
    this->_editor->move(1, 1);
    this->_editor->setFont(QFont(PREF_QSTRING("Font"), 11, 0, false));
    this->_editor->hide();
    this->_editor->setAttribute(Qt::WA_MacShowFocusRect, 0);

    connect(this->_editor, &QPlainTextEdit::textChanged, this, &UIText::editorChanged);

    this->_editor->installEventFilter(this);

    this->setMinimumBoxWidth(80);
    this->setMinimumBoxHeight(20);
}

///////

void UIText::editorDone()
{
    qDebug("editor done");

    this->setPdMessage(this->_editor->document()->toPlainText().toStdString()); //text().toStdString());
    //todo

    //properties()->set("Text", getEditorData());
    properties()->set("FontSize", 11);

    this->_editor->hide();
}

void UIText::editorChanged()
{
    int fontSize = properties()->get("FontSize")->asQString().toInt();
    QFont myFont(PREF_QSTRING("Font"), fontSize);
    QFontMetrics fm(myFont);
    QString text = QString(this->_editor->document()->toPlainText());
    int new_w = fm.width(text) + 20;
    new_w = (new_w < 25) ? 25 : new_w;

    int new_h = fm.boundingRect(QRect(0, 0, new_w, 100), 0, text).height() + 20;

    new_h = (new_h < 25) ? 25 : new_h;

    this->setFixedWidth(new_w);
    this->setFixedHeight(new_h);

    this->_editor->setFixedWidth(this->width() - 1);
    this->_editor->setFixedHeight(this->height() - 2);

    // fix later
    properties()->set("Text", getEditorData());
}
}
