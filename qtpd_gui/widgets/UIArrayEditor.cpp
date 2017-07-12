// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIArrayEditor.h"

namespace qtpd {

UIArrayEditor::UIArrayEditor(QWidget* parent)
    : QWidget(parent)
{
    _serverArray = 0;
    //_arrSize = 0;
}

void UIArrayEditor::paintEvent(QPaintEvent*)
{
    if (_serverArray) {

        //cmp_get_array_data(_pdArray, &_arrSize, &_arrData);
        //_arrSize = _serverArray->size();

        //_arrData = new float[_arrSize];

        _arrayData = _serverArray->getData(); //_arrData, _arrSize);

        // temporary
        if (_arrayData->size > 67108864)
            _arrayData->size = 67108864;

        /*
        try {
            _serverArray->getData(_arrData, _arrSize);
        } catch (long) {
            ServerInstance::post(">> bad array data");
        }
        */

        //if (_arrSize < 67108864) // temporary 64M samples limit
        //            {

        if (!_arrayData) {
            ServerInstance::post("Array data error!");
            return;
        }

        QPainter p(this);

        int y = height() / 2;
        int y0 = y;

        p.setPen(QPen(QColor(0, 0, 0), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

        p.drawLine(0, y0, width(), y0);

        for (int x = 0; x < (width() - 1); x++) {

            int index = floor(float(x) / width() * _arrayData->size);
            float y = ((_arrayData->sample[index] * .5f) + .5) * height();
            p.drawLine(x, y0, x + 1, y);
            y0 = y;
        }
        //            }
        //            else {
        //                ServerInstance::post("bad array size");
        //            }
    } else {
        ServerInstance::post("bad server array");
    }
}

void UIArrayEditor::setServerArray(ServerArray* arr)
{
    _serverArray = arr;
}
}
