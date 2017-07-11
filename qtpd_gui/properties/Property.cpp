// (c) 2017 Alex Nadzharov
// License: GPL3

#include "Property.h"

#include <QDebug>

using namespace std;

namespace qtpd {

template <>
void Property::set(bool value)
{

    _data = (value);
    _type = ptBool;

    emit changed();
}

template <>
void Property::set(QPoint point)
{
    _data = QString::number(point.x()) + " " + QString::number(point.y());
    _type = ptVec2;

    emit changed();
}

template <>
void Property::set(QPointF point)
{

    _data = point;
    _type = ptVec2;

    emit changed();
}

template <>
void Property::set(QRect rect)
{

    _data = (rect);
    _type = ptVector;

    emit changed();
}
template <>
void Property::set(QSize size)
{

    _data = QString::number(size.width()) + " " + QString::number(size.height());
    _type = ptVec2;

    emit changed();
}

template <>
void Property::set(QSizeF size)
{
    _data = (size);
    _type = ptVec2;

    emit changed();
}

template <>
void Property::set(QColor color)
{
    QStringList sL;

    sL.append(QString::number(color.red()));
    sL.append(QString::number(color.green()));
    sL.append(QString::number(color.blue()));
    sL.append(QString::number(color.alpha()));

    _data = (sL);
    _type = ptColor;

    //qDebug() << "set" << sL;

    emit changed();
}

template <>
void Property::set(float val)
{
    _data = (val);
    _type = ptFloat;

    emit changed();
}

template <>
void Property::set(double val)
{

    _data = (val);
    _type = ptFloat;

    emit changed();
}

template <>
void Property::set(string string)
{
    _data = (QString(string.c_str()));

    _type = ptString;

    emit changed();
}

template <>
void Property::set(int val)
{

    _data = (val);
    _type = ptInt;

    emit changed();
}

template <>
void Property::set(QStringList strlist)
{

    _data = strlist;

    _type = ptStringList;

    emit changed();
}

template <>
void Property::set(QString string)
{
    _data = (string);
    _type = ptString;

    emit changed();
}

template <>
void Property::set(char const* string)
{
    _data = QString(string);
    _type = ptString;

    emit changed();
}

// -------------------------

Property::Property()
{
    _type = ptList; //?
    _applyToPd = false;
};

void Property::setDefault()
{
    _defaultData = _data;
}

void Property::setVersion(QString version)
{
    _version = version;
}

QString Property::version() { return _version; }

//////////

UIPropertyType Property::type() { return _type; };

QVariant Property::data()
{
    return _data;
}

QVariant Property::defaultData()
{
    return _defaultData;
}

// -------

QSize Property::asQSize()
{
    if (_data.toString().split(" ").size() < 2)
        return QSize(20, 20);

    QStringList sL = _data.toString().split(" ");

    return QSize(QString(sL.at(0)).toInt(), QString(sL.at(1)).toInt());
}

QPoint Property::asQPoint()
{
    if (_data.toString().split(" ").size() < 2)
        return QPoint(0, 0);

    QStringList sL = _data.toString().split(" ");

    return QPoint(QString(sL.at(0)).toInt(), QString(sL.at(1)).toInt());
}

QSizeF Property::asQSizeF()
{
    return _data.toSizeF();
}

QPointF Property::asQPointF()
{
    return _data.toPointF();
}

float Property::asFloat()
{
    return _data.toFloat();
}

int Property::asInt()
{
    return _data.toInt();
}

bool Property::asBool()
{
    return _data.toInt() > 0;
}

float Property::asFontSize()
{
    return (_data.toFloat() < 8) ? 8 : _data.toFloat();
}

QColor Property::asQColor()
{
    QColor defaultColor = QColor(128, 128, 128, 255); //default gray

    QStringList sL = _data.toStringList();

    if (sL.size() < 4)
        return defaultColor;

    //qDebug() << "get" << sL;

    QColor ret = QColor(QString(sL.at(0)).toInt(), QString(sL.at(1)).toInt(), QString(sL.at(2)).toInt(), QString(sL.at(3)).toInt());

    //qDebug() << "color" << ret;

    return ret;
}

QStringList Property::asQStringList()
{
    return _data.toStringList();
}

string Property::asStdString()
{
    return _data.toString().toStdString();
}

QString Property::asPdSaveString()
{
    // if (!_type == ptString)
    QString ret = _data.toStringList().join(" ");
    // else
    //     QString ret = _data.toStringList().join("\ ");

    ret = escapeString(ret);
    return ret;
}

QString Property::asQString()
{

    return _data.toStringList().join(" ");
}

// ----------

QString Property::escapeString(QString input)
{
    // todo regexp

    QString ret;

    ret = input.split(" ").join("\\ ");
    ret = ret.split("\n").join("\\n");
    ret = ret.split("\r").join("");
    ret = ret.split(",").join("\\,");
    ret = ret.split(".").join("\\.");
    ret = ret.split("@").join("\\@");
    ret = ret.split(";").join("\\;");
    return ret;
}

QString Property::unescapeString(QString input)
{
    // todo regexp

    QString ret;

    ret = input.split("\\ ").join(" ");
    ret = ret.split("\\n").join("\n");
    ret = ret.split("\\,").join(",");
    ret = ret.split("\\.").join(".");
    ret = ret.split("\\@").join("@");
    ret = ret.split("\\;").join(";");
    return ret;
}
}
