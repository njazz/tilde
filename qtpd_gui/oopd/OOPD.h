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

using namespace std;

class OPClass;
class OPInstance;

//todo class or move to find section
typedef map<t_canvas*, OPClass*> t_OPClassByCanvas;
typedef map<t_symbol*, OPClass*> t_OPClassBySymbol;
typedef map<t_canvas*, OPInstance*> t_OPInstanceByCanvas;
typedef map<t_symbol*, OPInstance*> t_OPInstanceBySymbol;

class OPClass {

private:
    map<string, string> methodNames;
    map<string, string> propertyNames;
    map<string, string> signalNames;

    map<string, t_outlet*> methodOutlets; //todo OPOutputs
    map<string, t_outlet*> methodPointerOutlets; //todo OPOutputs

    OPClass* parent;

public:
    // for dynamic (change arguments?)
    OPClass()
    {
        this->canvas = 0;
    }

    // for canvas-based (change arguments?)
    OPClass(string className)
    {

        // create canvas here

        // add refs to class info
        //        OPClassByCanvas* link = new OPClassByCanvas(to_string((long)this->canvas), "OOP.common");
        //        link->ref() = this;
        //
        //        OPClassBySymbol* link2 = new OPClassBySymbol(this->symbol->s_name, "OOP.common");
        //        link2->ref() = this;
    }

// ------------------------------------------------
#pragma mark getters
    map<string, string> getMethodNames()
    {
        return this->methodNames;
    }
    map<string, string> getPropertyNames()
    {
        return this->propertyNames;
    }
    map<string, t_outlet*> getMethodOutlets()
    {
        return this->methodOutlets;
    }

// ------------------------------------------------
#pragma mark file io

    void readFile()
    {
    }
    void writeFile() {}

// ------------------------------------------------

#pragma mark dynamic: methods
    // dynamic stub:
    void addMethod(string methodName, string referenceName)
    {
        this->methodNames[methodName] = referenceName;
    }

    void addMethodOutlet(string referenceName, t_outlet* outlet)
    {
        //todo multiple
        this->methodOutlets[referenceName] = outlet;
    }

    void addMethodPointerOutlet(string referenceName, t_outlet* outlet)
    {
        //todo multiple
        this->methodPointerOutlets[referenceName] = outlet;
    }

    t_outlet* getMethodOutletForReferenceName(string referenceName)
    {
        t_outlet* ret;
        if (this->methodOutlets.count(referenceName)) {
            //todo multiple
            ret = this->methodOutlets[referenceName];
        }

        return ret;
    }

    t_outlet* getMethodPointerOutletForReferenceName(string referenceName)
    {
        t_outlet* ret;
        if (this->methodPointerOutlets.count(referenceName)) {
            //todo multiple
            ret = this->methodPointerOutlets[referenceName];
        }

        return ret;
    }

    void freeMethod(string methodName)
    {
        this->methodNames.erase(methodName);
    }

    void freeMethodOutlet(string referenceName)
    {
        this->methodOutlets.erase(referenceName);
    }

    void freeMethodPointerOutlet(string referenceName)
    {
        this->methodPointerOutlets.erase(referenceName);
    }

    void addProperty(string propertyName, string referenceName)
    {
        this->propertyNames[propertyName] = referenceName;
    }

    void freeProperty(string propertyName)
    {
        this->propertyNames.erase(propertyName);
    }

// ------------------------------------------------
#pragma mark find // MOVE to 'meta' class

    static OPClass* findByCanvas(t_canvas* canvas)
    {
        OPClassByCanvas* ret = new OPClassByCanvas(to_string((long)canvas), "OOP.common");
        if (ret)
            return ret->ref();
        else
            return 0;
    }

    static OPClass* findBySymbol(t_symbol* symbol)
    {
        OPClassBySymbol* ret = new OPClassBySymbol(symbol->s_name, "OOP.common");
        if (ret)
            return ret->ref();
        else
            return 0;
    }
// ------------------------------------------------
#pragma mark parent

