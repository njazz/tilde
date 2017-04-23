#ifndef UISCRIPTEDITOR_H
#define UISCRIPTEDITOR_H

#include <QWidget>

#include "UIScriptTextEdit.h"

namespace qtpd {

class UIScriptEditor : public QWidget {
    Q_OBJECT

private:
    UIScriptTextEdit* _editor;

public:
    explicit UIScriptEditor(QWidget* parent = 0);

    void resizeEvent(QResizeEvent*)
    {
        _editor->move(2, 22);
        _editor->setFixedSize(width() - 5, height() - 25);
    }

signals:
    void btnRunSignal();
    void btnLoadSignal();
    void btnSaveSignal();
    void btnClearSignal();

public slots:

private slots:
    void btnRun() { emit btnRunSignal(); };
    void btnLoad() { emit btnLoadSignal(); };
    void btnSave() { emit btnSaveSignal(); };
    void btnClear() { emit btnClearSignal(); };
};
}
#endif // UISCRIPTEDITOR_H
