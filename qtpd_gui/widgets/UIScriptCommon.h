// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef UISCRIPTCOMMON_H
#define UISCRIPTCOMMON_H

#include <QObject>

#include "UIScriptEditor.h"

#include <QFileDialog>

#include <QStringList>

namespace ceammc {
class AtomList;
}

class ServerInstance;

using namespace ceammc;

namespace qtpd {

////
/// \brief Basic data model for scripteditor
/// \deprecated it's a string list now - probably should be removed
class UIScriptData {
public:
    QStringList inputList;
};

////
/// \brief Sort of view controller for UIScript/UISCriptBox
/// \deprecated TODO test that later
class UIScriptCommon : public QObject {
    Q_OBJECT

private:
    UIScriptData* _scriptData;

    UIScriptEditor* _editor;
    QStringList getEditorData();

public:
    explicit UIScriptCommon(QObject* parent = 0);

    UIScriptData* scriptData();

    void setEditor(UIScriptEditor* editor);
    UIScriptEditor* editor();

    // temp
    static QStringList AtomListToStringList(AtomList list);

signals:
    void callRun();

public slots:

    void btnRun();
    void btnLoad();
    void btnSave();
    void btnClear();
};
}

#endif // UISCRIPTCOMMON_H