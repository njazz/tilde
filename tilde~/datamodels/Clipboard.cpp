// (c) 2017 Alex Nadzharov
// License: GPL3

#include "Clipboard.h"
#include <QDebug>

namespace qtpd {
Clipboard* Clipboard::_instance;

Clipboard* Clipboard::inst()
{
    if (!_instance) {
        qDebug() << "new clipboard instance";
        _instance = new Clipboard();
    }

    return _instance;
}

// -----------------------------

void Clipboard::append(QStringList data)
{
    _data += data;
}

void Clipboard::clear()
{
    _data.clear();
}

size_t Clipboard::size()
{
    return _data.size();
}

QStringList Clipboard::get()
{
    return _data;
}

void Clipboard::setStringAt(int idx, QString str)
{
    if (idx < _data.size())
        _data[idx] = str;
    else
        qDebug() << "clipboard: out of range";
}

// change to pointer?
QString Clipboard::at(int idx)
{
    QString ret = QString("");

    if (idx < _data.size())
        return QString(_data[idx]);
    else
        qDebug() << "clipboard: out of range";

    return ret;
}
}
