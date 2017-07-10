// (c) 2017 Alex Nadzharov
// License: GPL3

#include "ObjectMaker.h"
#include "Preferences.h"

#include "pdServer.hpp"

#include <QCompleter>
#include <QStringListModel>

using namespace std;

namespace qtpd {

ObjectMaker::ObjectMaker(QLineEdit* parent)
    : QLineEdit(parent)
{
    setFont(QFont(PREF_QSTRING("Font"), 11, 0, false));
    setFixedSize(60, 20);

    connect(this, &ObjectMaker::textEdited, this, &ObjectMaker::editorChanged);
    connect(this, &ObjectMaker::returnPressed, this, &ObjectMaker::done);

    QStringListModel *m = new QStringListModel;

    vector<string> vlist = ServerInstance::listLoadedClasses();
    QStringList sL;

    for (vector<string>::iterator it = vlist.begin(); it != vlist.end(); ++it)
    {
        string s = *it;
        sL.push_back(s.c_str());
    }

    m->setStringList(sL);

    if (!completer()) setCompleter(new QCompleter);
    completer()->setModel(m);
}

void ObjectMaker::editorChanged()
{
    QFont myFont(PREF_QSTRING("Font"), 11);
    QFontMetrics fm(myFont);
    int new_w = fm.width(QString(text())) + 10;
    new_w = (new_w < 65) ? 65 : new_w;
    setFixedWidth(new_w);
    setFixedHeight(20);

    completer()->popup();
}

void ObjectMaker::done()
{
    //test
//    if (parent())
//        ((QWidget*)parent())->setFocus();

    emit objectMakerDoneSignal();

}

}
