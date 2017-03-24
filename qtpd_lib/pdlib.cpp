//#include "pdlib.h"

#include "pdlib.hpp"

extern "C" {

#include <g_canvas.h>
#include <m_imp.h>
#include <m_pd.h>
#include <s_stuff.h>

void pd_init(void);
int sys_startgui(const char* libdir);

//temporary externals setup
extern void setup_ui0x2emsg();
extern void setup_list0x2eproduct();

//temporary
t_canvas* cmp_newpatch();
void cmp_closepatch(t_canvas* canvas);

//temporary
extern "C" void setup_ui0x2ebang(void);
extern "C" void setup_ui0x2etoggle(void);
extern "C" void setup_ui0x2emsg(void);
extern "C" void setup_ui0x2efloat(void);
extern "C" void setup_ui0x2escript(void);

//todo fix
//typedef struct _loadedlist
//{
//    struct _loadedlist *ll_next;
//    t_symbol *ll_name;
//} t_loadlist;

//extern "C" t_loadlist *sys_loaded;

//extern "C" void setup_ui0x2ebang(void);
//extern "C" void setup_ui0x2etoggle(void);
//extern "C" void setup_ui0x2enumber_tilde(void);
//extern "C" void setup_ui0x2enumber(void);
//extern "C" void setup_ui0x2eslider(void);
//extern "C" void setup_ui0x2eradio(void);

//extern "C" void setup_ui0x2ebpfunc(void);
//extern "C" void setup_ui0x2eknob(void);
//extern "C" void setup_ui0x2escope_tilde(void);
//extern "C" void setup_ui0x2espectroscope_tilde(void);

//temporary
extern void uimsg_set_updateUI(t_pd* x, void* uiobj, t_updateUI func);

//extern "C" void setup_ui0x2ecolorpanel(void);
//extern "C" void setup_ui0x2edsp_tilde(void);
//extern "C" void setup_ui0x2eincdec(void);
//extern "C" void setup_ui0x2ematrix(void);
//extern "C" void setup_ui0x2emenu(void);
//extern "C" void setup_ui0x2emeter_tilde(void);
//extern "C" void setup_ui0x2epreset(void);
//extern "C" void setup_ui0x2erslider(void);
//extern "C" void setup_ui0x2etab(void);
}

#include <stdbool.h>

#include "ceammc-lib/ceammc_atomlist.h"

#include <sstream>
#include <string>

#include <QDebug>

using namespace ceammc;

t_pdinstance* cm_pd;

extern t_pd* newest; /* OK - this should go into a .h file now :) */

void cmp_error(std::string msg)
{
    qDebug("## Pd lib error: %s\n", msg.c_str());
}

// copied from libpd

void cmp_pdinit()
{
    //pd_init();

    // copied from libpd
    signal(SIGFPE, SIG_IGN);
    sys_soundin = NULL;
    sys_soundout = NULL;

    // are all these settings necessary?
    sys_schedblocksize = DEFDACBLKSIZE;
    sys_externalschedlib = 0;
    sys_printtostderr = 0;
    sys_usestdpath = 0; // don't use pd_extrapath, only sys_searchpath
    sys_debuglevel = 0;
    sys_verbose = 4;
    sys_noloadbang = 0;
    sys_nogui = 1;
    sys_hipriority = 0;
    sys_nmidiin = 0;
    sys_nmidiout = 0;
    sys_init_fdpoll();

    pd_init();
    sys_set_audio_api(API_PORTAUDIO);
    sys_searchpath = NULL;
    sys_startgui(NULL);

    cm_pd = pdinstance_new();

    if (!cm_pd)
        cmp_error("Initialization failed");
    else
        qDebug("Pd library initialized: %lu", (long)cm_pd);

    //temporary extra objects

    setup_ui0x2emsg();
    setup_ui0x2efloat();
    setup_ui0x2ebang();
    setup_ui0x2etoggle();
    setup_ui0x2escript();

    //setup_list0x2eproduct();

    //temporary initialisations
    //    setup_ui0x2ebang();
    //    setup_ui0x2ebpfunc();
    //    setup_ui0x2eknob();
    //    setup_ui0x2emsg();
    //    setup_ui0x2enumber();
    //    setup_ui0x2enumber_tilde();
    //    setup_ui0x2eradio();
    //    setup_ui0x2escope_tilde();
    //    setup_ui0x2eslider();
    //    setup_ui0x2espectroscope_tilde();
    //    setup_ui0x2etoggle();

    qDebug("pd extras");

    // init audio
    int indev[MAXAUDIOINDEV], inch[MAXAUDIOINDEV],
        outdev[MAXAUDIOOUTDEV], outch[MAXAUDIOOUTDEV];

    indev[0] = outdev[0] = DEFAULTAUDIODEV;
    inch[0] = 1;
    outch[0] = 2;

    sys_set_audio_settings(1, indev, 1, inch,
        1, outdev, 1, outch, 44100, -1, 1, DEFDACBLKSIZE);
    sched_set_using_audio(SCHED_AUDIO_CALLBACK);

    sys_reopen_audio();

    //hack lol - removes empty canvas with array template
    cmp_closepatch(cmp_newpatch());
}

