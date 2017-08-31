// (c) 2017 Alex Nadzharov
// License: GPL3

#include "ObjectMaker.h"
#include "Preferences.h"

// #include "pdServer.hpp"

#include "xpd-transition/xpd-headers.h"

#include <QCompleter>
#include <QStringListModel>

#include "ApplicationController.h"
#include "PatchWindowController.h"

using namespace std;

namespace tilde {

ObjectMaker::ObjectMaker(QLineEdit* parent)
    : QLineEdit(parent)
{
    setFont(QFont(PREF_QSTRING("Font"), 11, 0, false));
    setFixedSize(60, 20);

    connect(this, &ObjectMaker::textEdited, this, &ObjectMaker::editorChanged);
    connect(this, &ObjectMaker::returnPressed, this, &ObjectMaker::done);

    if (!completer())
        setCompleter(new QCompleter);

    _modified = false;
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

    _modified = true;
}

void ObjectMaker::done()
{
    if (_modified)
        emit objectMakerDoneSignal();
    else
        cancel();
}

PatchWindowController* ObjectMaker::parentController() { return _parentController; }
void ObjectMaker::setParentController(PatchWindowController* controller)
{
    _parentController = controller;
    QStringListModel* m = new QStringListModel;

    if (parentController() && false)
        if (parentController()->appController())
            if (parentController()->appController()->mainServerInstance()) {

                shared_ptr<PdLocalProcess> ptr = static_pointer_cast<PdLocalProcess>(parentController()->appController()->mainServerInstance());

                ClassList cList = ptr->loadedClasses();

                QStringList sL;

                for (vector<ClassInfo>::iterator it = cList.begin(); it != cList.end(); ++it) {
                    ClassInfo ci = *it;
                    sL.push_back(ci.name().c_str());
                }

                m->setStringList(sL);


                completer()->setModel(m);
            }
}

void ObjectMaker::focusOutEvent(QFocusEvent*)
{
    //emit objectMakerDoneSignal();
}

void ObjectMaker::setModified(bool v)
{
    _modified = v;
}

void ObjectMaker::cancel()
{
    hide();
}
}
