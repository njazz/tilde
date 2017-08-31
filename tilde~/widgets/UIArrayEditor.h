// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef UIARRAYEDITOR_H
#define UIARRAYEDITOR_H

#include <QObject>
#include <QPainter>
#include <QWidget>

#include "math.h"

// #include <pdServer.hpp>
#include "xpd-transition/xpd-headers.h"


//namespace xpd{
//class FloatArray;
//}



using namespace xpd;

namespace tilde {

//struct ServerArrayData {
//    float *data;
//    size_t size;
//} ServerArrayData;

////
/// \brief Array Editor QWidget
class UIArrayEditor : public QWidget {
    Q_OBJECT
private:

//    ServerArrayData* _arrayData;
    FloatArray* _serverArray;

//    void getData();
public:
    explicit UIArrayEditor(QWidget* parent = 0);

    void paintEvent(QPaintEvent*);

    void setServerArray(FloatArray *arr);

signals:

public slots:
};
}

#endif // UIARRAYEDITOR_H
