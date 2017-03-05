#ifndef CM_OBJECTMAKER_H
#define CM_OBJECTMAKER_H

#include <QWidget>
#include <QLineEdit>

////
/// \brief creates lineedit box for new object
///
class cm_objectmaker : public QLineEdit
{
public:
    cm_objectmaker();
private slots:
    ////
    /// \brief resize to text
    ///
    void editorChanged();
};

#endif // CM_OBJECTMAKER_H

