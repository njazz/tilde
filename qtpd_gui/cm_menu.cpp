#include "cm_menu.h"

#include "cm_basewindow.h"
#include "cm_patchwindow.h"

#include "cm_pdlink.h"

cm_menu::cm_menu(QObject *parent) : QObject(parent)
{

}

void cm_menu::newFile()
{
    //    infoLabel->setText(tr("Invoked <b>File|New</b>"));
    //qDebug("new file");

    cm_patchwindow *newWindow = new cm_patchwindow;

    cmp_newpatch();

    newWindow->show();
}

void cm_menu::open()
{
    //    infoLabel->setText(tr("Invoked <b>File|Open</b>"));
}

void cm_menu::close(QObject *)  //sender
{

}

void cm_menu::save()
{
    //    infoLabel->setText(tr("Invoked <b>File|Save</b>"));
}

void cm_menu::saveAs()
{
    //    infoLabel->setText(tr("Invoked <b>File|Save</b>"));
}

void cm_menu::message()
{
    //    infoLabel->setText(tr("Invoked <b>File|Save</b>"));
}




void cm_menu::undo()
{
    //    infoLabel->setText(tr("Invoked <b>Edit|Undo</b>"));
}

void cm_menu::redo()
{
    //    infoLabel->setText(tr("Invoked <b>Edit|Redo</b>"));
}

void cm_menu::cut()
{
    //    infoLabel->setText(tr("Invoked <b>Edit|Cut</b>"));
}

void cm_menu::copy()
{
    //    infoLabel->setText(tr("Invoked <b>Edit|Copy</b>"));
}

void cm_menu::paste()
{
    //   infoLabel->setText(tr("Invoked <b>Edit|Paste</b>"));
}



void cm_menu::putObject()
{
    //   infoLabel->setText(tr("Invoked <b>Edit|Paste</b>"));
}

void cm_menu::putMessage()
{
    //   infoLabel->setText(tr("Invoked <b>Edit|Paste</b>"));
}

void cm_menu::putNumber()
{
    //   infoLabel->setText(tr("Invoked <b>Edit|Paste</b>"));
}

void cm_menu::putSymbol()
{
    //   infoLabel->setText(tr("Invoked <b>Edit|Paste</b>"));
}

void cm_menu::putComment()
{
    //   infoLabel->setText(tr("Invoked <b>Edit|Paste</b>"));
}


void cm_menu::dspOn()
{
    //   infoLabel->setText(tr("Invoked <b>Edit|Paste</b>"));
}

void cm_menu::dspOff()
{
    //   infoLabel->setText(tr("Invoked <b>Edit|Paste</b>"));
}

void cm_menu::pdWindow()
{
    //   infoLabel->setText(tr("Invoked <b>Edit|Paste</b>"));
}
