// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIText.h"

#include <QGraphicsProxyWidget>

namespace qtpd {
UIText::UIText() //UIObject* parent)
//: UIObject(parent)
{
    //setPdObjectName("ui.text");

    //setMinimumWidth(30);
    setSize(65, 20);

    //setMouseTracking(true);

    initProperties();

    deselect();
    _clicked = false;

    _editor = new QPlainTextEdit();
    _editor->setFixedSize(65 - 5, 18);
    _editor->move(1, 1);
    _editor->setFont(QFont(PREF_QSTRING("Font"), 11, 0, false));
    _editor->hide();
    _editor->setAttribute(Qt::WA_MacShowFocusRect, 0);

    QGraphicsProxyWidget* proxy = new QGraphicsProxyWidget(this);
    proxy->setWidget(_editor);

    connect(_editor, &QPlainTextEdit::textChanged, this, &UIText::editorChanged);

    _editor->installEventFilter(this);

    setMinimumBoxWidth(80);
    setMinimumBoxHeight(20);

    resizeEvent();
}

///////

void UIText::editorDone()
{
    qDebug("editor done");

    setPdMessage(_editor->document()->toPlainText().toStdString()); //text().toStdString());
    //todo

    //properties()->set("Text", getEditorData());
    properties()->set("FontSize", 11);

    _editor->hide();
}

void UIText::editorChanged()
{
    int fontSize = properties()->get("FontSize")->asQString().toInt();
    QFont myFont(PREF_QSTRING("Font"), fontSize);
    QFontMetrics fm(myFont);
    QString text = QString(_editor->document()->toPlainText());
    int new_w = fm.width(text) + 20;
    new_w = (new_w < 25) ? 25 : new_w;

    int new_h = fm.boundingRect(QRect(0, 0, new_w, 100), 0, text).height() + 20;

    new_h = (new_h < 25) ? 25 : new_h;

    setWidth(new_w);
    setHeight(new_h);

    _editor->setFixedWidth(width() - 1);
    _editor->setFixedHeight(height() - 2);

    // fix later
    properties()->set("Text", getEditorData());
}
}
