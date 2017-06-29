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

//typedef vector<t_outlet*> OPOutputs; ///< vector of method boxes outputs
typedef vector<t_object*> OPProperties; ///< vector of property boxes

// ------------------------------------------------------------

////
/// \brief OOPD class structure
///
class OPClass : public OOPDClassBase {

private:
    map<string, t_outlet*> _methodOutlets; //todo OPOutputs
    map<string, t_outlet*> _methodPointerOutlets; //todo OPOutputs

    OPClass* _parent;

public:
    // for dynamic (change arguments?)
    OPClass()
    {
        _canvas = 0;
        _symbol = gensym("");
        _parent = 0;
    }

    // for canvas-based (change arguments?)
    OPClass(string className);

// ------------------------------------------------
#pragma mark window

    void showWindow();

// ------------------------------------------------
#pragma mark file io

    void readFile();
    void writeFile();

// ------------------------------------------------

#pragma mark dynamic: methods
    // addMethod in base

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
        t_outlet* ret = 0;
        if (_methodOutlets.count(referenceName)) {
            //todo multiple
            ret = _methodOutlets[referenceName];
        }

        return ret;
    }

    t_outlet* getMethodPointerOutletForReferenceName(string referenceName)
    {
        t_outlet* ret=0;
        if (_methodPointerOutlets.count(referenceName)) {
            //todo multiple
            ret = _methodPointerOutlets[referenceName];
        }

        return ret;
    }

    // properties

    void freeMethodOutlet(string referenceName)
    {
        _methodOutlets.erase(referenceName);
    }

    void freeMethodPointerOutlet(string referenceName)
    {
        _methodPointerOutlets.erase(referenceName);
    }

    map<string, t_outlet*> getMethodOutlets()
    {
        return _methodOutlets;
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
// -------
    string getClassName()
    {
        return _className;
    }
};



// -----------------------------------
}

#endif /* OOPD_h */
