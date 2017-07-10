// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef LINKLINE_H
#define LINKLINE_H

#include "UIItem.h"

namespace qtpd {
////
/// \brief Line that indicates the link between objects: it should be used with [s] [r] and [s~] [r~]
/// \details stub
class LinkLine : public UIItem {
public:
    LinkLine(){};
    //explicit LinkLine(UIItem* _obj1, UIItem* _out1, UIItem* _obj2, UIItem* _in2);

    void paint(QPainter* painter, const QStyleOptionGraphicsItem*, QWidget*);
};

}

#endif // LINKLINE_H