// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_PDLINK_H
#define CM_PDLINK_H

#include "../qtpd_lib/ceammc-lib/ceammc_atomlist.h"
#include "../qtpd_lib/src/m_pd.h"

// prototype for Pd 'server' interaction

////
/// \brief callback function when UI needs update
///
typedef void (*t_updateUI)(void* uiobj, ceammc::AtomList msg);

////
/// standard pd hook for print function
///
typedef void (*t_printhook)(const char* s);

////
/// \brief initializes pd library
///
extern void cmp_pdinit();

////
/// \brief connects to print hook function
/// \param h - pointer to function
///
extern void cmp_setprinthook(t_printhook h);

////
/// \brief add search path to pd engine
/// \details we do all path handling 'on client' - for canvases we add all the search paths manually
/// \param s
///
extern void cmp_add_searchpath(t_symbol* s);

////
/// \brief remove search path from pd engine
/// \details this is used when canvas is freed to remove temporary search paths
/// \param s
///
extern void cmp_remove_searchpath(t_symbol* s);

////
/// \brief clear search paths
///
extern void cmp_clear_searchpath();

////
/// \brief returns list of loaded externals
/// \return
///
extern ceammc::AtomList cmp_get_loaded_list();

////
/// \brief load external
/// \details probably will be removed later
/// \return
///
extern void cmp_loadlib(std::string lib);

#pragma mark -

////
/// \brief creates new t_canvas
/// \return new canvas or 0 if failed
///
extern "C" t_canvas* cmp_newpatch();

////
/// \brief creates canvas from file. TODO probably unused with parser on client app.
/// \param filename
/// \param path
/// \return new canvas or 0 if failed
/// \deprecated not used for now - the files are loaded by 'client'
///
t_canvas* cmp_openpatch(char* filename, char* path);

////
/// \brief saves canvas as pd file
/// \param canvas
/// \param filename
/// \param path
/// \deprecated not used for now - the files are saved by 'client'
///
extern void cmp_savepatch(t_canvas* canvas, char* filename, char* path);

////
/// \brief closes and frees the canvas
/// \param canvas
///
extern "C" void cmp_closepatch(t_canvas* canvas);

////
/// \brief check if canvas is an abstraction
extern bool cmp_is_abstraction(t_object* x);

////
/// \brief get canvas dir if it is an abstraction
extern t_symbol* cmp_get_path(t_canvas* c);

#pragma mark -

////
/// \brief creates pd object
/// \param canvas pointer to canvas
/// \param class_name TODO rename. class name and arguments
/// \param x position
/// \param y position
/// \return pointer to object
///
extern t_object* cmp_create_object(t_canvas* canvas, std::string class_name, int x, int y);

////
/// \brief creates pd message TODO not working now
/// \param canvas
/// \param message
/// \param x
/// \param y
/// \return pointer to object
/// \deprecated using only objects now
///
//extern t_object* cmp_create_message(t_canvas* canvas, std::string message, int x, int y);

////
/// \brief move pd object to new location
/// \param obj
/// \param x
/// \param y
///
extern void cmp_moveobject(t_object* obj, int x, int y);

////
/// \brief delete pd object
/// \param canvas
/// \param obj
///
extern void cmp_deleteobject(t_canvas* canvas, t_object* obj);

////
/// \brief new patchcord
/// \param obj1
/// \param outno
/// \param obj2
/// \param inno
///
extern void cmp_patchcord(t_object* obj1, int outno, t_object* obj2, int inno);

////
/// \brief delete patchcord
/// \param obj1
/// \param outno
/// \param obj2
/// \param inno
///
extern void cmp_delete_patchcord(t_object* obj1, int outno, t_object* obj2, int inno);

#pragma mark -

////
/// \brief get number of inlets for object
/// \param obj
/// \return inlet count
///
extern int cmp_get_inlet_count(t_object* obj);

////
/// \brief get number of outlets for object
/// \param obj
/// \return outlet count
///
extern int cmp_get_outlet_count(t_object* obj);

////
/// \brief returns inlet at specified index for the object
/// \param obj
/// \param idx
/// \return
///
extern t_inlet* cmp_get_inlet(t_inlet* obj, int idx);

////
/// \brief returns outlet at specified index for the object
/// \param obj
/// \param idx
/// \return
///
extern t_outlet* cmp_get_outlet(t_object* obj, int idx);

////
/// \brief check if inlet is signal~
/// \param obj
/// \param idx
/// \return
///
extern int cmp_get_inlet_type(t_object* obj, int idx);

////
/// \brief check if outlet is signal~
/// \param obj
/// \param idx
/// \return
///
extern int cmp_get_outlet_type(t_object* obj, int idx);

#pragma mark -

////
/// \brief switch dsp on or off
/// \param on
///
extern void cmp_switch_dsp(bool on);

#pragma mark -

////
/// \brief send string as pd message to object
/// \param obj
/// \param msg
///
void cmp_sendstring(t_pd* obj, std::string msg);

////
/// \brief set the 'repaint' function of the ui object to be accessible from pd object
/// \param obj
/// \param func
///
void cmp_connectUI(t_pd* obj, void* uiobj, t_updateUI func);

//void cmp_connectUI(std::string obj_name, void* uiobj, t_updateUI func);

////
/// \brief post plain text to Pd window
/// \param text
///
void cmp_post(std::string text);

////
/// \brief set verbose level (1..5)
/// \param v
///
void cmp_set_verbose(int v);

///////

// arrays

t_garray* cmp_get_array(t_symbol* arrayname);

void cmp_get_array_data(t_garray* a, int* size, t_word** vec);

int cmp_get_array_size(t_garray* a);

t_garray* cmp_new_array(t_canvas* c, t_symbol* name, t_floatarg size, t_floatarg save, t_floatarg newgraph);


////

// audio info

typedef struct _cmp_audio_info
{
    std::string inputDeviceList;
    std::string outputDeviceList;
    int inputDeviceCount;
    int outputDeviceCount;
    bool hasMulti;
    bool hasCallback;
} t_cmp_audio_info;

t_cmp_audio_info cmp_get_audio_device_info();
std::string cmp_get_audio_apis();

#endif // CM_PDLINK_H
