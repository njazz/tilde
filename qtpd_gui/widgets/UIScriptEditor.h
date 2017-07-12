// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef UISCRIPTEDITOR_H
#define UISCRIPTEDITOR_H

#include <QWidget>

#include "UIScriptTextEdit.h"

namespace qtpd {

////
/// \brief Script editor QWidget
///
class UIScriptEditor : public QWidget {
    Q_OBJECT

private:
    UIScriptTextEdit* _textEdit;

public:
    explicit UIScriptEditor(QWidget* parent = 0);

    void resizeEvent(QResizeEvent*);

    UIScriptTextEdit* textEdit() ;
    void setTextEdit(UIScriptTextEdit* textEdit) ;

signals:

    void btnRunSignal();
    void btnLoadSignal();
    void btnSaveSignal();
    void btnClearSignal();
    void textChangedSignal();

public slots:

private slots:
    void btnRun() { emit btnRunSignal(); };
    void btnLoad() { emit btnLoadSignal(); };
    void btnSave() { emit btnSaveSignal(); };
    void btnClear() { emit btnClearSignal(); };
};
}
#endif // UISCRIPTEDITOR_H
