#ifndef CM_CLIPBOARD_H
#define CM_CLIPBOARD_H

#include "cm_object.h"
#include "cm_patchcord.h"


typedef std::vector<cm_object*> cm_obj_vec;
typedef std::vector<cm_patchcord*> cm_cord_vec;

////
/// \brief clipboard singleton
///
class cm_clipboard
{
public:
    static cm_clipboard& inst()
    {
        static cm_clipboard    instance;
        return instance;
    }
private:
    cm_clipboard() {}
//    cm_clipboard(cm_clipboard const&);
//    void operator=(cm_clipboard const&);

public:
    cm_clipboard(cm_clipboard const&)        = delete;
    void operator=(cm_clipboard const&)  = delete;

    void addObject(cm_object* obj)
    {

    }
    void addObjects(cm_obj_vec vec)
    {

    }
    void addPatchcord(cm_patchcord* obj)
    {

    }
    void addPatchcords(cm_cord_vec vec)
    {

    }

    cm_obj_vec getObjects(){
        cm_obj_vec ret;
        return ret;
    };

    cm_obj_vec getPatchcords(){
        cm_cords_vec ret;
        return ret;
    };


    void clear();

};

#endif // CM_CLIPBOARD_H
