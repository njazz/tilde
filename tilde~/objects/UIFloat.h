// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef cmo_float_H
#define cmo_float_H

#include "Port.h"
#include "UIObject.h"

#include <QGraphicsView>
#include <QLineEdit>

//#include "cm_pdlink.h"

namespace qtpd {

////
/// \brief gui object: float number box (ui.float)
/// \details TODO: this object should inherit all features from iemgui number2 and vanilla floatatom
class UIFloat : public UIObject {
    Q_OBJECT

private:
    float _startY;

public:
    explicit UIFloat();

    static UIObject* createObj(QString);

    void initProperties();

    virtual void paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*);

    void autoResize();

    // -------

    void objectPressEvent(QGraphicsSceneMouseEvent* ev);
    void mouseMoveEvent(QGraphicsSceneMouseEvent* event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent*);
    // -------

    void updateUI(AtomList* msg);
    std::string asPdFileString();

    // -----
    void sync();
};
}

#endif // cmo_float_H
