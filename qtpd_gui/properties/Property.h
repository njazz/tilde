// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_PROPERTY_H
#define CM_PROPERTY_H

//#include "ceammc_atomlist.h"
#include <QVariant>

#include <QColor>
#include <QObject>
#include <QPoint>
#include <QRect>
#include <QString>
#include <QStringList>

#include <QDebug>

using namespace std;

namespace qtpd {

typedef enum {
    ptBool,
    ptFloat,
    ptInt,
    ptSymbol,
    ptList,
    ptString,
    ptVector,
    ptColor,
    ptVec2,
    ptStringList,
    ptText ///< multiline text for comments, script

} UIPropertyType;

////
/// \brief property handling class for ui object.
/// \details this is different from CEAMMC library property handling library - later merge / unify that
///
class Property : public QObject {

    Q_OBJECT

private:
    QVariant _data;
    QVariant _defaultData;

    QString _group;
    QString _version;

    UIPropertyType _type;

    bool _applyToPd; ///> true if property value should be passed to pd object

public:
    explicit Property();

    // -------

    template <typename T>
    void set(T val);

    void setDefault(); ///> copy current value to default value

    void setVersion(QString version);
    QString version();

    // -------

    UIPropertyType type();

    QVariant data();
    QVariant defaultData();

    // -------

    QSize asQSize();
    QPoint asQPoint();
    QSizeF asQSizeF();
    QPointF asQPointF();
    float asFloat();
    int asInt();
    bool asBool();
    float asFontSize();
    QColor asQColor();
    QStringList asQStringList();
    string asStdString();
    QString asQString();

    QString asPdSaveString();

    // -------

    // todo move?
    static QString escapeString(QString input);
    static QString unescapeString(QString input);

signals:
    void changed();
};
}

#endif // CM_PROPERTY_H
