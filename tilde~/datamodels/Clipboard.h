// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CLIPBOARD_H
#define CLIPBOARD_H

#include <QObject>

namespace qtpd {
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
    static Clipboard* inst();

    // -----------------------------

    void append(QStringList data);
    void clear();
    size_t size();
    QStringList get();
    void setStringAt(int idx, QString str);

    // change to pointer?
    QString at(int idx);

signals:

public slots:
};
}

#endif // CLIPBOARD_H
