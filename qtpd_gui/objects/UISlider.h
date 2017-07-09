// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CMO_SLIDER_H
#define CMO_SLIDER_H

#include <qlineedit.h>

#include "Port.h"
#include "UIObject.h"

#include <QGraphicsView>

namespace qtpd {

////
/// \brief gui object: slider (ui.slider)
///
class UISlider : public UIObject {
    Q_OBJECT

private:
    bool _clicked;
    float _value; ///> 0..1 here
    float _isHorizontal;

    void initProperties();
    float valueFromPoint(QPoint pos);

public:
    explicit UISlider();

    static UIObject* createObj(QString data);

    //static UIObject* createObject(QString, t_canvas*, QGraphicsView*);

    virtual void paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*);

    // ---------------------------------------------------------------

    void mousePressEvent(QGraphicsSceneMouseEvent* ev);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent*);
    void mouseMoveEvent(QGraphicsSceneMouseEvent* event);

    ///////

    void setPdMessage(QString message);

    void updateUI(AtomList* msg);

    void resizeEvent();
};
}

#endif // CMO_MSG_H