void cmp_setprinthook(t_printhook h)
{
    sys_printhook = h;
}

void cmp_add_searchpath(t_symbol* s)
{
    sys_searchpath = namelist_append_files(sys_searchpath, s->s_name);
    post("added path: %s", s->s_name);
}

void cmp_remove_searchpath(t_symbol* s)
{
    //todo
}

bool cmp_is_abstraction(t_object* x)
{
    // !(pd_class(&x->te_pd) == canvas_class) &&
    return ((pd_class(&x->te_pd) == canvas_class) && canvas_isabstraction((t_canvas*)x));
}

t_symbol* cmp_get_path(t_canvas* c)
{
    return canvas_getdir(c);
}

AtomList cmp_get_loaded_list()
{
    AtomList ret;

    while (sys_loaded) {
        ret.append(Atom(sys_loaded->ll_name));
        sys_loaded = sys_loaded->ll_next;
    }

    return ret;
}

void cmp_loadlib(std::string name)
{
    sys_load_lib(canvas_getcurrent(), name.c_str());
}

void cmp_clear_searchpath()
{
    sys_searchpath = NULL;
}

#pragma mark -

t_canvas* cmp_newpatch()
{
    qDebug("new patch: %lu", (long)cm_pd);

    AtomList list(Atom(gensym("Untitled-1")));
    list.append(Atom(gensym("~/")));

    t_pd* dest = gensym("pd")->s_thing;
    if (dest == NULL) {
        cmp_error("Pd object not found");
        return 0;
    };

    pd_typedmess(dest, gensym("menunew"), (int)list.size(), list.toPdData());

    t_canvas* ret = 0;
    ret = (t_canvas*)pd_newest(); //canvas_getcurrent();

    if (pd_this) {
        ret = pd_this->pd_canvaslist->gl_next;

        //        canvas_addinlet(ret,0,&s_list);
        //        canvas_addoutlet(ret,0,&s_list);
    }

    qDebug("new canvas: %lu", (long)ret);

    return ret;
}

t_canvas* cmp_openpatch(char* filename, char* path)
{
    t_canvas* ret = (t_canvas*)glob_evalfile(0, gensym(filename), gensym(path));

    //    post("dir");
    //    post(canvas_getdir(ret)->s_name);

    return ret;
}

void cmp_savepatch(t_canvas* canvas, char* filename, char* path)
{
    t_pd* dest = gensym("pd")->s_thing;
    if (dest == NULL) {
        cmp_error("Pd object not found");
        return;
    };

    AtomList list(Atom(gensym(filename)));
    list.append(Atom(gensym(path)));

    pd_typedmess((t_pd*)canvas, gensym("savetofile"), (int)list.size(), list.toPdData());
}

void cmp_closepatch(t_canvas* canvas)
{
    if (canvas)
        pd_free((t_pd*)canvas);

    qDebug("closed patch");
}

//#pragma mark -

//temporary
//template<typename Out>
//void split(const std::string &s, char delim, Out result) {
//    std::stringstream ss;
//    ss.str(s);
//    std::string item;
//    while (std::getline(ss, item, delim)) {
//        *(result++) = item;
//    }
//}

//std::vector<std::string> string_split(const std::string &s, char delim) {
//    std::vector<std::string> elems;
//    split(s, delim, std::back_inserter(elems));
//    return elems;
//}

AtomList* AtomListFromString(std::string in_string)
{
    AtomList* list;

    if (in_string.size()) {
        t_binbuf* nb = binbuf_new();

        binbuf_text(nb, (char*)in_string.c_str(), in_string.size());
        int argc = binbuf_getnatom(nb);
        t_atom* argv = binbuf_getvec(nb);

        list = new AtomList(argc, argv);
    } else {
        list = new AtomList;
    }

    return list;
}

////////

t_object* cmp_create_object(t_canvas* canvas, std::string class_name, int x, int y)
{
    t_object* ret2;
    t_object* ret1;

    AtomList* list = AtomListFromString(class_name);
    if (list->size() == 0) {
        delete list;
        return 0;
    }

    list->insert(0, Atom((float)x));
    list->insert(1, Atom((float)y));

    ret1 = (t_object*)pd_newest();
    pd_typedmess((t_pd*)canvas, gensym("obj"), (int)list->size(), list->toPdData());

    delete list;

    ret2 = (t_object*)pd_newest();
    if (!ret2)
        return 0;
    if (ret2 != pd_checkobject((t_pd*)ret2))
        return 0;
    if (ret2 == ret1)
        return 0;

    char* bufp = new char[1024];
    int lenp;

    binbuf_gettext(ret2->te_binbuf, &bufp, &lenp);
    qDebug("object data: %s", bufp);

    return ret2;
}

