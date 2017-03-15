#ifndef CM_PDLINK_H
#define CM_PDLINK_H

#include "../qtpd_lib/src/m_pd.h"
#include "../qtpd_lib/ceammc-lib/ceammc_atomlist.h"

// prototype for Pd 'server' interaction

////
/// \brief callback function when UI needs update
///
typedef void (*t_updateUI)(void* uiobj, ceammc::AtomList msg);

////
/// standard pd hook for print function
///
typedef void (*t_printhook)(const char *s);


////
/// \brief initializes pd library
///
extern void cmp_pdinit();

////
/// \brief connects to print hook function
/// \param h - pointer to function
///
extern void cmp_setprinthook(t_printhook h);

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


///////




#endif // CM_PDLINK_H
