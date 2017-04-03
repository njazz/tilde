//
//  OOPD.h
//
//
//  Created by Alex Nadzharov on 26/03/17.
//
//

#ifndef OPINSTANCE_H
#define OPINSTANCE_H

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

class OPClass;

//typedef vector<t_outlet*> OPOutputs; ///< vector of method boxes outputs
typedef vector<t_object*> OPProperties; ///< vector of property boxes

// ------------------------------------------------------------

////
/// \brief The OOPD class instance
///
class OPInstance : public OOPDClassBase {
private:
    map<t_symbol*, OPOutputs> _methodOutputs; ///< vector of method outputs
    OPOutputs _instanceOutputs; ///< vector of instances outputs

    map<t_symbol*, OPOutputs> _getterOutputs; ///< new
    map<t_symbol*, OPOutputs> _setterOutputs; ///< new

    //new
    map<t_symbol*, AtomList> _propertyValues;

    int _refCount;

    //signal
    map<t_symbol*, t_sample*> _signalBuffers; ///< vector of signal buffers

    //
    map<t_symbol*, t_outlet*> _methodPointerOutputs; // todo OPOutputs

    ~OPInstance();

public:
    //
    OPInstance* _parent;

    OPInstance(OPClass* opClass);

#pragma mark methods

    void addMethodOutlet(t_symbol* methodName, t_outlet* outlet)
    {
        _methodOutputs[methodName].addOutlet(outlet); //.push_back(outlet);
    }

    void freeMethod(t_symbol* methodName)
    {
        _methodOutputs.erase(methodName);
    }

    void addMethodPointerOutlet(t_symbol* methodName, t_outlet* outlet)
    {
        _methodPointerOutputs[methodName] = outlet; //.push_back(outlet);  TODO
    }

    void freeMethodPointerOutlet(t_symbol* methodName)
    {
        _methodPointerOutputs.erase(methodName);
    }

#pragma mark signal

    t_sample* getBufferFor(t_symbol* signalName, int vec_size)
    {
        t_sample* ret = _signalBuffers[signalName];

        if (!ret) {
            ret = new t_sample[vec_size];
            _signalBuffers[signalName] = ret;
            post("new buffer: %s %i\n", signalName->s_name, vec_size);
        }

        return ret;
    }

    void freeSignal(t_symbol* signalName)
    {
        //todo refcounter
        post("del buffer");
        delete (_signalBuffers[signalName]);
        _signalBuffers.erase(signalName);
    }

#pragma mark properties

    void addProperty(t_symbol* propertyName, t_outlet* getter_out, t_outlet* setter_out)
    {
        _getterOutputs[propertyName].addOutlet(getter_out);//.push_back(getter_out);
        _setterOutputs[propertyName].addOutlet(setter_out);//.push_back(setter_out);

        OOPDClassBase::addProperty(propertyName->s_name, "");
    }
    void freeProperty(t_symbol* propertyName)
    {
        _getterOutputs.erase(propertyName);
        _setterOutputs.erase(propertyName);

        OOPDClassBase::freeProperty(propertyName->s_name);
    }

    void setAtomListProperty(t_symbol* propertyName, AtomList list)
    {
        _propertyValues[propertyName] = list;
    }

    AtomList getAtomListProperty(t_symbol* propertyName)
    {
        AtomList list = _propertyValues[propertyName];
        return list;
    }

// ---------------
#pragma mark methods

    void addInstanceOut(t_outlet* outlet)
    {
        if (outlet)
            _instanceOutputs.addOutlet(outlet);//.push_back(outlet);
    }
    void freeInstanceOut(t_outlet* outlet)
    {
        _instanceOutputs.freeOutlet(outlet);
    }

    void multipleOutput(AtomList list)
    {
//        for (OPOutputs::iterator it = _instanceOutputs.begin(); it != _instanceOutputs.end(); ++it) {
//            list.output(*it);
//        }
        _instanceOutputs.outList(list);
    }

// -----------------
#pragma mark method calls

    void callMethod(AtomList list)
    {
        t_symbol* method_name = list[0].asSymbol();

        AtomList subList = list.slice(1, (int)list.size());

        OPOutputs* out1 = &_methodOutputs[method_name];

        if (out1) {
//            for (OPOutputs::iterator it = out1->begin(); it != out1->end(); ++it) {
//                subList.output(*it);
//            }
            out1->outList(subList);
        }

        //dynamic. todo

        t_outlet* out2 = _methodPointerOutputs[method_name];
        if (out2) {
            AtomList objList = AtomList(Atom(gensym("setobject")));

            objList.append(Atom(gensym(to_string((long)this).c_str())));

            objList.output(out2);
        }
    }

    void callSetter(AtomList list)
    {
        if (!hasProperty(list[0].asString()))
            return;

        t_symbol* property_name = list[0].asSymbol();

        AtomList list2((size_t)list.size() - 1, (t_atom*)list.toPdData() + 1); //TODO
        setAtomListProperty(property_name, list2);

        OPOutputs* out1 = &_setterOutputs[property_name];

//        for (OPOutputs::iterator it = out1->begin(); it != out1->end(); ++it) {
//            outlet_bang(*it);
//        }
        out1->outBang();
    }

    void callSetter(t_symbol* propertyName, AtomList list)
    {
        if (!hasProperty(propertyName->s_name))
            return;

        setAtomListProperty(propertyName, list);

        OPOutputs* out1 = &_setterOutputs[propertyName];

//        for (OPOutputs::iterator it = out1->begin(); it != out1->end(); ++it) {
//            outlet_bang(*it);
//        }
        out1->outBang();
    }

    void callGetter(AtomList list)
    {
        if (!hasProperty(list[0].asString()))
            return;

        t_symbol* property_name = list[0].asSymbol();

        AtomList list2(list[0]);
        list2.append(getAtomListProperty(property_name));

        multipleOutput(list2);

        OPOutputs* out1 = &_getterOutputs[property_name];

//        for (OPOutputs::iterator it = out1->begin(); it != out1->end(); ++it) {
//            outlet_bang(*it);
//        }
        out1->outBang();
    }

    void callGetter(t_symbol* propertyName)
    {

        if (!hasProperty(propertyName->s_name))
            return;

        AtomList list2 = AtomList(Atom(propertyName));

        list2.append(getAtomListProperty(propertyName));

        multipleOutput(list2);

        OPOutputs* out1 = &_getterOutputs[propertyName];

//        for (OPOutputs::iterator it = out1->begin(); it != out1->end(); ++it) {
//            outlet_bang(*it);
//        }
        out1->outBang();

        //return list2;
    }

// ------------------------------------------------
#pragma mark window

    void showWindow();

// ---------------------------
#pragma mark object pointer

    static t_symbol* toSymbol(OPInstance* inst)
    {
        return gensym(to_string((long)inst).c_str());
    }

    t_symbol* getObjectSymbol()
    {
        return gensym(to_string((long)this).c_str());
    }

    static OPInstance* fromObjectSymbol(t_symbol* objSymbol);

#pragma mark reference counting
    // names?
    void retain()
    {
        _refCount++;
        printf("OPInstance ref count: %i\n", _refCount);
    }

    //?
    void release()
    {
        _refCount--;
        printf("OPInstance ref count: %i\n", _refCount);
        if (_refCount == 0)
            delete this;
    }

    //debug
    int getRefCount()
    {
        return _refCount;
    }
};
}

#endif /* OOPD_h */
