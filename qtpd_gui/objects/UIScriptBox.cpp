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

    _editor = new UIScriptEditor();

    // TODO move
    _scriptCommon = new UIScriptCommon();
    _scriptCommon->setEditor(_editor);

    initProperties();

    setBgColor(QColor(224, 240, 255));

    setSize(60, 20);

    resizeEvent();
}

void UIScriptBox::editorChanged()
{

    // fix later

    //    QStringList list = getEditorData();

    //    if (!list.isEmpty()) {
    //        for (int i = 0; i < list.size(); i++) {
    //            QString str = list.at(i) + "\\n";
    //            list.replace(i, str);
    //        }

    //        properties()->set("Script", list);
    //    }

    //update();
}
}
