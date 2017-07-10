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
#include <QTableView>
#include <QVBoxLayout>

#include <QHeaderView>
#include <QTableWidget>
#include <QTableWidgetItem>

#include <QToolBox>

#include "QtColorPicker/include/color_selector.hpp"

namespace qtpd {

void PropertiesWindow::loadTableWidget(QString pName, QTableWidget* tv)
{
    QStringList sl = _propertyList->get(pName)->asQStringList();

    // TODO
    QFont myFont(PREF_QSTRING("Font"), 13);
    int rowSize = myFont.pointSize() + 5;

    for (int i = 0; i < sl.size(); i++) {
        QTableWidgetItem* wi = new QTableWidgetItem();
        wi->setText(sl.at(i));
        tv->insertRow(0);
        tv->setRowHeight(0, rowSize);
        tv->setItem(0, 0, wi);
    }

    QTableWidgetItem* wi = new QTableWidgetItem();
    wi->setText("<add new>");
    tv->insertRow(0);
    tv->setRowHeight(0, rowSize);
    tv->setItem(0, 0, wi);

    tv->setMinimumSize(140, (1 + sl.size()) * rowSize);
    tv->setFixedHeight((1 + sl.size()) * rowSize);
}

PropertiesWindow::PropertiesWindow(PropertyList* plist)
    : QWidget(0)
{

    _propertyList = plist;

    QStringList grpList = plist->groupNames();

    QVBoxLayout* main_layout = new QVBoxLayout();
    main_layout->setMargin(2);

    setWindowTitle("Properties");
    setWindowFlags(Qt::Tool | Qt::WindowCloseButtonHint);

    setMinimumWidth(240);

    int y0 = 0;
    int x1 = 10;
    int x2 = 100;
    int y = 0;

    QToolBox* tbox = new QToolBox(this);
    main_layout->addWidget(tbox);

    QFont myFont(PREF_QSTRING("Font"), 13);

    myFont.setBold(true);
    tbox->setFont(myFont);

    for (int j = 0; j < grpList.size(); j++) {

        QWidget* pWidget = new QWidget(tbox);

        QVBoxLayout* layout = new QVBoxLayout();
        layout->setMargin(2);
        layout->setAlignment(Qt::AlignTop);

        pWidget->setLayout(layout);

        //        QHBoxLayout* layoutLine = new QHBoxLayout();

        UIPropertyData* groupData = plist->group(grpList.at(j));
        QStringList list = plist->names(groupData);

        y = y0;

        //        QLabel* l1 = new QLabel(this);

        //pWidget->setFont(myFont);

        //        myFont.setBold(true);
        //        l1->setFont(myFont);
        //        l1->setText(grpList.at(j));
        //        l1->setFixedSize(100, 20);
        //        l1->move(x1 / 2, y);
        //        l1->show();

        //        y0 += 20;

        //        layoutLine->addWidget(l1);
        //        layoutLine->setMargin(0);

        //        layout->addLayout(layoutLine);

        tbox->addItem(pWidget, grpList.at(j));

        for (int i = 0; i < list.size(); i++) {
            y = i * 20 + y0;

            QHBoxLayout* layoutLine = new QHBoxLayout();

            QLabel* l1 = new QLabel(pWidget);
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

            // spaghetti time!

            if (t == ptBool) {
                QCheckBox* b = new QCheckBox(pWidget);
                b->setMinimumSize(140, 20);
                b->setFixedHeight(20);
                b->move(x2, y);
                b->show();

                b->setChecked(plist->get(list.at(i))->asInt());
                connect(b, &QCheckBox::clicked, this, &PropertiesWindow::editedBool);

                layoutLine->addWidget(b);
                _propertyNames[b] = list.at(i);

            } else if (t == ptInt) {
                QSpinBox* b = new QSpinBox(pWidget);
                b->setMinimumSize(140, 20);
                b->setFixedHeight(20);
                b->move(x2, y);
                b->show();

                //TODO
                b->setMaximum(32768);
                b->setMinimum(-32767);

                b->setFont(myFont);

                b->setValue(plist->get(list.at(i))->asInt());
                connect(b, SIGNAL(valueChanged(int)), this, SLOT(editedInt(int)));

                layoutLine->addWidget(b);
                _propertyNames[b] = list.at(i);

            } else if (t == ptFloat) {
                QDoubleSpinBox* b = new QDoubleSpinBox(pWidget);
                b->setMinimumSize(140, 20);
                b->setFixedHeight(20);
                b->move(x2, y);
                b->show();

                b->setFont(myFont);

                b->setValue(plist->get(list.at(i))->asFloat());
                connect(b, SIGNAL(valueChanged(double)), this, SLOT(editedFloat(double)));

                layoutLine->addWidget(b);
                _propertyNames[b] = list.at(i);

            } else if (t == ptColor) {
                Color_Selector* c = new Color_Selector(pWidget);

                c->setMinimumSize(140, 20);
                c->setFixedHeight(20);
                c->move(x2, y);
                c->show();

                c->setColor(plist->get(list.at(i))->asQColor());
                connect(c, &Color_Selector::colorChanged, this, &PropertiesWindow::editedColor);

                layoutLine->addWidget(c);
                _propertyNames[c] = list.at(i);

            } else if (t == ptStringList) {

                QTableWidget* tv = new QTableWidget(pWidget);

                tv->insertColumn(0);

                tv->horizontalHeader()->setHidden(true);
                tv->verticalHeader()->setHidden(true);
                tv->horizontalHeader()->setStretchLastSection(true);

                tv->setFont(myFont);
                //tv->setText(plist->get(list.at(i))->asQStringList());

                loadTableWidget(list.at(i), tv);

                tv->move(x2, y);
                tv->show();

                //                connect(le, &QLineEdit::returnPressed, this, &PropertiesWindow::editedText);

                connect(tv, SIGNAL(cellChanged(int, int)), this, SLOT(editedStringList(int, int)));

                layoutLine->addWidget(tv);
                _propertyNames[tv] = list.at(i);

            } else {
                QLineEdit* le = new QLineEdit(pWidget);
                le->setFont(myFont);
                le->setText(plist->get(list.at(i))->asQString());
                le->setMinimumSize(140, 20);
                le->setFixedHeight(20);
                le->move(x2, y);
                le->show();

                connect(le, &QLineEdit::returnPressed, this, &PropertiesWindow::editedText);

                layoutLine->addWidget(le);
                _propertyNames[le] = list.at(i);
            }

            layoutLine->setMargin(0);
            layout->addLayout(layoutLine);
        }

        y0 += list.size() * 20 + 10;
    }

    setLayout(main_layout);

    setBaseSize(200, y0 + 30);
    setMinimumHeight(y0 + 30);
}

//void PropertiesWindow::editedProperty()
//{
//    QLineEdit* sender = (QLineEdit*)QObject::sender();
//    QString pname = _propertyNames[sender];
//    _propertyList->set(pname.toStdString(), sender->text().split(" "));
//}

void PropertiesWindow::editedText()
{
    QLineEdit* sender = (QLineEdit*)QObject::sender();
    QString pname = _propertyNames[sender];

    // TODO fix
    _propertyList->set(pname.toStdString(), sender->text().toStdString());
};

void PropertiesWindow::editedColor()
{
    Color_Selector* sender = (Color_Selector*)QObject::sender();
    QString pname = _propertyNames[sender];
    _propertyList->set(pname.toStdString(), sender->color());
};

void PropertiesWindow::editedBool()
{
    QCheckBox* sender = (QCheckBox*)QObject::sender();
    QString pname = _propertyNames[sender];
    _propertyList->set(pname.toStdString(), sender->isChecked());
};

void PropertiesWindow::editedInt(int)
{

    QSpinBox* sender = (QSpinBox*)QObject::sender();
    QString pname = _propertyNames[sender];
    _propertyList->set(pname.toStdString(), sender->value());
};

void PropertiesWindow::editedFloat(double)
{
    QDoubleSpinBox* sender = (QDoubleSpinBox*)QObject::sender();
    QString pname = _propertyNames[sender];
    _propertyList->set(pname.toStdString(), sender->value());
};

void PropertiesWindow::editedStringList(int index, int)
{
    QTableWidget* sender = (QTableWidget*)QObject::sender();
    QString pname = _propertyNames[sender];

    QStringList sl = _propertyList->get(pname)->asQStringList();

    if (index == 0) {
        QString s = sender->model()->index(0, 0).data().toString();
        sl.insert(0, s);

    } else {
        for (int i = sender->rowCount(); i > 1; i--) {
            int idx = sender->rowCount() - i;

            QString s = sender->model()->index(i - 1, 0).data().toString();
            sl[idx] = s;
        }
    }

    sender->clear();

    _propertyList->set(pname.toStdString(), sl);

    // TODO
    disconnect(sender, SIGNAL(cellChanged(int, int)), this, SLOT(editedStringList(int, int)));

    loadTableWidget(pname, sender);

    connect(sender, SIGNAL(cellChanged(int, int)), this, SLOT(editedStringList(int, int)));
};
}