//t_object* cmp_create_message(t_canvas* canvas, std::string message, int x, int y)
//{
//    t_object* ret2;
//    t_object* ret1;

//    AtomList* list = AtomListFromString(message);
//    //if (list->size()==0) {return 0;}

//    list->insert(0,Atom((float)x));
//    list->insert(1,Atom((float)y));
//    list->insert(2,gensym("ui.msg"));

//    qDebug("list size %i", list->size());

//    //    for (int i=0;i<list.size();i++)
//    //    {
//    //        qDebug("*message data: %s", list.at(i).asString().c_str());
//    //    }

//    //pd_typedmess((t_pd*)canvas, gensym("msg"), (int)list->size(), list->toPdData());

//    ret1 = (t_object*)pd_newest();

//    pd_typedmess((t_pd*)canvas, gensym("obj"), list->size(), list->toPdData());

//    delete list;

//    ret2 = (t_object*)pd_newest();
//    if (!ret2) return 0;
//    if (ret2 != pd_checkobject((t_pd*)ret2)) return 0;
//    if (ret2==ret1) return 0;

//    char* bufp = new char[1024];
//    int lenp;
//    binbuf_gettext(ret2->te_binbuf,&bufp,&lenp);
//    qDebug("object data: %s", bufp);

//    return ret2;

//}

void cmp_moveobject(t_object* obj, int x, int y)
{
    obj->te_xpix = x;
    obj->te_ypix = y;
}

void cmp_deleteobject(t_canvas* canvas, t_object* obj)
{

    // one more extra check
    if (canvas) {
        glist_delete(canvas, &obj->te_g);
        //canvas_restoreconnections(glist_getcanvas(canvas));
    } else {
        qDebug("pd canvas not found - not deleted");
    }
    qDebug("deleted obj");
}

///////

void cmp_patchcord(t_object* obj1, int outno, t_object* obj2, int inno)
{
    //qDebug("patchcord");

    obj_connect(obj1, outno, obj2, inno);
}

void cmp_delete_patchcord(t_object* obj1, int outno, t_object* obj2, int inno)
{

    obj_disconnect(obj1, outno, obj2, inno);

} //?

#pragma mark -

int cmp_get_outlet_count(t_object* obj)
{
    //qDebug("inlet count for %lu", (long)obj);
    return obj_noutlets(obj);
};

int cmp_get_inlet_count(t_object* obj)
{
    return obj_ninlets(obj);
};

#pragma mark -

int cmp_get_inlet_type(t_object* obj, int idx)
{
    return obj_issignalinlet(obj, idx);
};

int cmp_get_outlet_type(t_object* obj, int idx)
{
    return obj_issignaloutlet(obj, idx);
};

//int cmp_get_canvas_inlet_count(t_canvas* canvas)
//{
//    return obj_n
//}

#pragma mark -
// --------------------------------------------
// dsp

void cmp_switch_dsp(bool on)
{
    if (!cm_pd) {
        cmp_error("library not yet initialized");
        return;
    }
    AtomList list;
    list.append(Atom(on ? 1 : 0));

    t_pd* dest = gensym("pd")->s_thing;
    if (dest == NULL) {
        cmp_error("Pd object not found");
        return;
    };
    pd_typedmess(dest, gensym("dsp"), (int)list.size(), list.toPdData());
};

void cmp_sendstring(t_pd* obj, std::string msg)
{
    AtomList* list = AtomListFromString(msg);

    AtomList* list2 = new AtomList;
    *list2 = list->subList(1, list->size());

    pd_typedmess(obj, list->at(0).asSymbol(), (int)list2->size(), list2->toPdData());
}

void cmp_post(std::string text)
{
    post("%s", text.c_str());
}

void cmp_connectUI(t_pd* obj, void* uiobj, t_updateUI func)
{
    // fix that
    uimsg_set_updateUI(obj, uiobj, func);
}

// ---------------------------------------------
// arrays

t_garray* cmp_get_array(t_symbol* arrayname)
{
    t_garray* a = (t_garray*)pd_findbyclass(arrayname, garray_class);
    return a;
}

//todo
void cmp_get_array_data(t_garray* a, int* size, t_float** vec)
{
    garray_getfloatarray(a, size, vec);
}

t_garray* cmp_new_array(t_canvas* c, t_symbol* name, t_floatarg size, t_floatarg save, t_floatarg newgraph)
{
    //possibly unused at all
    t_garray* ret;
    glist_arraydialog(c, name, size, save, newgraph);

    ret = (t_garray*)pd_newest();
    return ret;
}
