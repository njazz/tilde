#include "pdlib.h"

extern "C" {

#include <m_pd.h>
#include <m_imp.h>
#include <g_canvas.h>
#include <s_stuff.h>

void pd_init(void);
int sys_startgui(const char *libdir);

//temporary externals setup
extern void setup_ui0x2emsg();
extern void setup_list0x2eproduct();

}

#include <stdbool.h>

#include "ceammc-lib/ceammc_atomlist.h"

#include <string>
#include <sstream>

#include <QDebug>

using namespace ceammc;

t_pdinstance* cm_pd;

extern t_pd *newest;    /* OK - this should go into a .h file now :) */



void cmp_error(std::string msg)
{
    qDebug ("## Pd lib error: %s\n",msg.c_str());
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
    sys_verbose = 0;
    sys_noloadbang = 0;
    sys_nogui = 1;
    sys_hipriority = 0;
    sys_nmidiin = 0;
    sys_nmidiout = 0;
    sys_init_fdpoll();

    pd_init();
    sys_set_audio_api(API_DUMMY);
    sys_searchpath = NULL;
    sys_startgui(NULL);

    cm_pd = pdinstance_new();

    if (!cm_pd)
        cmp_error("Initialization failed");
    else
        qDebug("Pd library initialized: %lu", (long)cm_pd);

    //temporary extra objects
    setup_ui0x2emsg();
    setup_list0x2eproduct();
    qDebug("pd extras");

}

void cmp_setprinthook(t_printhook h)
{
    sys_printhook = h;
}

#pragma mark -

t_canvas* cmp_newpatch()
{
    qDebug("new patch: %lu", (long)cm_pd);

    AtomList list(Atom(gensym("Untitled-1")));
    list.append(Atom(gensym("~/")));

    t_pd* dest = gensym("pd")->s_thing;
    if (dest==NULL)
    {
        cmp_error("Pd object not found");
        return 0;
    };

    pd_typedmess(dest, gensym("menunew"), (int)list.size(), list.toPdData());

    t_canvas* ret = 0;
    ret = (t_canvas*)pd_newest();//canvas_getcurrent();

    if (pd_this)
    {
        ret = pd_this->pd_canvaslist->gl_next;
    }

    qDebug("new canvas: %lu", (long)ret);
    
    return ret;
}

t_canvas* cmp_openpatch(char* filename, char* path)
{
    return (t_canvas*) glob_evalfile(0, gensym(filename), gensym(path));
}

void cmp_savepatch(t_canvas* canvas, char* filename, char* path)
{
    t_pd* dest = gensym("pd")->s_thing;
    if (dest==NULL)
    {
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

    if (in_string.size())
    {
        t_binbuf *nb = binbuf_new();

        binbuf_text(nb, (char*)in_string.c_str(), in_string.size());
        int argc = binbuf_getnatom(nb);
        t_atom* argv = binbuf_getvec(nb);

        list = new AtomList(argc,argv);
    }
    else
    {
        list = new AtomList;
    }

    return list;

}

////////

t_object* cmp_create_object(t_canvas* canvas, std::string class_name, int x, int y)
{
    t_object* ret2;
    
    AtomList* list = AtomListFromString(class_name);
    if (list->size()==0) {return 0;}

    list->insert(0,Atom((float)x));
    list->insert(1,Atom((float)y));

    pd_typedmess((t_pd*)canvas, gensym("obj"), (int)list->size(), list->toPdData());

    ret2 = (t_object*)pd_newest();
    if (!ret2) return 0;
    if (ret2 != pd_checkobject((t_pd*)ret2)) return 0;

    char* bufp = new char[1024];
    int lenp;

    binbuf_gettext(ret2->te_binbuf,&bufp,&lenp);
    qDebug("object data: %s", bufp);

    return ret2;

}



t_object* cmp_create_message(t_canvas* canvas, std::string message, int x, int y)
{
    t_object* ret2;

    AtomList* list = AtomListFromString(message);
    //if (list->size()==0) {return 0;}

    list->insert(0,Atom((float)x));
    list->insert(1,Atom((float)y));
    list->insert(2,gensym("ui.msg"));

    qDebug("list size %i", list->size());

    //    for (int i=0;i<list.size();i++)
    //    {
    //        qDebug("*message data: %s", list.at(i).asString().c_str());
    //    }

    //pd_typedmess((t_pd*)canvas, gensym("msg"), (int)list->size(), list->toPdData());

    pd_typedmess((t_pd*)canvas, gensym("obj"), list->size(), list->toPdData());

    ret2 = (t_object*)pd_newest();
    if (!ret2) return 0;
    if (ret2 != pd_checkobject((t_pd*)ret2)) return 0;

    char* bufp = new char[1024];
    int lenp;
    binbuf_gettext(ret2->te_binbuf,&bufp,&lenp);
    qDebug("object data: %s", bufp);

    return ret2;

}

//void cmp_moveobject(t_object* obj, int x, int y)
//{

//}

void cmp_patchcord(t_object* obj1, int outno, t_object* obj2, int inno)
{
    //qDebug("patchcord");

    obj_connect(obj1, outno, obj2, inno);
}

void cmp_delete_patchcord(t_object* obj1, int outno, t_object* obj2, int inno) {
    
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


void cmp_sendstring(t_pd* obj, std::string msg)
{
    //std::vector<std::string> atoms_ = string_split(msg, ' ');

    //AtomList list;

    AtomList* list = AtomListFromString(msg);

    AtomList* list2 = new AtomList;
    *list2 = list->subList(1, list->size());

    //    if (atoms_.size()<1) return;

    //    for (int i = 1;i<atoms_.size();i++)
    //    {
    //        list.append(Atom(gensym(atoms_.at(i).c_str())));
    //    }

    pd_typedmess(obj, list->at(0).asSymbol(), (int)list2->size(), list2->toPdData());

}

//////////

pdlib::pdlib()
{
}
