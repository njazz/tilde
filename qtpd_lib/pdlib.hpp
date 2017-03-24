#ifndef PDLIB_H
#define PDLIB_H

#include "ceammc_atomlist.h"

#include <map>

typedef void (*t_updateUI)(void* uiobj, ceammc::AtomList msg);

extern std::map<std::string, t_updateUI> *updateUImap;


#endif // PDLIB_H
