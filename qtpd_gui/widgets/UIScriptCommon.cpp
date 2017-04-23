#include "UIScriptCommon.h"

UIScriptCommon::UIScriptCommon(QObject* parent)
    : QObject(parent)
{

    _scriptData = new UIScriptData();

    connect(this, &UIScriptCommon::callRun, this, &UIScriptCommon::btnRun);
}
