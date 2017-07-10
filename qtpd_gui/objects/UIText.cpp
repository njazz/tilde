// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIText.h"

#include <QGraphicsProxyWidget>

#include "UIObjectData.h"

namespace qtpd {
UIText::UIText()
{
    //setPdObjectName("ui.text");

    setSize(65, 20);
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
    objectData()->setObjectSize(os_Free, 80, 20);

    resizeEvent();
}

///////

void UIText::editorDone()
{
    qDebug("editor done");

    //fromQString(_editor->document()->toPlainText()); //text().toStdString());
    //todo

    properties()->set("Text", getEditorData());
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

UIObject* UIText::createObj(QString data)
{
    UIText* ret = new UIText();

    ret->fromQString(data);

    return ret;
}

void UIText::paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*)
{
    p->setClipRect(option->exposedRect);

    // does it need a background?

    //        QBrush brush(bgColor());
    //        p->setBrush(brush);
    //        p->drawRect(boundingRect());
    //        p->setBrush(QBrush());

    if (getEditMode() == em_Unlocked) {
        if (isSelected()) {
            p->setPen(QPen(QColor(0, 192, 255), 1, Qt::DotLine, Qt::SquareCap, Qt::BevelJoin));
        } else if (_clicked) {
            p->setPen(QPen(QColor(0, 192, 255), 2, Qt::DotLine, Qt::RoundCap, Qt::RoundJoin));
        } else {
            p->setPen(QPen(QColor(128, 128, 128), 1, Qt::DotLine, Qt::SquareCap, Qt::BevelJoin));
        }

        p->drawRect(0, 0, width(), height());
    }

    QTextOption* op = new QTextOption;
    op->setAlignment(Qt::AlignLeft);
    p->setPen(QPen(QColor(0, 0, 0), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

    int fontSize = properties()->get("FontSize")->asQString().toInt();
    p->setFont(QFont(PREF_QSTRING("Font"), fontSize, 0, false));
    p->drawText(2, 3, width() - 2, height() - 3, 0, properties()->get("Text")->asQString(), 0);
}

//////////

void UIText::initProperties()
{
    UIObject::initProperties();
    QStringList list;

    properties()->create("Text", "Data", "0.1", list);

    properties()->create("TextColor", "Color", "0.1", QColor(0, 0, 0));
    properties()->create("BackgroundColor", "Color", "0.1", QColor(255, 255, 255, 0));

    PROPERTY_LISTENER("TextColor", &UIText::colorPropertyChanged);
    PROPERTY_LISTENER("BackgroundColor", &UIText::colorPropertyChanged);

    PROPERTY_LISTENER("Text", &UIText::textPropertyChanged);
};

///////////////////

void UIText::objectPressEvent(QGraphicsSceneMouseEvent* ev)
{

    if ((getEditMode() == em_Unlocked) && isSelected()) {

        _editor->document()->setPlainText(properties()->get("Text")->asQString());
        _editor->show();
        _editor->setFocus();
        ev->accept();
        return;
    }
}

void UIText::autoResize()
{
    int fontSize = properties()->get("FontSize")->asQString().toInt();

    QFont myFont(PREF_QSTRING("Font"), fontSize);
    QFontMetrics fm(myFont);

    setWidth((int)fm.width(properties()->get("Text")->asQString()) + 5);
    if (width() < objectData()->minimumBoxWidth())
        setWidth(objectData()->minimumBoxWidth());

    //duplicate?
    int new_w = fm.width(properties()->get("Text")->asQString()) + 20;
    new_w = (new_w < 25) ? 25 : new_w;

    int new_h = fm.boundingRect(QRect(0, 0, new_w, 100), 0, properties()->get("Text")->asQString()).height() + 7;

    new_h = (new_h < 25) ? 25 : new_h;

    setWidth(new_w);
    setHeight(new_h);
}

// ---------------------------

void UIText::fromQString(QString objData)
{
    UIObject::fromQString(objData);

    //TODO temporary fix!
    QString msg = objData; //QString(message);
    QStringList list = msg.split("\n");
    for (int i = 0; i < list.size(); i++) {
        list[i] = list[i] + "\\n";
    }

    //properties()->set("Text", list);

    QString data = properties()->get("Text")->asQString().split("\\n ").join("\n");

    //_objectText = data;

    autoResize();

    _editor->setFixedWidth(width() - 1);
    _editor->setFixedHeight(height() - 2);

    _editor->hide();
}

bool UIText::eventFilter(QObject*, QEvent* event)
{
    if (event->type() == QEvent::KeyPress) {

        QKeyEvent* keyEvent = static_cast<QKeyEvent*>(event);

        if ((keyEvent->key() == Qt::Key_Return) && (keyEvent->modifiers() == Qt::ShiftModifier)) {
            editorDone();
            return true;
        }
    }

    return false;
}

QStringList UIText::getEditorData()
{
    return _editor->document()->toPlainText().split(QRegExp("[\r\n]"), QString::SkipEmptyParts);
}

void UIText::sync()
{

    UIObject::sync();
}

void UIText::textPropertyChanged()
{
}

void UIText::colorPropertyChanged()
{
}
}
