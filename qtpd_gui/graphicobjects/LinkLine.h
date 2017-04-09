#ifndef LINKLINE_H
#define LINKLINE_H

#include "UIItem.h"

namespace qtpd {
////
/// \brief Line that indicates the link between objects: first it should be used with [s] [r] and [s~] [r~]
///
class LinkLine : public UIItem {
public:
    LinkLine(){};
    //explicit LinkLine(UIItem* _obj1, UIItem* _out1, UIItem* _obj2, UIItem* _in2);

    // TODO: cleanup Patchcord class with different drawing on '\' and '/' with positive object size
    void paint(QPainter* painter, const QStyleOptionGraphicsItem*, QWidget*);
};

}

#endif // LINKLINE_H
