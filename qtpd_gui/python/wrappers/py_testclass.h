#ifndef PYTESTCLASS_H
#define PYTESTCLASS_H

#include <QObject>

#include <PythonQt.h>

#include "../cm_pdlink.h"
#include "../window/cm_pdwindow.h"



class pyTestClass : public QObject
{
    Q_OBJECT

public:
    explicit pyTestClass(QObject *parent = 0);

public Q_SLOTS:
    PyObject* getMainModule();

    void test();

};

#endif // PYTESTCLASS_H
