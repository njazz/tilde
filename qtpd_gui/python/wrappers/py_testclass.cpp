// (c) 2017 Alex Nadzharov
// License: GPL3

#include "py_testclass.h"

pyTestClass::pyTestClass(QObject* parent)
    : QObject(parent)
{
}

PyObject* pyTestClass::getMainModule()
{
    return PythonQt::self()->getMainModule();
}

void pyTestClass::test()
{
    printf("test ok");

    qDebug("test ok");
}