    void setParentClass(OPClass* p_class)
    {
        this->parent = p_class;
    }

    OPClass* getParentClass()
    {
        return this->parent;
    }
// ------------------------------------------------
#pragma mark signal

    void addSignal(string signalName, string referenceName)
    {
        this->signalNames[signalName] = referenceName;
    }

    void freeSignal(string signalName)
    {
        this->signalNames.erase(signalName);
    }
// ------------------------------------------------
#pragma mark info
    AtomList getPropertyList()
    {
        AtomList ret;

        for (map<string, string>::iterator it = this->propertyNames.begin(); it != this->propertyNames.end(); ++it) {
            ret.append(Atom(gensym(it->first.c_str())));
        }

        return ret;
    }

    AtomList getMethodList()
    {
        AtomList ret;

        for (map<string, string>::iterator it = this->methodNames.begin(); it != this->methodNames.end(); ++it) {
            ret.append(Atom(gensym(it->first.c_str())));
        }

        return ret;
    }

    AtomList getSignalList()
    {
        AtomList ret;

        for (map<string, string>::iterator it = this->signalNames.begin(); it != this->signalNames.end(); ++it) {
            ret.append(Atom(gensym(it->first.c_str())));
        }

        return ret;
    }
};

class OPInstance {
private:
    map<t_symbol*, OPOutputs> _methodOutputs; ///< vector of method outputs
    OPOutputs _instanceOutputs; ///< vector of instances outputs

    map<t_symbol*, OPOutputs> _getterOutputs; ///< new
    map<t_symbol*, OPOutputs> _setterOutputs; ///< new

    //new
    map<t_symbol*, AtomList> _propertyValues;
    int _refCount;

    // dynamic.
    map<string, string> methodNames;
    map<string, string> propertyNames;

    //signal
    map<t_symbol*, t_sample*> _signalBuffers; ///< vector of method outputs

    //
    map<t_symbol*, t_outlet*> _methodPointerOutputs; // todo OPOutputs

    OPInstanceByCanvas* canvasLink;
    OPInstanceBySymbol* symbolLink;

public:
    string class_name;
    t_canvas* canvas;

    t_symbol* symbol;

    //
    OPInstance* parent;

    OPInstance(OPClass* _opclass)

    {

        printf("new instance\n");

        this->class_name = _opclass->class_name;
        this->symbol = gensym(to_string((long)this).c_str());

        // new canvas. only for canvas-based classes
        if (_opclass->canvas) {
            int dsp_state = canvas_suspend_dsp();

            //parent
            if (_opclass->getParentClass()) {
                this->parent = new OPInstance(_opclass->getParentClass());
                post("created parent class instance");
            }

            this->canvas = (t_canvas*)subcanvas_new(gensym(_opclass->class_name.c_str()));
            this->canvas->gl_havewindow = 1;
            this->canvas->gl_isclone = 1;

            int dollarzero = 1000;
            t_n_canvasenvironment* env = (t_n_canvasenvironment*)getbytes(sizeof(t_n_canvasenvironment)); //TEMP
            env->ce_dir = canvas_getcurrentdir();
            env->ce_argc = 0;
            env->ce_argv = 0;
            env->ce_dollarzero = dollarzero++;
            env->ce_path = 0;

            this->canvas->gl_env = (t_canvasenvironment*)env;

            this->canvas->gl_owner = 0;

            //this->canvas->gl_owner = 0;

            this->canvasLink = new OPInstanceByCanvas(to_string((long)this->canvas), "OOP.common");
            this->canvasLink->ref() = this;

            this->symbolLink = new OPInstanceBySymbol(this->symbol->s_name, "OOP.common");
            this->symbolLink->ref() = this;

            //load
            t_binbuf* b1 = binbuf_new();

            canvas_saveto(_opclass->canvas, b1);

            canvas_paste_class(this->canvas, b1);
            canvas_vis(this->canvas, 0);

            canvas_addtolist(this->canvas);

            canvas_loadbang(this->canvas);

            canvas_resume_dsp(dsp_state);

            //todo bind symbols

            printf("OPInstance + canvas\n");
            printf("canvas: %lu\n", (long)this->canvas);

            //todo cleanup?
            //this->retain();
            this->_refCount = 1;
        }

        //generate properties
        this->propertyNames = _opclass->getPropertyNames();

        //generate methods
        //TODO normal class / singleton
        OPClasses* dyn_class = new OPClasses("__dynamicStub", "exp.method");
        if (!dyn_class->ref()) {
            dyn_class->ref() = new OPClass();
            dyn_class->ref()->class_name = "__dynamicStub";
        }

        this->methodNames = _opclass->getMethodNames();
        // temporary
        map<string, string>::iterator it;
        for (it = this->methodNames.begin(); it != this->methodNames.end(); ++it) {
            t_outlet* dyn_out = dyn_class->ref()->getMethodOutletForReferenceName(it->second);

            if (dyn_out)
                this->addMethod(gensym(it->first.c_str()), dyn_out);

            t_outlet* dyn_pointer_out = dyn_class->ref()->getMethodPointerOutletForReferenceName(it->second);

            if (dyn_pointer_out)
                this->addMethodPointerOut(gensym(it->first.c_str()), dyn_pointer_out);
        }
    }

