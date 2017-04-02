//
//  OOPD.h
//
//
//  Created by Alex Nadzharov on 26/03/17.
//
//

#ifndef OOPD_h
#define OOPD_h

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

namespace qtpd {

// ------------------------------------------------------------
// typedefs

class OPClass;
class OPInstance;
class PatchWindow;

//todo class or move to find section
typedef map<t_canvas*, OPClass*> t_OPClassByCanvas;
typedef map<t_symbol*, OPClass*> t_OPClassBySymbol;
typedef map<string, OPClass*> t_OPClassByName;
typedef map<t_canvas*, OPInstance*> t_OPInstanceByCanvas;
typedef map<t_symbol*, OPInstance*> t_OPInstanceBySymbol;

typedef set<OPInstance*> t_existingInstances;

typedef vector<t_outlet*> OPOutputs; ///< vector of method boxes outputs
typedef vector<t_object*> OPProperties; ///< vector of property boxes

// ------------------------------------------------------------

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

////
/// \brief stores global information about OOPD classes / instances
/// \details provides search by canvas and by class symbol
///
class OOPD {
private:
    t_OPClassByCanvas _classByCanvas;
    t_OPClassBySymbol _classBySymbol;
    t_OPClassByName _classByName;
    t_OPInstanceByCanvas _instanceByCanvas;
    t_OPInstanceBySymbol _instanceBySymbol;
    t_existingInstances _existingInstances;

    OOPD(){};

public:
    static OOPD* inst()
    {
        static OOPD* instance;

        if (!instance)
            instance = new OOPD;

        return instance;
    }

    void registerClass(OPClass* opClass, string className, t_canvas* canvas, t_symbol* symbol)
    {
        qDebug() << "class : OOPD" << (long)this << (long)canvas;
        _classByCanvas[canvas] = opClass;
        _classBySymbol[symbol] = opClass;
        _classByName[className] = opClass;
    };

    void registerInstance(OPInstance* opInstance, string className, t_canvas* canvas, t_symbol* symbol)
    {
        qDebug() << "inst : OOPD" << (long)this << (long)canvas;
        _instanceByCanvas[canvas] = opInstance;
        _instanceBySymbol[symbol] = opInstance;

        _existingInstances.insert(opInstance);
    };

    void unregisterClass(string className, t_canvas* canvas, t_symbol* symbol){

    };
    void unregisterInstance(OPInstance* opInstance, string className, t_canvas* canvas, t_symbol* symbol)
    {
        _instanceByCanvas[canvas] = 0;
        _instanceBySymbol[symbol] = 0;

        // todo remove
        //_existingInstances.find()
    };

    OPClass* classByCanvas(t_canvas* canvas)
    {
        if (_classByCanvas[canvas])
            return _classByCanvas[canvas];
        else
            return 0;
    }

    OPClass* classBySymbol(t_symbol* symbol)
    {
        if (_classBySymbol[symbol])
            return _classBySymbol[symbol];
        else
            return 0;
    }

    OPClass* classByName(string className)
    {
        if (_classByName[className])
            return _classByName[className];
        else
            return 0;
    }

    OPInstance* instanceByCanvas(t_canvas* canvas)
    {
        if (_instanceByCanvas[canvas])
            return _instanceByCanvas[canvas];
        else
            return 0;
    }

    OPInstance* instanceBySymbol(t_symbol* symbol)
    {
        if (_instanceBySymbol[symbol])
            return _instanceBySymbol[symbol];
        else
            return 0;
    }

    bool instanceExists(OPInstance* inst)
    {
        return (_existingInstances.find(inst) != _existingInstances.end());
    }

    bool canvasIsPatch(t_canvas* canvas)
    {
        return !(classByCanvas(canvas) || instanceByCanvas(canvas));
    }
};

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

    // dynamic.
    map<string, string> _methodNames;
    map<string, string> _propertyNames;

    //signal
    map<t_symbol*, t_sample*> _signalBuffers; ///< vector of signal buffers

    //
    map<t_symbol*, t_outlet*> _methodPointerOutputs; // todo OPOutputs

public:
    //
    OPInstance* _parent;

    OPInstance(OPClass* opClass);

    ~OPInstance()
    {
        // delete canvas
        // TODO yet disabled
        // delete _patchWindow;

        // unregister
        OOPD::inst()->unregisterInstance(this, _className, _canvas, _symbol);

        printf("~OPInstance\n");
        printf("canvas: %lu\n", (long)_canvas);
    }

#pragma mark methods

