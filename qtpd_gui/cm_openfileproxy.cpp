#include "cm_openfileproxy.h"

#include "cm_fileparser.h"

namespace qtpd {
OpenFileProxy::OpenFileProxy(QObject* parent)
    : QObject(parent)
{
}

void OpenFileProxy::openAbstraction(QString absName)
{
    FileParser::open(absName);
}
}
