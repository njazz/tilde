// License: GPL3
//
//  OOPD3.cpp
//
//  Created by Alex Nadzharov on 26/03/17.
//
//

#include "OOPD.h"

namespace oopd {

//OOPD3* instance;

OOPD* OOPD::inst()
{
    static OOPD* instance;

    if (!instance)
        instance = new OOPD;

    return instance;
}

void OOPD::registerClass(OPClass* opClass, string className, ServerCanvas* canvas)
{
    cout << "class : OOPD" << (long)this << (long)canvas;

    _classByCanvas[canvas] = opClass;
    _classByName[className] = opClass;
};

void OOPD::registerInstance(OPInstance* opInstance, string className, ServerCanvas* canvas)
{
    cout << "inst : OOPD" << (long)this << (long)canvas;

    _instanceByCanvas[canvas] = opInstance;
    _instanceByName[className] = opInstance;

    _existingInstances.insert(opInstance);
};

void OOPD::unregisterClass(OPClass* opClass){

    // todo find
    //        _classByCanvas[canvas] = 0;
    //        _classByName[className] = 0;
    // todo remove
    //_existingInstances.find()
};
void OOPD::unregisterInstance(OPInstance* opInstance){
    // todo find
    //        _instanceByCanvas[canvas] = 0;
    //        _instanceByName[className] = 0;

    // todo remove
    //_existingInstances.find()
};

OPClass* OOPD::classByCanvas(ServerCanvas* canvas)
{
    if (_classByCanvas[canvas])
        return _classByCanvas[canvas];
    else
        return 0;
}

OPClass* OOPD::classByName(string className)
{
    if (_classByName[className])
        return _classByName[className];
    else
        return 0;
}

OPInstance* OOPD::instanceByCanvas(ServerCanvas* canvas)
{
    if (_instanceByCanvas[canvas])
        return _instanceByCanvas[canvas];
    else
        return 0;
}

OPInstance* OOPD::instanceByName(string className)
{
    if (_instanceByName[className])
        return _instanceByName[className];
    else
        return 0;
}

bool OOPD::instanceExists(OPInstance* inst)
{
    return (_existingInstances.find(inst) != _existingInstances.end());
}

//bool OOPD::canvasIsPatch(ServerCanvas* canvas)
//{
//    return !(classByCanvas(canvas) || instanceByCanvas(canvas));
//}

//bool OOPD::canvasIsClass(ServerCanvas* canvas)
//{
//    return !(classByCanvas(canvas) );
//}

//bool OOPD::canvasIsInstance(ServerCanvas* canvas)
//{
//    return !(instanceByCanvas(canvas));
//}

}
