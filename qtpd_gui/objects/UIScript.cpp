// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIScript.h"

#include <QPushButton>

#include <QGraphicsProxyWidget>
#include <QPalette>

namespace qtpd {

UIScript::UIScript()
{

    deselect();
    _clicked = false;

    QFont font = QFont(PREF_QSTRING("Font"), 11, 0, false);

    _editor = new UIScriptEditor();

    QGraphicsProxyWidget* proxy = new QGraphicsProxyWidget(this);
    proxy->setWidget(_editor);
    proxy->setPos(1, 1);

    // TODO move
    _scriptCommon = new UIScriptCommon();
    _scriptCommon->setEditor(_editor);

    initProperties();

    setBgColor(QColor(224, 240, 255));

    setSize(300, 200);

    _objectDataModel.setObjectSize(os_Free, 300, 200);

    resizeEvent();
}

void UIScript::editorChanged()
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
