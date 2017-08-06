// License: GPL3
//
//  OOPD.h
//
//
//  Created by Alex Nadzharov on 26/03/17.
//
//

#ifndef OPCLASS_H
#define OPCLASS_H

#include <map>
#include <set>

using namespace std;

#include "OOPDClassBase.h"

class ServerObject;

namespace oopd {

//typedef vector<t_outlet*> OPOutputs; ///< vector of method boxes outputs
typedef vector<ServerObject*> OPProperties; ///< vector of property boxes

// ------------------------------------------------------------

////
/// \brief OOPD class structure
///
class OPClass : public OOPDClassBase {

private:

    OPClass* _parent;

public:
    OPClass();
    OPClass(string name);

    void setParentClass(OPClass* p_class);
    OPClass* getParentClass();

// ------------------------------------------------
//    void readFile();
//    void writeFile();


};

}

#endif /* OOPD_h */
