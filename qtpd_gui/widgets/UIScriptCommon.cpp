// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIScriptCommon.h"

namespace qtpd {

UIScriptCommon::UIScriptCommon(QObject* parent)
    : QObject(parent)
{

    _scriptData = new UIScriptData();

    connect(this, &UIScriptCommon::callRun, this, &UIScriptCommon::btnRun);
}
}
