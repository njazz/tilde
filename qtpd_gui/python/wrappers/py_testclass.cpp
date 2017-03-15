#include "py_testclass.h"



pyTestClass::pyTestClass(QObject *parent) : QObject(parent)
{

}

PyObject* pyTestClass::getMainModule() {
  return PythonQt::self()->getMainModule();
}

void pyTestClass::test()
{
    printf("test ok");

    qDebug("test ok");
}
