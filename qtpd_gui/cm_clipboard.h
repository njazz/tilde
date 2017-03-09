#ifndef CM_CLIPBOARD_H
#define CM_CLIPBOARD_H

#include "cm_object.h"
#include "cm_patchcord.h"

namespace cm
{

typedef std::vector<UIObject*> cm_obj_vec;
typedef std::vector<Patchcord*> cm_cord_vec;

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
    void addObjects(cm_obj_vec vec)
    {

    }
    void addPatchcord(Patchcord* obj)
    {

    }
    void addPatchcords(cm_cord_vec vec)
    {

    }

    cm_obj_vec getObjects(){
        cm_obj_vec ret;
        return ret;
    };

    cm_cord_vec getPatchcords(){
        cm_cord_vec ret;
        return ret;
    };


    void clear();

};
}

#endif // CM_CLIPBOARD_H
