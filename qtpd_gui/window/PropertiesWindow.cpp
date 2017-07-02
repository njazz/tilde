// (c) 2017 Alex Nadzharov
// License: GPL3

#include "PropertiesWindow.h"

//move here later

//PropertiesWindow::PropertiesWindow()
//{

//}

#include <QCheckBox>
#include <QDoubleSpinBox>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QSpinBox>
#include <QVBoxLayout>

#include "QtColorPicker/include/color_selector.hpp"

namespace qtpd {
PropertiesWindow::PropertiesWindow(PropertyList* plist)
{
    _propertyList = plist;

    QStringList grpList = plist->groupNames();

    QVBoxLayout* layout = new QVBoxLayout();
    layout->setMargin(2);

    setWindowTitle("Properties");

    setMinimumWidth(240);

    int y0 = 0;
    int x1 = 10;
    int x2 = 100;
    int y = 0;

    for (int j = 0; j < grpList.size(); j++) {

        QHBoxLayout* layoutLine = new QHBoxLayout();

        UIPropertyData* groupData = plist->group(grpList.at(j));
        QStringList list = plist->names(groupData);

        y = y0;

        QLabel* l1 = new QLabel(this);
        QFont myFont(PREF_QSTRING("Font"), 13);
        myFont.setBold(true);
        l1->setFont(myFont);
        l1->setText(grpList.at(j));
        l1->setFixedSize(100, 20);
        l1->move(x1 / 2, y);
        l1->show();

        y0 += 20;

        layoutLine->addWidget(l1);
        layoutLine->setMargin(0);
        layout->addLayout(layoutLine);

        for (int i = 0; i < list.size(); i++) {
            y = i * 20 + y0;

            QHBoxLayout* layoutLine = new QHBoxLayout();

            QLabel* l1 = new QLabel(this);
            QFont myFont(PREF_QSTRING("Font"), 11);
            l1->setFont(myFont);
            l1->setText(list.at(i));
            l1->setFixedSize(100, 20);
            l1->setFixedHeight(20);
            l1->move(x1, y);
            l1->show();

            // TODO

            layoutLine->addWidget(l1);

            UIPropertyType t = plist->get(list.at(i))->type();

            if (t == ptBool) {
                QCheckBox* b = new QCheckBox(this);
                b->setMinimumSize(140, 20);
                b->setFixedHeight(20);
                b->move(x2, y);
                b->show();

                layoutLine->addWidget(b);
            } else if (t == ptInt) {
                QSpinBox* b = new QSpinBox(this);
                b->setMinimumSize(140, 20);
                b->setFixedHeight(20);
                b->move(x2, y);
                b->show();

                layoutLine->addWidget(b);
            } else if (t == ptFloat) {
                QDoubleSpinBox* b = new QDoubleSpinBox(this);
                b->setMinimumSize(140, 20);
                b->setFixedHeight(20);
                b->move(x2, y);
                b->show();

                layoutLine->addWidget(b);
            } else if (t == ptColor) {
                Color_Selector* c = new Color_Selector(this);

                c->setMinimumSize(140, 20);
                c->setFixedHeight(20);
                c->move(x2, y);
                c->show();

                layoutLine->addWidget(c);
            } else {
                QLineEdit* le = new QLineEdit(this);
                le->setFont(myFont);
                le->setText(plist->get(list.at(i))->asQString());
                le->setMinimumSize(140, 20);
                le->setFixedHeight(20);
                le->move(x2, y);
                le->show();

                connect(le, &QLineEdit::returnPressed, this, &PropertiesWindow::editedProperty);

                layoutLine->addWidget(le);
                _propertyNames[le] = list.at(i);
            }

            layoutLine->setMargin(0);
            layout->addLayout(layoutLine);
        }

        y0 += list.size() * 20 + 10;
    }

    setLayout(layout);

    setBaseSize(200, y0 + 30);
    setMinimumHeight(y0 + 30);
}

void PropertiesWindow::editedProperty()
{
    qDebug() << "edited";

    QLineEdit* sender = (QLineEdit*)QObject::sender();
    QString pname = _propertyNames[sender];
    _propertyList->set(pname.toStdString(), sender->text().split(" "));

    qDebug() << pname << sender->text();
}
}
