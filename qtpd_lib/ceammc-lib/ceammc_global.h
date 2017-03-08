#ifndef CEAMMC_GLOBAL_H
#define CEAMMC_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(CEAMMC_LIBRARY)
#  define CEAMMCSHARED_EXPORT Q_DECL_EXPORT
#else
#  define CEAMMCSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // CEAMMC_GLOBAL_H
