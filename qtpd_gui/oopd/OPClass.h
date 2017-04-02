//
//  OOPD.h
//
//
//  Created by Alex Nadzharov on 26/03/17.
//
//

#ifndef OPCLASS_H
#define OPCLASS_H

#include "m_pd.h"
#include <map>
#include <set>

//todo
#include "../qtpd_lib/ceammc-lib/ceammc_atomlist.h"

//
#include <QStringList>

#include <QDebug>

using namespace std;
using namespace ceammc;

#include "OOPDClassBase.h"

namespace qtpd {

// ------------------------------------------------------------
// typedefs

//class OPClass;
//class OPInstance;
//class PatchWindow;

//todo class or move to find section
//typedef map<t_canvas*, OPClass*> t_OPClassByCanvas;
//typedef map<t_symbol*, OPClass*> t_OPClassBySymbol;
//typedef map<string, OPClass*> t_OPClassByName;
//typedef map<t_canvas*, OPInstance*> t_OPInstanceByCanvas;
//typedef map<t_symbol*, OPInstance*> t_OPInstanceBySymbol;

//typedef set<OPInstance*> t_existingInstances;

typedef vector<t_outlet*> OPOutputs; ///< vector of method boxes outputs
typedef vector<t_object*> OPProperties; ///< vector of property boxes

// ------------------------------------------------------------

////
/// \brief OOPD class structure
///
class OPClass : public OOPDClassBase {

private:
    map<string, string> _methodNames;
    map<string, string> _propertyNames;
    map<string, string> _signalNames;

    map<string, t_outlet*> _methodOutlets; //todo OPOutputs
    map<string, t_outlet*> _methodPointerOutlets; //todo OPOutputs

    //PatchWindow* _patchWindow;
    OPClass* _parent;

public:
    // for dynamic (change arguments?)
    OPClass()
    {
        _canvas = 0;
        _symbol = gensym("");
    }

    // for canvas-based (change arguments?)
    OPClass(string className);

// ------------------------------------------------
#pragma mark getters
    map<string, string> getMethodNames()
    {
        return _methodNames;
    }
    map<string, string> getPropertyNames()
    {
        return _propertyNames;
    }
    map<string, t_outlet*> getMethodOutlets()
    {
        return _methodOutlets;
    }

// ------------------------------------------------
#pragma mark window

    void showWindow();

// ------------------------------------------------
#pragma mark file io

    void readFile();

    void writeFile();

// ------------------------------------------------

#pragma mark dynamic: methods
    // dynamic stub:
    void addMethod(string methodName, string referenceName)
    {
        _methodNames[methodName] = referenceName;
    }

    void addMethodOutlet(string referenceName, t_outlet* outlet)
    {
        //todo multiple
        _methodOutlets[referenceName] = outlet;
    }

    void addMethodPointerOutlet(string referenceName, t_outlet* outlet)
    {
        //todo multiple
        _methodPointerOutlets[referenceName] = outlet;
    }

    t_outlet* getMethodOutletForReferenceName(string referenceName)
    {
        t_outlet* ret;
        if (_methodOutlets.count(referenceName)) {
            //todo multiple
            ret = _methodOutlets[referenceName];
        }

        return ret;
    }

    t_outlet* getMethodPointerOutletForReferenceName(string referenceName)
    {
        t_outlet* ret;
        if (_methodPointerOutlets.count(referenceName)) {
            //todo multiple
            ret = _methodPointerOutlets[referenceName];
        }

        return ret;
    }

    void freeMethod(string methodName)
    {
        _methodNames.erase(methodName);
    }

    void freeMethodOutlet(string referenceName)
    {
        _methodOutlets.erase(referenceName);
    }

    void freeMethodPointerOutlet(string referenceName)
    {
        _methodPointerOutlets.erase(referenceName);
    }

    void addProperty(string propertyName, string referenceName)
    {
        _propertyNames[propertyName] = referenceName;
    }

    void freeProperty(string propertyName)
    {
        _propertyNames.erase(propertyName);
    }

// ------------------------------------------------
#pragma mark parent

    void setParentClass(OPClass* p_class)
    {
        _parent = p_class;
    }

    OPClass* getParentClass()
    {
        return _parent;
    }
// ------------------------------------------------
#pragma mark signal

    void addSignal(string signalName, string referenceName)
    {
        _signalNames[signalName] = referenceName;
    }

    void freeSignal(string signalName)
    {
        _signalNames.erase(signalName);
    }

// ------------------------------------------------
#pragma mark info
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
};

// -----------------------------------
}

#endif /* OOPD_h */
