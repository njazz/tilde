#ifndef UIARRAYEDITOR_H
#define UIARRAYEDITOR_H

#include <QObject>
#include <QWidget>

#include "PdLink.h"

class UIArrayEditor : public QWidget {
    Q_OBJECT
private:
    t_garray* _pdArray;

public:
    void setPdArray(t_garray* arr)
    {
        _pdArray = arr;
    }

    explicit UIArrayEditor(QWidget* parent = 0);

signals:

public slots:
};

#endif // UIARRAYEDITOR_H
