// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIScript.h"

#include <QPushButton>

namespace qtpd {

UIScriptEditor::UIScriptEditor(QPlainTextEdit* parent)
    : QPlainTextEdit(parent)
{
    //
    _completer = new QCompleter(this);
    _completer->setWidget(this);
    QObject::connect(_completer, SIGNAL(activated(const QString&)),
        this, SLOT(insertCompletion(const QString&)));

    //PythonQtObjectPtr _context = PythonQt::self()->getMainModule();
}

UIScript::UIScript(UIObject* parent)
    : UIObject(parent)
{
    //setPdObjectName("ui.script");

    this->setMouseTracking(true);

    this->deselect();
    this->_clicked = false;

    QFont font = QFont(PREF_QSTRING("Font"), 11, 0, false);

    this->_editor = new UIScriptEditor((QPlainTextEdit*)this); //weird
    this->_editor->setFixedSize(150 - 5, 300 - 27); //setFixedSize(65-5,18);
    this->_editor->move(2, 21);
    this->_editor->setFont(font);
    this->_editor->show();
    this->_editor->setAttribute(Qt::WA_MacShowFocusRect, 0);

    this->setFocus();

    connect(this->_editor, &QPlainTextEdit::textChanged, this, &UIScript::editorChanged);

    // new python context

    _editor->setContext(pyWrapper::inst().withCanvas(parent)); //(PythonQt::createUniqueModule());

    initProperties();

    this->setMinimumSize(300, 200);
    this->setFixedSize(300, 200);
    setMinimumBoxWidth(300);
    setMinimumBoxHeight(200);

    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, QColor(224, 240, 255));
    Pal.setColor(QPalette::Base, QColor(240, 248, 255));
    setAutoFillBackground(true);
    setPalette(Pal);
    _editor->setPalette(Pal);

    setBackgroundRole(QPalette::Background);

    //temporary. needs fixing
    hideSizeBox();

    //buttons
    QPushButton* b1 = new QPushButton("Run", this);
    b1->setFont(font);
    b1->move(40, 1);
    b1->setFixedSize(40, 20);
    b1->show();
    connect(b1, &QPushButton::clicked, this, &UIScript::btnRun);

    b1 = new QPushButton("Load", this);
    b1->setFont(font);
    b1->move(100, 1);
    b1->setFixedSize(50, 20);
    b1->show();
    connect(b1, &QPushButton::clicked, this, &UIScript::btnLoad);

    b1 = new QPushButton("Save", this);
    b1->setFont(font);
    b1->move(150, 1);
    b1->setFixedSize(50, 20);
    b1->show();
    connect(b1, &QPushButton::clicked, this, &UIScript::btnSave);

    b1 = new QPushButton("Clear", this);
    b1->setFont(font);
    b1->move(220, 1);
    b1->setFixedSize(50, 20);
    b1->show();
    connect(b1, &QPushButton::clicked, this, &UIScript::btnClear);

    this->setObjectSizeMode(os_Free);
}

void UIScript::editorChanged()
{

    // fix later

    QStringList list = getEditorData();

    if (!list.isEmpty())
    {
        for (int i = 0; i < list.size(); i++) {
            QString str = list.at(i) + "\\n";
            list.replace(i, str);
        }

        properties()->set("Script", list);
    }
}
}
