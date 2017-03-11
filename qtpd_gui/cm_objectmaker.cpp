#include "cm_objectmaker.h"
#include "cm_preferences.h"

namespace cm
{
ObjectMaker::ObjectMaker(QLineEdit *parent) : QLineEdit(parent)
{
    this->setFont(QFont(PREF_QSTRING("Font"),11,0,false));
    this->setFixedSize(60,20);

    connect(this,&QLineEdit::textEdited, this,&ObjectMaker::editorChanged);

}

void ObjectMaker::editorChanged()
{
    QFont myFont(PREF_QSTRING("Font"), 11);
    QFontMetrics fm(myFont);
    int new_w = fm.width(QString(this->text())) + 10;
    new_w = (new_w<65) ? 65 : new_w;
    this->setFixedWidth(new_w);
    this->setFixedHeight(20);
}

}

