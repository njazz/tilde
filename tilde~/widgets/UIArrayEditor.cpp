// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIArrayEditor.h"

#include "ApplicationController.h"

namespace tilde {

UIArrayEditor::UIArrayEditor(QWidget* parent)
    : QWidget(parent)
{
    _serverArray = 0;
}

//void UIArrayEditor::getData()
//{
//    if (!_serverArray) return;

//    _arrayData->size = _serverArray->size();

//    // quick fix
//    if (_arrayData->size > 67108864)
//        _arrayData->size = 67108864;

//    if (_arrayData->data)
//    {
//        delete _arrayData->data;

//        try{
//            _arrayData->data = new float[_arrayData->size];

//        }catch(long)
//        {
//            ApplicationController::post("error: array: could not allocate memory for UI object array");
//        }
//    }

//    for (int i=0;i<_arrayData->size;i++)
//    {
//        _arrayData->data[i] = _serverArray->at(i);
//    }
//}

void UIArrayEditor::paintEvent(QPaintEvent*)
{

    if (_serverArray) {

        //getData();

        QPainter p(this);

        int y = height() / 2;
        int y0 = y;

        p.setPen(QPen(QColor(0, 0, 0), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

        p.drawLine(0, y0, width(), y0);

        for (int x = 0; x < (width() - 1); x++) {

            int index = floor(float(x) / width() * _serverArray->size());
            float y = ((_serverArray->at(index) * .5f) + .5) * height();
            p.drawLine(x, y0, x + 1, y);
            y0 = y;
        }

    } else {
        ApplicationController::post("bad server array");
    }

}

void UIArrayEditor::setServerArray(FloatArray* arr)
{
    _serverArray = arr;
}
}
