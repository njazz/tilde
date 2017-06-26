// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef UIARRAYEDITOR_H
#define UIARRAYEDITOR_H

#include <QObject>
#include <QPainter>
#include <QWidget>

#include "math.h"

#include <pdServer.hpp>

////
/// \brief Array Editor QWidget
///
class UIArrayEditor : public QWidget {
    Q_OBJECT
private:
    //t_garray* _pdArray;
    //int _arrSize;
    //float* _arrData;

    ServerArrayData* _arrayData;

    ServerArray* _serverArray;

public:
    void paintEvent(QPaintEvent*)
    {
        if (_serverArray) {

            //cmp_get_array_data(_pdArray, &_arrSize, &_arrData);
            //_arrSize = _serverArray->size();



            //_arrData = new float[_arrSize];

            _arrayData = _serverArray->getData();//_arrData, _arrSize);

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

            if (!_arrayData)
            {
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

    void setServerArray(ServerArray* arr)
    {
        _serverArray = arr;
    }

    explicit UIArrayEditor(QWidget* parent = 0);

signals:

public slots:
};

#endif // UIARRAYEDITOR_H
