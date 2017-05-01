#include "UISubCanvas.h"

#include <QGraphicsProxyWidget>
namespace qtpd {

UISubCanvas::UISubCanvas()
{
    //_viewProxy.setWidget(_view);
    //scene()->addItem(_view);

//    _view.setParent(_viewWidget);
//    _viewProxy.setWidget(_viewWidget);
//    scene()->addItem(_viewProxy);
    _objectDataModel.setObjectSize(os_Free, 150, 100);
}
}