    void addMethodOutlet(t_symbol* methodName, t_outlet* outlet)
    {
        _methodOutputs[methodName].push_back(outlet);
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
        _getterOutputs[propertyName].push_back(getter_out);
        _setterOutputs[propertyName].push_back(setter_out);

        _propertyNames[propertyName->s_name] = "<none>"; //don't link by name as we link outlets.
    }
    void freeProperty(t_symbol* propertyName)
    {
        _getterOutputs.erase(propertyName);
        _setterOutputs.erase(propertyName);

        _propertyNames.erase(propertyName->s_name);
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

    AtomList getPropertyList()
    {
        AtomList ret;

        for (map<string, string>::iterator it = _propertyNames.begin(); it != _propertyNames.end(); ++it) {
            ret.append(Atom(gensym(it->first.c_str())));
        }

        return ret;
    }

// ---------------
#pragma mark methods

    void addInstanceOut(t_outlet* outlet)
    {
        if (outlet)
            _instanceOutputs.push_back(outlet);
    }
    void freeInstanceOut(t_outlet* outlet)
    {
        _instanceOutputs.erase(remove(_instanceOutputs.begin(), _instanceOutputs.end(), outlet), _instanceOutputs.end());
    }

    void multipleOutput(AtomList list)
    {
        for (OPOutputs::iterator it = _instanceOutputs.begin(); it != _instanceOutputs.end(); ++it) {
            list.output(*it);
        }
    }

    void callMethod(AtomList list)
    {
        t_symbol* method_name = list[0].asSymbol();

        AtomList subList = list.slice(1, (int)list.size());

        OPOutputs* out1 = &_methodOutputs[method_name];

        if (out1) {
            for (OPOutputs::iterator it = out1->begin(); it != out1->end(); ++it) {
                subList.output(*it);
            }
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
        t_symbol* property_name = list[0].asSymbol();

        //        OPProperties *out1 = &instancePropertyBoxes[property_name];
        //
        //        if (out1)
        //        {
        //            for (OPProperties::iterator it =out1->begin(); it!=out1->end(); ++it)
        //            {
        //                pd_typedmess((t_pd*)*it, gensym("set"), (int)list.size(), list.toPdData());
        //            }
        //        }

        //        Atom name = Atom(argv[0]);
        //
        //        if (name.asSymbol() == x->property_name)
        //        {
        //            AtomList list2(argc-1,&argv[1]);
        //            x->instance->setAtomListProperty(x->property_name, list2);
        //
        //            outlet_bang(x->out2);
        //        }

        AtomList list2((size_t)list.size() - 1, (t_atom*)list.toPdData() + 1); //TODO
        setAtomListProperty(property_name, list2);

        OPOutputs* out1 = &_setterOutputs[property_name];

        for (OPOutputs::iterator it = out1->begin(); it != out1->end(); ++it) {
            outlet_bang(*it);
        }
    }

    void callGetter(AtomList list)
    {
        t_symbol* property_name = list[0].asSymbol();

        //        OPProperties *out1 = &instancePropertyBoxes[property_name];
        //
        //        if (out1)
        //        {
        //            for (OPProperties::iterator it =out1->begin(); it!=out1->end(); ++it)
        //            {
        //                pd_typedmess((t_pd*)*it, gensym("get"), (int)list.size(), list.toPdData());
        //            }
        //        }

        AtomList list2(list[0]);
        list2.append(getAtomListProperty(property_name));

        multipleOutput(list2);

        OPOutputs* out1 = &_getterOutputs[property_name];

        for (OPOutputs::iterator it = out1->begin(); it != out1->end(); ++it) {
            outlet_bang(*it);
        }
    }

    AtomList getMethodList()
    {
        AtomList ret;

        for (map<t_symbol*, OPOutputs>::iterator it = _methodOutputs.begin(); it != _methodOutputs.end(); ++it) {
            ret.append(Atom(it->first));
        }

        return ret;
    }

    AtomList getDynamicMethodList()
    {
        AtomList ret;

        for (map<string, string>::iterator it = _methodNames.begin(); it != _methodNames.end(); ++it) {
            ret.append(Atom(gensym(it->first.c_str())));
        }

        return ret;
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

    static OPInstance* fromObjectSymbol(t_symbol* objSymbol)
    {
        //string str = objSymbol->s_name;

        // todo
        QString qstr = objSymbol->s_name;//str.c_str();
        OPInstance* inst_ = (OPInstance*)(qstr.toLong());

        return (OOPD::inst()->instanceExists(inst_)) ? inst_ : 0;
    }

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
