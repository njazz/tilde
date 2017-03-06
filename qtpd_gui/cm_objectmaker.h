#ifndef CM_OBJECTMAKER_H
#define CM_OBJECTMAKER_H

#include <QWidget>
#include <QLineEdit>
#include <QMainWindow>

////
/// \brief creates lineedit box for new object
///
class cm_objectmaker : public QLineEdit
{
public:
    cm_objectmaker();

//    ////
//    /// \brief filter esc key
//    /// \param event
//    ///
//    void keyPressEvent(QKeyEvent *event)
//    {
//        if (event->key() == Qt::Key_Escape)
//        {
//            this->setText("");
//            emit textEdited("");
//            }

//        QLineEdit::keyPressEvent(event);
//    }
private slots:
    ////
    /// \brief resize to text
    ///
    void editorChanged();

};

#endif // CM_OBJECTMAKER_H

