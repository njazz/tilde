#include "cm_property.h"

//cm_property::cm_property()
//{

//}

namespace cm{

template<> void UIProperty::set(AtomList list)
{
    data_ = list;
    type_ = ptList;
}

template<> void UIProperty::set(QPoint point)
{
    AtomList list;

    list.append(point.x());
    list.append(point.y());

    data_ = list;
    type_ = ptVector;
}
template<> void UIProperty::set(QRect rect)
{
    AtomList list;

    list.append(rect.top());
    list.append(rect.left());
    list.append(rect.width());
    list.append(rect.height());

    data_ = list;
    type_ = ptVector;

}
template<> void UIProperty::set(QSize size)
{
    AtomList list;

    list.append(size.width());
    list.append(size.height());

    data_ = list;
    type_ = ptVector;

}

template<> void UIProperty::set(QColor color)
{
    AtomList list;

    list.append(color.red());
    list.append(color.green());
    list.append(color.blue());
    list.append(color.alpha());

    data_ = list;
    type_ = ptColor;
}

template<> void UIProperty::set(float val)
{
    data_ = AtomList(val);
    type_ = ptFloat;
}

template<> void UIProperty::set(double val)
{
    data_ = AtomList(val);
    type_ = ptFloat;
}

template<> void UIProperty::set(t_symbol* s)
{
    data_ = AtomList(s);
    type_ = ptSymbol;
}

template<> void UIProperty::set(std::string string)
{
    data_ = AtomList(gensym(string.c_str()));
    type_ = ptList;
}

template<> void UIProperty::set(QString string)
{
    data_ = AtomList(gensym(string.toStdString().c_str()));
    type_ = ptString;
}

template<> void UIProperty::set(QStringList list)
{

}

}
