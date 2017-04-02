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

//#include "OPClass.h"
//#include "OPInstance.h"

namespace qtpd {

// ------------------------------------------------------------
// typedefs

class OPClass;
class OPInstance;

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

}

#endif /* OOPD_h */
