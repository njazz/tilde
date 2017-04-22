// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIScriptBox.h"

#include <QPushButton>

#include <QGraphicsProxyWidget>
#include <QPalette>

namespace qtpd {

UIScriptBox::UIScriptBox()

{

    deselect();
    _clicked = false;

    QFont font = QFont(PREF_QSTRING("Font"), 11, 0, false);

    _editor = new UIScriptEditor(); //weird
    _editor->setFixedSize(150 - 5, 300 - 27); //setFixedSize(65-5,18);

    _editor->setFont(font);
    //_editor->show();
    _editor->setAttribute(Qt::WA_MacShowFocusRect, 0);

    _editor->setParent(0);

//    setFocus();

//    connect(_editor, &QPlainTextEdit::textChanged, this, &UIScriptBox::editorChanged);

    // new python context

    //(PythonQt::createUniqueModule());

    initProperties();

    setBgColor(QColor(224, 240, 255));

    //    setMinimumSize(300, 200);
    setSize(60, 20);
    //setMinimumBoxWidth(300);
    //setMinimumBoxHeight(200);

//    _objectDataModel.setObjectSize(os_FixedHeight,40,20);

    QPalette Pal; //palette());
    Pal.setColor(QPalette::Background, QColor(224, 240, 255));
    Pal.setColor(QPalette::Base, QColor(240, 248, 255));
    _editor->setPalette(Pal);

//    QGraphicsProxyWidget* proxy = new QGraphicsProxyWidget(this);
//    proxy->setWidget(_editor);
//    proxy->setPos(2, 20);

    _editor->setCursorWidth(2);

//    //temporary. needs fixing
//    hideSizeBox();

//    //buttons
//    QPushButton* b1 = new QPushButton("Run");
//    b1->setFont(font);
//    //    b1->move(40, 1);
//    b1->setFixedSize(40, 20);
//    b1->show();
//    connect(b1, &QPushButton::clicked, this, &UIScriptBox::btnRun);
//    proxy = new QGraphicsProxyWidget(this);
//    proxy->setWidget(b1);
//    proxy->setPos(40, 1);

//    b1 = new QPushButton("Load");
//    b1->setFont(font);

//    b1->setFixedSize(50, 20);
//    //    b1->move(100, 1);
//    b1->show();
//    connect(b1, &QPushButton::clicked, this, &UIScriptBox::btnLoad);
//    proxy = new QGraphicsProxyWidget(this);
//    proxy->setWidget(b1);
//    proxy->setPos(100, 1);

//    b1 = new QPushButton("Save");
//    b1->setFont(font);
//    //b1->move(150, 1);
//    b1->setFixedSize(50, 20);
//    b1->show();
//    connect(b1, &QPushButton::clicked, this, &UIScriptBox::btnSave);
//    proxy = new QGraphicsProxyWidget(this);
//    proxy->setWidget(b1);
//    proxy->setPos(150, 1);

//    b1 = new QPushButton("Clear");
//    b1->setFont(font);
//    //b1->move(220, 1);
//    b1->setFixedSize(50, 20);
//    b1->show();
//    connect(b1, &QPushButton::clicked, this, &UIScriptBox::btnClear);
//    proxy = new QGraphicsProxyWidget(this);
//    proxy->setWidget(b1);
//    proxy->setPos(220, 1);

//    setObjectSizeMode(os_Free);

    resizeEvent();
}

void UIScriptBox::editorChanged()
{

    // fix later

    QStringList list = getEditorData();

    if (!list.isEmpty()) {
        for (int i = 0; i < list.size(); i++) {
            QString str = list.at(i) + "\\n";
            list.replace(i, str);
        }

        properties()->set("Script", list);
    }

    //update();


}
}
