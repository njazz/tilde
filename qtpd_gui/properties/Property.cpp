// (c) 2017 Alex Nadzharov
// License: GPL3

#include "Property.h"

//cm_property::cm_property()
//{

//}

#include <QDebug>

namespace qtpd {

template <>
void Property::set(AtomList list)
{
    _data = list;
    _type = ptList;
}

template <>
void Property::set(QPoint point)
{
    AtomList list;

    list.append(point.x());
    list.append(point.y());

    _data = list;
    _type = ptVector;
}
template <>
void Property::set(QRect rect)
{
    AtomList list;

    list.append(rect.top());
    list.append(rect.left());
    list.append(rect.width());
    list.append(rect.height());

    _data = list;
    _type = ptVector;
}
template <>
void Property::set(QSize size)
{
    AtomList list;

    list.append(size.width());
    list.append(size.height());

    _data = list;
    _type = ptVector;
}

template <>
void Property::set(QColor color)
{
    AtomList list;

    list.append(color.red());
    list.append(color.green());
    list.append(color.blue());
    list.append(color.alpha());

    _data = list;
    _type = ptColor;
}

template <>
void Property::set(float val)
{
    _data = AtomList(val);
    _type = ptFloat;
}

template <>
void Property::set(double val)
{
    _data = AtomList(val);
    _type = ptFloat;
}

template <>
void Property::set(t_symbol* s)
{
    _data = AtomList(s);
    _type = ptSymbol;
}

template <>
void Property::set(std::string string)
{
    _data = AtomList(gensym(string.c_str()));
    _type = ptList;
}

template <>
void Property::set(int val)
{
    _data = AtomList(val);
    _type = ptFloat;
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
        if (str != "") {
            //check if it is not float
            if (str.toFloat() != 0)
                list->append(Atom(str.toFloat()));
            else

                list->append(Atom(gensym(str.toStdString().c_str())));
        }
    }

    //qDebug() << "data size" << list->size();

    //check, different type for text files
    _type = ptList;
    _data = (*list);
}

template <>
void Property::set(QString string)
{
    //    data_ = AtomList(gensym(string.toStdString().c_str()));
    //    type_ = ptString;
    Property::set(string.split(" "));
}
}
