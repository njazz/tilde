// License: GPL3
//
//  OOPD.h
//
//
//  Created by Alex Nadzharov on 26/03/17.
//
//

#ifndef OPINSTANCE_H
#define OPINSTANCE_H

using namespace std;

#include "OOPDClassBase.h"

class ServerObject;

namespace oopd {

class OPClass;

class OPInstance : public OOPDClassBase {
private:
    int _referenceCount;

    ~OPInstance();
public:

    OPInstance* parent;
    OPInstance(OPClass* opClass);

    void retain();
    void release();
};
}

#endif /* OOPD_h */
