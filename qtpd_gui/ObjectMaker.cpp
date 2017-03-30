// (c) 2017 Alex Nadzharov
// License: GPL3

#include "ObjectMaker.h"
#include "Preferences.h"

namespace qtpd {

ObjectMaker::ObjectMaker(QLineEdit* parent)
    : QLineEdit(parent)
{
    setFont(QFont(PREF_QSTRING("Font"), 11, 0, false));
    setFixedSize(60, 20);

    connect(this, &ObjectMaker::textEdited, this, &ObjectMaker::editorChanged);
    connect(this, &ObjectMaker::returnPressed, this, &ObjectMaker::leaveFocus);
}

void ObjectMaker::editorChanged()
{
    QFont myFont(PREF_QSTRING("Font"), 11);
    QFontMetrics fm(myFont);
    int new_w = fm.width(QString(text())) + 10;
    new_w = (new_w < 65) ? 65 : new_w;
    setFixedWidth(new_w);
    setFixedHeight(20);
}

void ObjectMaker::leaveFocus()
{
    //test
    if (parent())
        ((QWidget*)parent())->setFocus();
}
}
