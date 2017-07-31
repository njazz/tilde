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
    ptPath,         ///> file or directory
    ptPathList,
    ptEnum,         ///> index and option list
    ptText          ///< multiline text for comments, script

} UIPropertyType;

////
/// \brief property handling class for ui object.
/// \details this is different from CEAMMC library property handling library - later merge / unify that
///
class Property : public QObject {

    Q_OBJECT

private:
    QVariantList _data;
    QVariantList _defaultData;

    QString _group;
    QString _version;

    UIPropertyType _type;

    bool _readOnly;

    bool _applyToPd; ///> true if property value should be passed to pd object

public:
    explicit Property();
    Property(const Property& src);
    Property( Property& src);

    const Property operator=(const Property& rval);
    Property operator=(Property& rval);

    // -------

    template <typename T>
    void set(T val);

    void copyDataToDefault(); ///> copy current value to default value

    void setVersion(QString version);
    void setGroup(QString grp);
    void setType(UIPropertyType t);
    void setRawData(QVariantList data);
    void setRawDefaultData(QVariantList data);

    void setReadonly(bool v);
    bool readOnly();

    // -------

    void setDefaultType(UIPropertyType type);

    // -------

    QVariantList data();
    QVariantList defaultData();
    QString group();
    QString version();
    UIPropertyType type();

    // -------

    QSize asQSize();
    QSizeF asQSizeF();
    QPoint asQPoint();
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
