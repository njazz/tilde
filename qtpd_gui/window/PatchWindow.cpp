#include "PatchWindow.h"

#include "FileParser.h"

namespace qtpd {
PatchWindow::PatchWindow()
{
    createActions();
    createMenus();

    //scroll = new QScrollArea(this);
    //scroll->setFrameShape(QFrame::NoFrame);

    canvas = new Canvas((QGraphicsView*)this);

    //scroll->setWidget(canvas);

    QGridLayout* layout1 = new QGridLayout();
    layout1->setMargin(10);
    layout1->addWidget(canvas);
    //scroll->setLayout(layout1);

    canvas->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    canvas->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

    setCentralWidget(canvas);
    //canvas->setParent(centralWidget());
    //scroll->setParent(this);

    //    QGridLayout* layout2 = new QGridLayout();
    //    layout2->addWidget(scroll);
    //    layout2->setMargin(0);
    setLayout(layout1);

    //TODO weird
    //objectMaker = new ObjectMaker((QLineEdit*)canvas);

    //objectMaker->setParent(canvas);

    connect(canvas->objectMaker(), &ObjectMaker::objectMakerDoneSignal, this, &PatchWindow::objectMakerDone);

    canvas->objectMaker()->close();

    editModeAct->setChecked(true);

    //connect subpatch creation routine
    connect(canvas, &Canvas::createSubpatchWindow, this, &PatchWindow::s_createSubpatchWindow);

    //
    connect(cutAct, &QAction::triggered, this, &PatchWindow::cut);
    connect(copyAct, &QAction::triggered, this, &PatchWindow::copy);
    connect(duplicateAct, &QAction::triggered, this, &PatchWindow::duplicate);
    connect(pasteAct, &QAction::triggered, this, &PatchWindow::paste);
}

PatchWindow* PatchWindow::newWindow()
{
    PatchWindow* this_;
    this_ = new PatchWindow();

    // move to canvas

    //todo
    ((QMainWindow*)this_)->setWindowTitle("Untitled-1");

    this_->canvas->setPdObject(cmp_newpatch());

    if (!this_->canvas->pdObject()) {
        qDebug("Failed to create canvas!");
    }

    return this_;
}

////
/// \brief constructor for the subpatches' windows
/// \param subpatch
///
PatchWindow* PatchWindow::newSubpatch(t_canvas* subpatch)
{
    PatchWindow* this_;
    this_ = new PatchWindow;

    ((QMainWindow*)this_)->setWindowTitle("<subpatch>");

    this_->canvas->setPdObject(subpatch);

    if (!this_->canvas->pdObject()) {
        qDebug("Failed to create canvas!");
    }

    return this_;
}

////
/// \brief re-save patch, uses its current name
///
void PatchWindow::save()
{

    QString fname;

    if (canvas->fileName != "")
        fname = canvas->fileName;
    else
        fname = QFileDialog::getSaveFileName(this, QString("Save patch as..."), QString("~/"), QString("*.pd"), 0, 0);

    doSave(fname);
}

////
/// \brief first save of the patch
///
void PatchWindow::saveAs()
{

    QString fname = QFileDialog::getSaveFileName(this, QString("Save patch as..."), QString("~/"), QString("*.pd"), 0, 0);

    doSave(fname);
}

void PatchWindow::doSave(QString fname)
{
    if (fname != "") {
        QString file = fname.section("/", -1, -1);
        QString dir = fname.section("/", 0, -2);

        qDebug("filename: %s %s", file.toStdString().c_str(), dir.toStdString().c_str());

        FileSaver::save(fname, canvas);

        //
        canvas->fileName = fname;

        setWindowTitle(file);
        setWindowFilePath(fname);
    }
}

////
/// \brief set file name when opening patch file
/// \param fname
///
void PatchWindow::setFileName(QString fname)
{

    canvas->fileName = fname;

    QString file = fname.section("/", -1, -1);

    setWindowTitle(file);
    setWindowFilePath(fname);
}

////
/// \brief creates object TODO move to canvas
///
void PatchWindow::objectMakerDone()
{
    QString obj_name = canvas->objectMaker()->text(); //.toStdString();

    if (obj_name != "") {

        //"ui.obj",

        if (canvas->replaceObject()) {

            UIObject* new_obj = canvas->createObject(obj_name, canvas->replaceObject()->pos().toPoint());

            UIObject* obj = canvas->replaceObject();
            patchcordVec cords = canvas->patchcordsForObject(obj);

            patchcordVec::iterator it;
            for (it = cords.begin(); it != cords.end(); ++it) {
                Patchcord* pc = ((Patchcord*)*it);
                UIObject* obj1 = pc->obj1();
                UIObject* obj2 = pc->obj2();

                qDebug() << "o1 o2 n" << obj1 << obj2 << new_obj;
                //replace
                if (obj1 == obj)
                    obj1 = new_obj;
                if (obj2 == obj)
                    obj2 = new_obj;

                if (obj1 && obj2)
                    canvas->patchcord(obj1, pc->outletIndex(), obj2, pc->inletIndex());
                else
                    qDebug("replace object - patchcord error");
            }

            canvas->deleteBox(obj);
        }
        else
        {
            UIObject* new_obj = canvas->createObject(obj_name, canvas->newObjectPos());
        }

        canvas->setDragObject(0);
        canvas->setReplaceObject(0);
        canvas->objectMaker()->close();
    }
}

// ==============================

void PatchWindow::cut()
{
    canvas->dataCut();
}

void PatchWindow::copy()
{
    canvas->dataCopy();
}

void PatchWindow::duplicate()
{
    canvas->dataDuplicate();
}

void PatchWindow::paste()
{
    FileParser::setParserWindow(this);
    canvas->dataPaste();
}

// ----------

void PatchWindow::resizeEvent(QResizeEvent* event)
{
    //        canvas->move(0,0);

    //        // todo move to canvas
    QSize newSize = canvas->minimumCanvasSize();
    if (newSize.width() < event->size().width())
        newSize.setWidth(event->size().width());
    if (newSize.height() < event->size().height())
        newSize.setHeight(event->size().height());
    //canvas->setMinimumSize(newSize);
    canvas->viewport()->setMinimumSize(newSize);
    //canvas->setWindowSize(newSize);

    //        //FIX
    //        canvas->move(0,0);
}
}
