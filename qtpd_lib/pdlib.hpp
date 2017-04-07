#ifndef PDLIB_H
#define PDLIB_H

#include "ceammc_atomlist.h"

#include <map>

typedef void (*t_updateUI)(void* uiobj, ceammc::AtomList msg);

extern std::map<std::string, t_updateUI> *updateUImap;

typedef struct _cmp_audio_info
{
    std::string inputDeviceList;
    std::string outputDeviceList;
    int inputDeviceCount;
    int outputDeviceCount;
    int hasMulti;
    int hasCallback;
} t_cmp_audio_info;

#endif // PDLIB_H
