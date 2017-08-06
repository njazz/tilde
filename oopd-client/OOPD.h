// License: GPL3
//
//  OOPD.h
//
//  Created by Alex Nadzharov on 26/03/17.
//
//

#ifndef OOPD3_h
#define OOPD3_h

#include <map>
#include <set>
#include <iostream>

#include <QStringList>

using namespace std;

class ServerCanvas;
class ServerObject;

namespace oopd {

class OPClass;
class OPInstance;

typedef map<ServerCanvas*, OPClass*> t_OPClassByCanvas;
typedef map<string, OPClass*> t_OPClassByName;
    
typedef map<ServerCanvas*, OPInstance*> t_OPInstanceByCanvas;
typedef map<string, OPInstance*> t_OPInstanceByName;

typedef set<OPInstance*> t_existingInstances;

class OOPD {
private:
    t_OPClassByCanvas _classByCanvas;
    t_OPClassByName _classByName;

    t_OPInstanceByCanvas _instanceByCanvas;
    t_OPInstanceByName _instanceByName;

    t_existingInstances _existingInstances;

    OOPD(){};

public:
    static OOPD* inst();

    void registerClass(OPClass* opClass, string className, ServerCanvas* canvas);
    void registerInstance(OPInstance* opInstance, string className, ServerCanvas* canvas);

    void unregisterClass(OPClass* opClass);
    void unregisterInstance(OPInstance* opInstance);

    // ??
    OPClass* classByCanvas(ServerCanvas* canvas);
    OPClass* classByName(string className);

    OPInstance* instanceByCanvas(ServerCanvas* canvas);
    OPInstance* instanceByName(string className);
    // //

    bool instanceExists(OPInstance* inst);

    // from client side
//    bool canvasIsPatch(ServerCanvas* canvas);
//    bool canvasIsClass(ServerCanvas* canvas);
//    bool canvasIsInstance(ServerCanvas* canvas);

};
}

#endif /* OOPD3_h */
