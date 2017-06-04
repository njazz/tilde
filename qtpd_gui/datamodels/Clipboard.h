// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CLIPBOARD_H
#define CLIPBOARD_H

#include <QObject>
#include <QDebug>

namespace qtpd{
////
/// \brief The Clipboard class - just a QStringList with Pd strings for objects
///
class Clipboard : public QObject {
    Q_OBJECT

private:
    static Clipboard* _instance;
    explicit Clipboard(){};

    QStringList _data;

public:
    static Clipboard* inst()
    {
        if (!_instance) {
            qDebug() << "new clipboard instance";
            _instance = new Clipboard();
        }

        return _instance;
    }

    // -----------------------------

    void append(QStringList data)
    {
        _data += data;
    }

    void clear()
    {
        _data.clear();
    }

    size_t size()
    {
        return _data.size();
    }

    QStringList get()
    {
        return _data;
    }

    void setStringAt(int idx, QString str)
    {
        if (idx < _data.size())
            _data[idx] = str;
        else
            qDebug() << "clipboard: out of range";
    }

    // change to pointer?
    QString at(int idx)
    {
        QString ret = "";

        if (idx < _data.size())
            return QString(_data[idx]);
        else
            qDebug() << "clipboard: out of range";
        return ret;
    }

signals:

public slots:
};
}

#endif // CLIPBOARD_H
