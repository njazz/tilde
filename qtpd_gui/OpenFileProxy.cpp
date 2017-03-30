#include "OpenFileProxy.h"

#include "FileParser.h"

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
