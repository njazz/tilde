// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef UIARRAYEDITOR_H
#define UIARRAYEDITOR_H

#include <QObject>
#include <QPainter>
#include <QWidget>

#include "PdLink.h"

#include "math.h"

////
/// \brief Array Editor QWidget
///
class UIArrayEditor : public QWidget {
    Q_OBJECT
private:
    t_garray* _pdArray;
    int _arrSize;
    t_word* _arrData;

public:
    void paintEvent(QPaintEvent*)
    {
        if (_pdArray) {

            cmp_get_array_data(_pdArray, &_arrSize, &_arrData);

            if (_arrSize < 67108864) // temporary 64M samples limit
            {

                QPainter p(this);

                int y = height() / 2;
                int y0 = y;

                p.setPen(QPen(QColor(0, 0, 0), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

                p.drawLine(0, y0, width(), y0);

                for (int x = 0; x < (width() - 1); x++) {

                    int index = floor(float(x) / width() * _arrSize);
                    float y = ((_arrData[index].w_float * .5) + .5) * height();
                    p.drawLine(x, y0, x + 1, y);
                    y0 = y;
                }
            } else {
                cmp_post("bad array size!");
            }
        } else {
            cmp_post("bad pd array!");
        }
    }

    void setPdArray(t_garray* arr)
    {
        _pdArray = arr;
    }

    explicit UIArrayEditor(QWidget* parent = 0);

signals:

public slots:
};

#endif // UIARRAYEDITOR_H
