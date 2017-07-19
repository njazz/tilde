// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_OBJECTMAKER_H
#define CM_OBJECTMAKER_H

#include <QLineEdit>
#include <QMainWindow>
#include <QWidget>

namespace qtpd {

class PatchWindowController;

////
/// \brief creates QLineEdit box for new object
///
class ObjectMaker : public QLineEdit {

    Q_OBJECT

private:
    PatchWindowController* _parentController;

    bool _modified;

public:
    explicit ObjectMaker(QLineEdit* parent = 0);

    PatchWindowController* parentController();
    void setParentController(PatchWindowController* controller);

    void focusOutEvent(QFocusEvent*);

    void setModified(bool v);

    void cancel();

public slots:
    void done();

signals:
    void objectMakerDoneSignal();

private slots:

    ////
    /// \brief resize to text
    ///
    virtual void editorChanged();
};
}

#endif // CM_OBJECTMAKER_H
