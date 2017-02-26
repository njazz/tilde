#ifndef CM_PORT_H
#define CM_PORT_H

#include <QWidget>

#include <QtGui>

class cm_port : public QWidget
{
    Q_OBJECT

private:
    bool hover;
public:
    enum {cm_pt_inlet, cm_pt_outlet} port_type;

    explicit cm_port(QWidget *parent = 0);

    void paintEvent(QPaintEvent*)   //QPaintEvent *pe
    {    QPainter p(this);

         p.setRenderHint(QPainter::SmoothPixmapTransform,true);
          p.setPen(QPen(QColor(128, 128, 128), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

         p.drawRect(0,0,this->width(),this->height());

          if (this->hover)
          {
              p.setPen(QPen(QColor(255, 128, 0), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
              p.drawRect(0,0,this->width(),this->height());
          }

    }

    void enterEvent(QEvent *)
    {
        this->hover = true;
        this->repaint();

        emit mouseEntered();

    }
    void leaveEvent(QEvent *)
    {
        this->hover = false;
        this->repaint();

        emit mouseLeaved();

    }

signals:

    void mousePressed();
    void mouseReleased();
    void mouseEntered();
    void mouseLeaved();

public slots:
};

#endif // CM_PORT_H
