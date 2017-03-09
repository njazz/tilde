#ifndef CM_OBJECTMAKER_H
#define CM_OBJECTMAKER_H

#include <QWidget>
#include <QLineEdit>
#include <QMainWindow>


namespace cm
{
////
/// \brief creates lineedit box for new object
///
class ObjectMaker : public QLineEdit
{
public:
    explicit ObjectMaker(QLineEdit *parent = 0);

private slots:
    ////
    /// \brief resize to text
    ///
    void editorChanged();

};

}

#endif // CM_OBJECTMAKER_H

