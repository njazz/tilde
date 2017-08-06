// License: GPL3
//
//  OOPD.h
//
//  Created by Alex Nadzharov on 26/03/17.
//
//

#ifndef OOPD3SERVERAPI_h
#define OOPD3SERVERAPI_h

#include <string>
#include <vector>

#include "OOPD.h"

class OOPDServerAPI {

public:
    static vector<string> methodFunctionNamesFor(string className);
    static vector<string> getterFunctionNamesFor(string className);
    static vector<string> setterFunctionNamesFor(string className);
    static vector<string> signalFunctionNamesFor(string className);

    static void createClass(string className);
    static void removeClass(string className);

    static void addMethodToClass(string className);
    static void removeMethodFromClass(string className);

    static void addPropertyToClass(string className);
    static void removePropertyFromClass(string className);

    static void addPSignalToClass(string className);
    static void removeSignalFromClass(string className);

};

#endif /* OOPD3_h */
