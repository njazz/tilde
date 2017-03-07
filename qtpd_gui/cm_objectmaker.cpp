#include "cm_objectmaker.h"
#include "cm_preferences.h"

cm_objectmaker::cm_objectmaker()
{
    this->setFixedSize(65,20);

    connect(this,&QLineEdit::textEdited, this,&cm_objectmaker::editorChanged);

}

void  cm_objectmaker::editorChanged()
{
    QFont myFont(cmp_font, 11);
    QFontMetrics fm(myFont);
    int new_w = fm.width(QString(this->text())) + 10;
    new_w = (new_w<65) ? 65 : new_w;
    this->setFixedWidth(new_w);

}


