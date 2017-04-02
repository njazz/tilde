//
//  OOPDClassBase.h
//
//
//  Created by Alex Nadzharov on 26/03/17.
//
//

#ifndef OOPDCLASSBASE_h
#define OOPDCLASSBASE_h

#include "m_pd.h"

//todo
#include "../qtpd_lib/ceammc-lib/ceammc_atomlist.h"

using namespace std;
using namespace ceammc;

namespace qtpd {

//class OPClass;
//class OPInstance;
class PatchWindow;

////
/// \brief base data structure for class and instance: name, canvas, symbol
///
class OOPDClassBase {
public:
    //todo
    string _className;
    t_canvas* _canvas;
    t_symbol* _symbol;
    PatchWindow* _patchWindow;
};
}

#endif /* OOPD_h */
