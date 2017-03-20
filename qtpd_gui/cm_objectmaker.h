// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_OBJECTMAKER_H
#define CM_OBJECTMAKER_H

#include <QLineEdit>
#include <QMainWindow>
#include <QWidget>

namespace qtpd {
////
/// \brief creates lineedit box for new object
///
class ObjectMaker : public QLineEdit {
public:
    explicit ObjectMaker(QLineEdit* parent = 0);

    void focusOutEvent(QFocusEvent *)
    {
        //emit textEdited(this->text());
        emit returnPressed();
    }

private slots:
    ////
    /// \brief resize to text
    ///
    void editorChanged();
};
}

#endif // CM_OBJECTMAKER_H
