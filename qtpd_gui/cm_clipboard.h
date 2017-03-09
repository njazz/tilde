#ifndef CM_CLIPBOARD_H
#define CM_CLIPBOARD_H

#include "cm_object.h"
#include "cm_patchcord.h"

namespace cm
{

typedef std::vector<UIObject*> objectVec;
typedef std::vector<Patchcord*> patchcordVec;

////
/// \brief clipboard singleton
///
class Clipboard
{
public:
    static Clipboard& inst()
    {
        static Clipboard    instance;
        return instance;
    }
private:
    Clipboard() {}
//    cm_clipboard(cm_clipboard const&);
//    void operator=(cm_clipboard const&);

public:
    Clipboard(Clipboard const&)        = delete;
    void operator=(Clipboard const&)  = delete;

    void addObject(UIObject* obj)
    {

    }
    void addObjects(objectVec vec)
    {

    }
    void addPatchcord(Patchcord* obj)
    {

    }
    void addPatchcords(patchcordVec vec)
    {

    }

    objectVec getObjects(){
        objectVec ret;
        return ret;
    };

    patchcordVec getPatchcords(){
        patchcordVec ret;
        return ret;
    };


    void clear();

};
}

#endif // CM_CLIPBOARD_H
