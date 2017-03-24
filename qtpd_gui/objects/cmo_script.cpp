// (c) 2017 Alex Nadzharov
// License: GPL3

#include "cmo_script.h"

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
    this->clicked_ = false;

    QFont font = QFont(PREF_QSTRING("Font"), 11, 0, false);

    this->editor_ = new UIScriptEditor((QPlainTextEdit*)this); //weird
    this->editor_->setFixedSize(150 - 5, 300 - 27); //setFixedSize(65-5,18);
    this->editor_->move(2, 21);
    this->editor_->setFont(font);
    this->editor_->show();
    this->editor_->setAttribute(Qt::WA_MacShowFocusRect, 0);

    this->setFocus();

    connect(this->editor_, &QPlainTextEdit::textChanged, this, &UIScript::editorChanged);

    // new python context

    editor_->setContext(pyWrapper::inst().withCanvas(parent)); //(PythonQt::createUniqueModule());

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
    editor_->setPalette(Pal);

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
