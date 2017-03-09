#ifndef CM_WIDGET_H
#define CM_WIDGET_H

#include <QWidget>

// Widget extension
// check / fix

namespace cm
{

////
/// \brief edit mode types
///
typedef enum
{
    em_Unlocked,
    em_Locked,
    em_Temporary
} t_editMode;



////
/// \brief parent class for all objects in the canvas
///
class UIWidget : public QWidget
{
    Q_OBJECT

private:
    bool selected_;

    t_editMode *editMode_;

    //temporary?
//    void* pdObject_;

    float scale;

public:

    QPoint dragOffset;
    //QPoint dragStart;

    explicit UIWidget(QWidget *parent = 0);

    ////
    /// \brief select object
    ///
    void select()
    {
        this->selected_ = true;
        this->repaint();
    }

    ////
    /// \brief deselect object
    ///
    void deselect()
    {
        this->selected_ = false;
        this->repaint();
    }

    ////
    /// \brief get object's selected flag
    /// \return
    ///
    bool isSelected() {return this->selected_;}

    ////
    /// \brief sets pointer to edit mode flag in parent canvas
    /// \details this is set by "constructor" (createObj etc) in canvas
    /// \param canvasEditMode
    ///
    virtual void setEditModeRef(t_editMode* canvasEditMode)
    {
        this->editMode_ = canvasEditMode;
    }

    ////
    /// \brief get edit mode pointer - for inlets/outlets
    /// \return
    ///
    t_editMode* getEditModeRef()
    {
        return this->editMode_;
    }

    ////
    /// \brief get edit mode flag value
    /// \return
    ///
    t_editMode getEditMode()
    {
        return (this->editMode_)?(*this->editMode_):em_Unlocked;
    }

    ////
    /// \brief temporary. scale value for zoom
    /// \param scale_
    ///
    void setScale(float scale_)
    {
        this->scale = scale_;
    }
    float getScale() {return this->scale;}

//    void* getPdObject() {return this->pdObject_;}
//    void setPdObject(void*obj) {this->pdObject_ = obj;}

signals:

    void mousePressed(UIWidget* obj, QMouseEvent* ev);
    void mouseReleased(UIWidget* obj, QMouseEvent* ev);
    void mouseEntered();
    void mouseLeaved();

    void selectBox(UIWidget*box);
    void moveBox(UIWidget*box, QMouseEvent* event);

public slots:

    void s_MousePressed();
    void s_MouseReleased();
    void s_MouseEntered();
    void s_MouseLeaved();

    virtual void s_InMousePressed(UIWidget* obj, QMouseEvent* ev);
    virtual void s_InMouseReleased(UIWidget* obj, QMouseEvent* ev);
    virtual void s_InMouseEntered();
    virtual void s_InMouseLeaved();

    virtual void s_OutMousePressed(UIWidget* obj, QMouseEvent* ev);
    virtual void s_OutMouseReleased(UIWidget* obj, QMouseEvent* ev);
    virtual void s_OutMouseEntered();
    virtual void s_OutMouseLeaved();
};

}

#endif // CM_WIDGET_H