    ~OPInstance()
    {
        int dsp_state = canvas_suspend_dsp();

        printf("canvas: %lu\n", (long)this->canvas);

        if (this->canvas) {
            canvas_dirty(this->canvas, 0);
            canvas_takeofflist(this->canvas);
            canvas_free(this->canvas);

            this->canvas = 0;
        }

        delete this->canvasLink;
        delete this->symbolLink;

        canvas_resume_dsp(dsp_state);

        printf("~OPInstance\n");
        printf("canvas: %lu\n", (long)this->canvas);
    }

#pragma mark methods

    void addMethod(t_symbol* methodName, t_outlet* outlet)
    {
        this->_methodOutputs[methodName].push_back(outlet);
    }

    void freeMethod(t_symbol* methodName)
    {
        this->_methodOutputs.erase(methodName);
    }

    void addMethodPointerOut(t_symbol* methodName, t_outlet* outlet)
    {
        this->_methodPointerOutputs[methodName] = outlet; //.push_back(outlet);  TODO
    }

    void freeMethodPointerOut(t_symbol* methodName)
    {
        this->_methodPointerOutputs.erase(methodName);
    }

#pragma mark signal

    t_sample* getBufferFor(t_symbol* signalName, int vec_size)
    {
        t_sample* ret = this->_signalBuffers[signalName];

        if (!ret) {
            ret = new t_sample[vec_size];
            this->_signalBuffers[signalName] = ret;
            post("new buffer: %s %i\n", signalName->s_name, vec_size);
        }

        return ret;
    }

    void freeSignal(t_symbol* signalName)
    {
        //todo refcounter
        post("del buffer");
        delete (this->_signalBuffers[signalName]);
        this->_signalBuffers.erase(signalName);
    }

#pragma mark properties

    void addProperty(t_symbol* propertyName, t_outlet* getter_out, t_outlet* setter_out)
    {
        this->_getterOutputs[propertyName].push_back(getter_out);
        this->_setterOutputs[propertyName].push_back(setter_out);

        this->propertyNames[propertyName->s_name] = "<none>"; //don't link by name as we link outlets.
    }
    void freeProperty(t_symbol* propertyName)
    {
        this->_getterOutputs.erase(propertyName);
        this->_setterOutputs.erase(propertyName);

        this->propertyNames.erase(propertyName->s_name);
    }

    void setAtomListProperty(t_symbol* propertyName, AtomList list)
    {
        this->_propertyValues[propertyName] = list;
    }

    AtomList getAtomListProperty(t_symbol* propertyName)
    {
        AtomList list = this->_propertyValues[propertyName];

        return list;
    }

    AtomList getPropertyList()
    {
        AtomList ret;

        for (map<string, string>::iterator it = this->propertyNames.begin(); it != this->propertyNames.end(); ++it) {
            ret.append(Atom(gensym(it->first.c_str())));
        }

        return ret;
    }

#pragma mark methods

