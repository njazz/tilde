#ifndef CM_WIDGET_H
#define CM_WIDGET_H

#include <QWidget>

// Widget extension
// check / fix

////
/// \brief parent class for all gui objects
///
class cm_widget : public QWidget
{
    Q_OBJECT

private:
    bool selected_;

    bool *editMode_;

    //temporary?
//    void* pdObject_;

public:

    QPoint dragOffset;
    //QPoint dragStart;

    explicit cm_widget(QWidget *parent = 0);

    void select()
    {
        this->selected_ = true;
        this->repaint();
    }

    void deselect()
    {
        this->selected_ = false;
        this->repaint();
    }

    bool isSelected() {return this->selected_;}

    void setEditModeRef(bool* canvasEditMode)
    {
        this->editMode_ = canvasEditMode;
    }

    bool getEditMode()
    {
        return (this->editMode_)?(*this->editMode_):false;
    }

//    void* getPdObject() {return this->pdObject_;}
//    void setPdObject(void*obj) {this->pdObject_ = obj;}

signals:

    void mousePressed(cm_widget* obj, QMouseEvent* ev);
    void mouseReleased(cm_widget* obj, QMouseEvent* ev);
    void mouseEntered();
    void mouseLeaved();

    void selectBox(cm_widget*box);
    void moveBox(cm_widget*box, QMouseEvent* event);

public slots:

    void s_MousePressed();
    void s_MouseReleased();
    void s_MouseEntered();
    void s_MouseLeaved();

    virtual void s_InMousePressed(cm_widget* obj, QMouseEvent* ev);
    virtual void s_InMouseReleased(cm_widget* obj, QMouseEvent* ev);
    virtual void s_InMouseEntered();
    virtual void s_InMouseLeaved();

    virtual void s_OutMousePressed(cm_widget* obj, QMouseEvent* ev);
    virtual void s_OutMouseReleased(cm_widget* obj, QMouseEvent* ev);
    virtual void s_OutMouseEntered();
    virtual void s_OutMouseLeaved();
};

#endif // CM_WIDGET_H
