#ifndef UISUBCANVAS_H
#define UISUBCANVAS_H

#include <QGraphicsView>

#include "CanvasData.h"

namespace qtpd {
class UISubCanvas : public QGraphicsView {
private:
    canvasData _canvasData;
public:
    UISubCanvas();
};
}
#endif // UISUBCANVAS_H
