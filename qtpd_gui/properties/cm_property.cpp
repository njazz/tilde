// (c) 2017 Alex Nadzharov
// License: GPL3

#include "cm_property.h"

//cm_property::cm_property()
//{

//}

#include <QDebug>

namespace qtpd {

template <>
void Property::set(AtomList list)
{
    data_ = list;
    type_ = ptList;
}

template <>
void Property::set(QPoint point)
{
    AtomList list;

    list.append(point.x());
    list.append(point.y());

    data_ = list;
    type_ = ptVector;
}
template <>
void Property::set(QRect rect)
{
    AtomList list;

    list.append(rect.top());
    list.append(rect.left());
    list.append(rect.width());
    list.append(rect.height());

    data_ = list;
    type_ = ptVector;
}
template <>
void Property::set(QSize size)
{
    AtomList list;

    list.append(size.width());
    list.append(size.height());

    data_ = list;
    type_ = ptVector;
}

template <>
void Property::set(QColor color)
{
    AtomList list;

    list.append(color.red());
    list.append(color.green());
    list.append(color.blue());
    list.append(color.alpha());

    data_ = list;
    type_ = ptColor;
}

template <>
void Property::set(float val)
{
    data_ = AtomList(val);
    type_ = ptFloat;
}

template <>
void Property::set(double val)
{
    data_ = AtomList(val);
    type_ = ptFloat;
}

template <>
void Property::set(t_symbol* s)
{
    data_ = AtomList(s);
    type_ = ptSymbol;
}

template <>
void Property::set(std::string string)
{
    data_ = AtomList(gensym(string.c_str()));
    type_ = ptList;
}

template <>
void Property::set(QString string)
{
    data_ = AtomList(gensym(string.toStdString().c_str()));
    type_ = ptString;
}

template <>
void Property::set(int val)
{
    data_ = AtomList(val);
    type_ = ptFloat;
}

template <>
void Property::set(QStringList strlist)
{
    QStringList::iterator it;

    AtomList* list = new AtomList();

    //qDebug() << "set list" << strlist;

    //qDebug() << "data size 0" << list->size();

    for (it = strlist.begin(); it != strlist.end(); ++it) {
        QString str = *it;
        //qDebug() << "str" << str;
        if (str != "")
            list->append(Atom(gensym(str.toStdString().c_str())));
    }

    //qDebug() << "data size" << list->size();

    //check, different type for text files
    type_ = ptList;
    data_ = (*list);


}
}
