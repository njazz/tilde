// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_WIDGET_H
#define CM_WIDGET_H

#include <QWidget>
#include <QGraphicsView>

// Widget extension
// check / fix

namespace qtpd {

////
/// \brief edit mode types
///
typedef enum {
    em_Unlocked,
    em_Locked,
    em_Temporary    ///> control-click on an object
} t_editMode;

////
/// \brief parent class for all objects in the canvas
///
class UIWidget : public QGraphicsView {
    Q_OBJECT

private:
    bool _selected;
    t_editMode* _editMode;
    float _scale;

public:
    QPoint dragOffset;

    explicit UIWidget(QGraphicsView* parent = 0);

    ////
    /// \brief select object
    ///
    void select();

    ////
    /// \brief deselect object
    ///
    void deselect();

    ////
    /// \brief get object's selected flag
    /// \return
    ///
    bool isSelected();

    ////
    /// \brief sets pointer to edit mode flag in parent canvas
    /// \details this is set by "constructor" (createObj etc) in canvas
    /// \param canvasEditMode
    ///
    virtual void setEditModeRef(t_editMode* canvasEditModeRef);

    ////
    /// \brief get edit mode pointer - for inlets/outlets
    /// \return
    ///
    virtual t_editMode* getEditModeRef();

    ////
    /// \brief get edit mode flag value
    /// \return
    ///
    t_editMode getEditMode();

    ////
    /// \brief temporary. scale value for zoom
    /// \param scale_
    ///
    void setScale(float newScale);

    ////
    /// \brief temporary. scale value for zoom
    ///
    float scale();

signals:

    void mousePressed(UIWidget* obj, QMouseEvent* ev);
    void mouseReleased(UIWidget* obj, QMouseEvent* ev);
    void mouseEntered();
    void mouseLeaved();

    void selectBox(UIWidget* box, QMouseEvent* event );
    void moveBox(UIWidget* box, QMouseEvent* event);

public slots:

    //    void s_MousePressed();
    //    void s_MouseReleased();
    //    void s_MouseEntered();
    //    void s_MouseLeaved();

    virtual void s_InMousePressed(UIWidget* obj, QMouseEvent* ev);
    virtual void s_InMouseReleased(UIWidget* obj, QMouseEvent* ev);
    //    virtual void s_InMouseEntered();
    //    virtual void s_InMouseLeaved();

    virtual void s_OutMousePressed(UIWidget* obj, QMouseEvent* ev);
    virtual void s_OutMouseReleased(UIWidget* obj, QMouseEvent* ev);
    //    virtual void s_OutMouseEntered();
    //    virtual void s_OutMouseLeaved();
};
}

#endif // CM_WIDGET_H
