// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef UIARRAYEDITOR_H
#define UIARRAYEDITOR_H

#include <QObject>
#include <QPainter>
#include <QWidget>

//#include "PdLink.h"

#include "math.h"

#include "../API_prototype/serverAPIPrototype.h"

////
/// \brief Array Editor QWidget
///
class UIArrayEditor : public QWidget {
    Q_OBJECT
private:
    //t_garray* _pdArray;
    int _arrSize;
    float* _arrData;

    ServerArray* _serverArray;


public:
    void paintEvent(QPaintEvent*)
    {
        if (_serverArray) {

            //cmp_get_array_data(_pdArray, &_arrSize, &_arrData);

            _serverArray->getData(_arrData, _arrSize);

            if (_arrSize < 67108864) // temporary 64M samples limit
            {

                QPainter p(this);

                int y = height() / 2;
                int y0 = y;

                p.setPen(QPen(QColor(0, 0, 0), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

                p.drawLine(0, y0, width(), y0);

                for (int x = 0; x < (width() - 1); x++) {

                    int index = floor(float(x) / width() * _arrSize);
                    float y = ((_arrData[index] * .5f) + .5) * height();
                    p.drawLine(x, y0, x + 1, y);
                    y0 = y;
                }
            } else {
                //cmp_post("bad array size!");

                ServerInstance::post("bad array size");
            }
        } else {
            //cmp_post("bad pd array!");
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
