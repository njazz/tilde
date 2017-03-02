#ifndef CM_PDLINK_H
#define CM_PDLINK_H

#include "../qtpd_lib/src/m_pd.h"
// prototype for Pd 'server' interaction

// use m.pd.h
//typedef void* t_canvas;
//typedef void* t_object;
typedef void (*t_printhook)(const char *s);

///////

extern void cmp_pdinit();
extern void cmp_setprinthook(t_printhook h);

#pragma mark -

extern t_canvas* cmp_newpatch();

//void cmp_openpatch(char* filename)
//void cmp_savepatch(t_canvas* canvas, char* filename)
void cmp_closepatch(t_canvas* canvas);

#pragma mark -

extern t_object* cmp_create_object(t_canvas* canvas, char* class_name, int x, int y);
extern t_object* cmp_create_message(t_canvas* canvas, char* class_name, int x, int y);
//void cmp_moveobject(t_object* obj, int x, int y)

extern void cmp_patchcord(t_object* obj1, int outno, t_object* obj2, int inno);
extern void cmp_delete_patchcord(t_object* obj1, int outno, t_object* obj2, int inno);

#pragma mark -

extern int cmp_get_inlet_count(t_object* obj);
extern int cmp_get_outlet_count(t_object* obj);

//void cmp_get_inlet_type(t_object* obj, int idx){};
//void cmp_get_outlet_type(t_object* obj, int idx){};

#pragma mark -

extern void cmp_switch_dsp(bool on);




#endif // CM_PDLINK_H