    void addInstanceOut(t_outlet* outlet)
    {
        this->_instanceOutputs.push_back(outlet);
    }
    void freeInstanceOut(t_outlet* outlet)
    {
        this->_instanceOutputs.erase(remove(this->_instanceOutputs.begin(), this->_instanceOutputs.end(), outlet), this->_instanceOutputs.end());
    }

    void multipleOutput(AtomList list)
    {
        for (OPOutputs::iterator it = this->_instanceOutputs.begin(); it != this->_instanceOutputs.end(); ++it) {
            list.output(*it);
        }
    }

    void callMethod(AtomList list)
    {
        t_symbol* method_name = list[0].asSymbol();

        AtomList subList = list.slice(1, (int)list.size());

        OPOutputs* out1 = &this->_methodOutputs[method_name];

        if (out1) {
            for (OPOutputs::iterator it = out1->begin(); it != out1->end(); ++it) {
                subList.output(*it);
            }
        }

        //dynamic. todo

        t_outlet* out2 = this->_methodPointerOutputs[method_name];
        if (out2) {
            AtomList objList = AtomList(Atom(gensym("setobject")));

            objList.append(Atom(gensym(to_string((long)this).c_str())));

            objList.output(out2);
        }
    }

    void callSetter(AtomList list)
    {
        t_symbol* property_name = list[0].asSymbol();

        //        OPProperties *out1 = &this->instancePropertyBoxes[property_name];
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
        this->setAtomListProperty(property_name, list2);

        OPOutputs* out1 = &this->_setterOutputs[property_name];

        for (OPOutputs::iterator it = out1->begin(); it != out1->end(); ++it) {
            outlet_bang(*it);
        }
    }

    void callGetter(AtomList list)
    {
        t_symbol* property_name = list[0].asSymbol();

        //        OPProperties *out1 = &this->instancePropertyBoxes[property_name];
        //
        //        if (out1)
        //        {
        //            for (OPProperties::iterator it =out1->begin(); it!=out1->end(); ++it)
        //            {
        //                pd_typedmess((t_pd*)*it, gensym("get"), (int)list.size(), list.toPdData());
        //            }
        //        }

        AtomList list2(list[0]);
        list2.append(this->getAtomListProperty(property_name));

        this->multipleOutput(list2);

        OPOutputs* out1 = &this->_getterOutputs[property_name];

        for (OPOutputs::iterator it = out1->begin(); it != out1->end(); ++it) {
            outlet_bang(*it);
        }
    }

    AtomList getMethodList()
    {
        AtomList ret;

        for (map<t_symbol*, OPOutputs>::iterator it = this->_methodOutputs.begin(); it != this->_methodOutputs.end(); ++it) {
            ret.append(Atom(it->first));
        }

        return ret;
    }

    AtomList getDynamicMethodList()
    {
        AtomList ret;

        for (map<string, string>::iterator it = this->methodNames.begin(); it != this->methodNames.end(); ++it) {
            ret.append(Atom(gensym(it->first.c_str())));
        }

        return ret;
    }

#pragma mark reference counting
    // names?
    void retain()
    {
        this->_refCount++;
        printf("OPInstance ref count: %i\n", this->_refCount);
    }

    //?
    void release()
    {
        this->_refCount--;
        printf("OPInstance ref count: %i\n", this->_refCount);
        if (this->_refCount == 0)
            delete this;
    }

    //debug
    int getRefCount()
    {
        return this->_refCount;
    }

#pragma mark find
    static OPInstance* findByCanvas(t_canvas* canvas)
    {
        OPInstanceByCanvas* ret = new OPInstanceByCanvas(to_string((long)canvas), "OOP.common");
        return ret->ref();
    }

    static OPInstance* findBySymbol(t_symbol* symbol)
    {
        OPInstanceBySymbol* ret = new OPInstanceBySymbol(symbol->s_name, "OOP.common");
        return ret->ref();
    }
};

#endif /* OOPD_h */
