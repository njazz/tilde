// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CMO_MATRIX_H
#define CMO_MATRIX_H

#include <qlineedit.h>

#include "Port.h"
#include "UIObject.h"

#include <QGraphicsView>

namespace qtpd {

enum uiMatrixType {
    mt_HRadio,
    mt_VRadio,
    mt_MatrixToggle,
    mt_MatrixButton,
    mt_MatrixToggleMomentary,
    mt_MatrixButtonMomentary

};

////
/// \brief gui object: ui.matrix - substitute all objects with multiple buttons (hradio, vradio, ui.matrix)
///
class UIMatrix : public UIObject {
    Q_OBJECT

private:
    bool _clicked;

public:
    explicit UIMatrix();

    static UIObject* createObj(QString data);
    static UIObject* createObject(QString, t_canvas*, QGraphicsView* );

    void initProperties();

    Q_SLOT void propertyUpdate();
    Q_SLOT void propertyMatrixSize();

    // ------------------------------------------

    void drawCross(QPainter* p, QPoint matrixPos);
    void drawBox(QPainter* p, QPoint matrixPos);

    // ---- move to private

    uiMatrixType matrixType();

    int radioSize();

    QRect rectFromMatrixPos(QPoint matrixPos);

    void paintHRadio(QPainter* p);
    void paintVRadio(QPainter* p);

    void paintToggleMatrix(QPainter* p); ///> draws buttons as ui.toggle
    void paintButtonMatrix(QPainter* p); ///> draws buttons as boxes

    // ---- move to private

    virtual void paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*);

    void resizeEvent();

    // ---------------------------------------------------------------

    void mousePressEvent(QGraphicsSceneMouseEvent* ev);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent*);
    void mouseMoveEvent(QGraphicsSceneMouseEvent* event);

    ///////

//    void setPdMessage(QString message);

    void updateUI(AtomList msg);

};
}

#endif // CMO_MSG_H
