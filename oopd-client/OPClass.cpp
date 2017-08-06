// License: GPL3
//
//  OPClass.cpp
//
//
//  Created by Alex Nadzharov on 26/03/17.
//
//

#include "OPClass.h"
#include "OOPD.h"

namespace oopd {

OPClass::OPClass()
{
    canvas = 0;
    className = "";
    patchWindow = 0;

    _parent = 0;
}

OPClass::OPClass(string name)
{
    canvas = 0;
    patchWindow = 0;

    _parent = 0;

    OOPD::inst()->registerClass(this,name,0);
}

void OPClass::setParentClass(OPClass* p_class)
{
    _parent = p_class;
}

OPClass* OPClass::getParentClass()
{
    return _parent;
}
}
