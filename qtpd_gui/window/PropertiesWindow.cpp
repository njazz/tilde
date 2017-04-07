#include "PropertiesWindow.h"

//move here later

//PropertiesWindow::PropertiesWindow()
//{

//}

namespace qtpd{
PropertiesWindow::PropertiesWindow(PropertyList* plist)
{
    _propertyList = plist;

    QStringList grpList = plist->groupNames();

    QVBoxLayout *layout = new QVBoxLayout();
    layout->setMargin(2);

    setWindowTitle("Properties");

    setMinimumWidth(240);

    //setFloating(true);


    int y0 = 0;
    int x1 = 10;
    int x2 = 100;
    int y = 0;

    for (int j = 0; j < grpList.size(); j++) {

        QHBoxLayout *layoutLine = new QHBoxLayout();

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

            QHBoxLayout *layoutLine = new QHBoxLayout();

            QLabel* l1 = new QLabel(this);
            QFont myFont(PREF_QSTRING("Font"), 11);
            l1->setFont(myFont);
            l1->setText(list.at(i));
            l1->setFixedSize(100, 20);
            l1->setFixedHeight(20);
            l1->move(x1, y);
            l1->show();

            QLineEdit* le = new QLineEdit(this);
            le->setFont(myFont);
            le->setText(plist->get(list.at(i).toStdString())->asQString());
            le->setMinimumSize(140, 20);
            le->setFixedHeight(20);
            le->move(x2, y);
            le->show();

            connect(le, &QLineEdit::returnPressed, this, &PropertiesWindow::editedProperty);

            _propertyNames[le] = list.at(i);

            layoutLine->addWidget(l1);
            layoutLine->addWidget(le);
            layoutLine->setMargin(0);
            layout->addLayout(layoutLine);
        }

        y0 += list.size() * 20 + 10;
    }

    setLayout(layout);

    setBaseSize(200, y0 + 30);
    setMinimumHeight(y0 + 30);


}
}
