// License: GPL3
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

#include <map>
#include <vector>

//todo
#include "../qtpd_lib/ceammc-lib/ceammc_atomlist.h"

using namespace std;
using namespace ceammc;

namespace qtpd {

//class OPClass;
//class OPInstance;
class PatchWindow;
class PatchWindowController;

////
/// \brief stores pointers to t_outlets of pd objects
///
class OPOutputs {
private:
    vector<t_outlet*> _outlets;

public:
    void addOutlet(t_outlet* outlet)
    {
        _outlets.push_back(outlet);
    }

    void freeOutlet(t_outlet* outlet)
    {
        _outlets.erase(remove(_outlets.begin(), _outlets.end(), outlet), _outlets.end());
    }

    void clear()
    {
        _outlets.clear();
    }

    void outBang()
    {
        for (vector<t_outlet*>::iterator it = _outlets.begin(); it != _outlets.end(); ++it) {
            outlet_bang(*it);
        }
    }

    void outList(AtomList list)
    {
        for (vector<t_outlet*>::iterator it = _outlets.begin(); it != _outlets.end(); ++it) {
            list.output(*it);
        }
    }
};

////
/// \brief base data structure for class and instance: name, canvas, symbol
///
class OOPDClassBase {
private:
    map<string, string> _methodNames;
    map<string, string> _propertyNames;
    map<string, string> _signalNames;

public:
    //todo
    string _className;
    t_canvas* _canvas;
    t_symbol* _symbol;
    PatchWindowController* _patchWindow;

    void addMethod(string methodName, string referenceName)
    {
        _methodNames[methodName] = referenceName;
    }

    void freeMethod(string methodName)
    {
        _methodNames.erase(methodName);
    }

    void addProperty(string propertyName, string referenceName)
    {
        _propertyNames[propertyName] = referenceName;
    }

    void freeProperty(string propertyName)
    {
        _propertyNames.erase(propertyName);
    }

    void addSignal(string signalName, string referenceName)
    {
        _signalNames[signalName] = referenceName;
    }

    void freeSignal(string signalName)
    {
        _signalNames.erase(signalName);
    }

    // -------------------

    AtomList getPropertyList()
    {
        AtomList ret;

        for (map<string, string>::iterator it = _propertyNames.begin(); it != _propertyNames.end(); ++it) {
            ret.append(Atom(gensym(it->first.c_str())));
        }

        return ret;
    }

    AtomList getMethodList()
    {
        AtomList ret;

        for (map<string, string>::iterator it = _methodNames.begin(); it != _methodNames.end(); ++it) {
            ret.append(Atom(gensym(it->first.c_str())));
        }

        return ret;
    }

    AtomList getSignalList()
    {
        AtomList ret;

        for (map<string, string>::iterator it = _signalNames.begin(); it != _signalNames.end(); ++it) {
            ret.append(Atom(gensym(it->first.c_str())));
        }

        return ret;
    }

    // --------------------

    map<string, string> getMethodNames()
    {
        return _methodNames;
    }
    map<string, string> getPropertyNames()
    {
        return _propertyNames;
    }

    // ---------------------
    bool hasProperty(string propertyName)
    {
        return _propertyNames.find(propertyName) != _propertyNames.end();
    }

    //temp
    void setPropertyNames(map<string, string> pNames)
    {
        _propertyNames = pNames;
    }
};
}

#endif /* OOPD_h */
