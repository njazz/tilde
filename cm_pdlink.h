#ifndef CM_PDLINK_H
#define CM_PDLINK_H

// prototype for Pd 'server' interaction

void cmp_newpatch(){}
void cmp_openpatch(char * filename){}
void cmp_savepatch(char * filename){}
void cmp_closepatch(){}

typedef void t_object;

void cmp_moveobject(t_object*, int x, int y){}
void cmp_patchcord(t_object*, int out, t_object*, int in){}
void cmp_delete_patchcord(t_object*, int out, t_object*, int in){}    //?

t_object* cmp_create_object(char * class_name, int x, int y){}          //returns pointer
void cmp_get_inlet_count(t_object obj){};
void cmp_get_outlet_count(t_object obj){};
void cmp_get_inlet_type(t_object obj, int idx){};
void cmp_get_outlet_type(t_object obj, int idx){};

void cmp_switch_dsp(bool on){};




#endif // CM_PDLINK_H
