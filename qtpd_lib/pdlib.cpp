#include "pdlib.h"

extern "C" {

#include <m_pd.h>
#include <m_imp.h>
#include <g_canvas.h>
#include <s_stuff.h>

}

#include <stdbool.h>

#include "ceammc-lib/ceammc_atomlist.h"

#include <string.h>

#include <QDebug>

using namespace ceammc;

t_pdinstance* cm_pd;

extern t_pd *newest;    /* OK - this should go into a .h file now :) */

void cmp_error(std::string msg)
{
    qDebug ("## Pd lib error: %s\n",msg.c_str());
}

 // copied from libpd
void pd_init(void);
int sys_startgui(const char *libdir);

void cmp_pdinit()
{
    //pd_init();

    // copied from libpd
    sys_set_audio_api(API_DUMMY);
    sys_searchpath = NULL;
    //sys_startgui(NULL);

    cm_pd = pdinstance_new();

    if (!cm_pd) cmp_error("Initialization failed");

    qDebug("Pd library initialized: %lu", (long)cm_pd);

}

void cmp_setprinthook(t_printhook h)
{
    sys_printhook = h;
}

#pragma mark -


//extern void glob_menunew(void *dummy, t_symbol *filesym, t_symbol *dirsym);

t_canvas* cmp_newpatch()
{
    qDebug("new");

    AtomList list(Atom(gensym("Untitled-1")));
    list.append(Atom(gensym("~/")));

//    qDebug("atomlist off");


    t_pd* dest = gensym("Pd")->s_thing;
    if (dest==NULL)
    {
      cmp_error("Pd object not found");
      return 0;
    };

    //qDebug("new");

    //pd_typedmess(dest, gensym("menunew"), (int)list.size(), list.toPdData());

    //glob_menunew(0, gensym("Untitled-1"),gensym("~/"));

    
    t_canvas* ret = 0;
//    ret = canvas_getcurrent();
    
    return ret;
}
//void cmp_openpatch(char* filename)
//{
//}
//void cmp_savepatch(t_canvas* canvas, char* filename)
//{
//    //message to canvas
//}
//void cmp_closepatch(t_canvas* canvas)
//{
//    //message to canvas
    
//}

#pragma mark -

t_object* cmp_create_object(t_canvas* canvas, char* class_name, int x, int y)
{
    t_object* ret;
    
    AtomList list;
    list.append(Atom(gensym(class_name)));
    list.append(Atom(x));
    list.append(Atom(y));
    
    pd_typedmess((t_pd*)canvas, gensym("obj"), (int)list.size(), list.toPdData());
    
    ret = (t_object*)newest;
    
    return ret;
}

//void cmp_moveobject(t_object* obj, int x, int y)
//{
    
//}

void cmp_patchcord(t_object* obj1, int outno, t_object* obj2, int inno)
{
    obj_connect(obj1, outno, obj2, inno);
}

void cmp_delete_patchcord(t_object* obj1, int outno, t_object* obj2, int inno) {
    
    obj_disconnect(obj1, outno, obj2, inno);
    
} //?



#pragma mark -

int cmp_get_inlet_count(t_object* obj)
{
    return obj_noutlets(obj);
};

int cmp_get_outlet_count(t_object* obj)
{
    return obj_ninlets(obj);
};

//void cmp_get_inlet_type(t_object* obj, int idx){};
//void cmp_get_outlet_type(t_object* obj, int idx){};

#pragma mark -

void cmp_switch_dsp(bool on)
{
    if (!cm_pd)
    {
        cmp_error("library not yet initialized");
        return;
    }
    AtomList list;
    list.append(Atom(on?1:0));

    t_pd* dest = gensym("pd")->s_thing;
    if (dest==NULL)
    {
      cmp_error("Pd object not found");
      return;
    };
    pd_typedmess(dest, gensym("dsp"), (int)list.size(), list.toPdData());
};


pdlib::pdlib()
{
}
