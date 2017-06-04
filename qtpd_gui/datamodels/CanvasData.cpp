// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIBox.h"

#include "CanvasData.h"
#include "Preferences.h"

namespace qtpd {
CanvasData::CanvasData()
{
    _filePath = Preferences::inst().get("Patches")->asQString();
}

void CanvasData::addUniqueBox(objectVec* boxes, UIObject* box)
{
    int p = findBox(boxes, box);

    if (boxes->size())
        if (p >= 0) {
            boxes->erase(boxes->begin() + p);
        }

    boxes->push_back(box);
}

void CanvasData::addUniquePatchcord(patchcordVec* patchcords, UIPatchcord* pcord)
{
    int p = findPatchcord(patchcords, pcord);

    if (patchcords->size())
        if (p >= 0) {
            patchcords->erase(patchcords->begin() + p);
        }

    patchcords->push_back(pcord);
}

int CanvasData::findBox(objectVec* boxes, UIObject* box)
{
    //todo
    for (size_t i = 0; i < boxes->size(); i++) {
        if (boxes->at(i) == box)
            return i;
    }

    return -1;
}

int CanvasData::findPatchcord(patchcordVec* patchcords, UIPatchcord* pcord)
{
    //todo
    for (size_t i = 0; i < patchcords->size(); i++) {
        if (patchcords->at(i) == pcord)
            return i;
    }

    return -1;
}

void CanvasData::selectBoxesInFrame(QPoint start, QPoint end)
{

    for (int i = 0; i < (int)boxes()->size(); i++) {
        QPointF pos = ((UIBox*)boxes()->at(i))->pos();
        QPoint pos_ = QPoint(pos.x(), pos.y());
        QSizeF size = ((UIBox*)boxes()->at(i))->size();
        QRect r = QRect(pos_, pos_ + QPoint(size.width(), size.height()));

        QRect frame = QRect(start, start + end);

        if (frame.contains(r, false)) {
            ((UIBox*)boxes()->at(i))->select();
            //_selectionData.addUniqueBox(_canvasData.boxes()->at(i));
            selectBox(boxes()->at(i));
        } else {
            ((UIBox*)boxes()->at(i))->deselect();

            auto it = std::find(selectedBoxes()->begin(), selectedBoxes()->end(), boxes()->at(i));
            if (it !=selectedBoxes()->end()) {
                selectedBoxes()->erase(it);
            }
        }
    }
}

void CanvasData::selectBox(UIObject* box)
{
    addUniqueBox(&_selectedBoxes, box);
    box->select();
}
void CanvasData::selectPatchcord(UIPatchcord* pc)
{
    addUniquePatchcord(&_selectedPatchcords, pc);
    pc->select();
}

void CanvasData::deselectBoxes()
{
    qDebug() << "deselect";

    for (int i = 0; i < (int)_boxes.size(); i++) {
        if (_boxes.at(i)) {
            ((UIBox*)_boxes.at(i))->deselect();
            ((UIBox*)_boxes.at(i))->update();
        }
    }

    _selectedBoxes.clear();
}

void CanvasData::deselectPatchcords()
{
    patchcordVec::iterator it2;

    for (it2 = _patchcords.begin(); it2 != _patchcords.end(); ++it2) {

        ((UIPatchcord*)*it2)->deselect();
        ((UIPatchcord*)*it2)->setHover(false);
        ((UIPatchcord*)*it2)->update();
    }
}

// ----------

void CanvasData::cut()
{
    _clipboard->inst()->clear();
    _clipboard->inst()->append(boxesAsPdFileStrings(&_selectedBoxes));
    _clipboard->inst()->append(patchcordsAsPdFileStrings(&_selectedPatchcords));

    // todo move delete objects to this class; put here
}

void CanvasData::copy()
{
    _clipboard->inst()->clear();
    _clipboard->inst()->append(boxesAsPdFileStrings(&_selectedBoxes));
    _clipboard->inst()->append(patchcordsAsPdFileStrings(&_selectedPatchcords));
}

void CanvasData::paste()
{
    // todo move here
}

// -------
int CanvasData::findObjectIndex(UIObject* obj)
{
    //UIObject* obj1;
    std::vector<UIObject*>::iterator iter = std::find(_boxes.begin(), _boxes.end(), obj);
    size_t index = std::distance(_boxes.begin(), iter);
    if (index != _boxes.size()) {
        return index;
    }
    return -1;
}

UIObject* CanvasData::getObjectByIndex(int idx)
{

    if ((idx < (int)boxes()->size()) && (idx >= 0))
        return boxes()->at(idx);
    else {
        qDebug("object not found");
        return 0;
    }
}

patchcordVec CanvasData::patchcordsForObject(UIObject* obj)
{
    patchcordVec ret;
    patchcordVec::iterator it;

    for (it = patchcords()->begin(); it != patchcords()->end(); ++it) {
        if (
            (((UIPatchcord*)*it)->obj1() == obj)
            || (((UIPatchcord*)*it)->obj2() == obj)) {
            ret.push_back(*it);
        }
    }

    return ret;
}

// ------------------------------

QStringList CanvasData::boxesAsPdFileStrings(objectVec* boxes)
{
    QStringList ret;
    objectVec::iterator it;

    for (it = boxes->begin(); it != boxes->end(); ++it) {

        std::string out1 = ((UIObject*)*it)->asPdFileString();
        out1 += ";\r\n";

        ret.append(out1.c_str());
    }

    return ret;
}

std::string CanvasData::patchcordAsPdFileString(UIPatchcord* pcord)
{
    //TODO

    int obj1i = findObjectIndex(pcord->obj1());
    int obj2i = findObjectIndex(pcord->obj2());

    if ((obj1i >= 0) && (obj2i >= 0)) {
        std::string ret;

        ret += std::to_string(obj1i) + " ";
        ret += std::to_string(pcord->outletIndex()) + " ";

        ret += std::to_string(obj2i) + " ";
        ret += std::to_string(pcord->inletIndex()) + " ";

        return ret;

    } else
        qDebug("patchcord to string error");

    return "";
}

QStringList CanvasData::patchcordsAsPdFileStrings(patchcordVec* patchcords)
{
    QStringList ret;
    //patchcordVec patchcords = patchcords;
    patchcordVec::iterator it2;

    for (it2 = patchcords->begin(); it2 != patchcords->end(); ++it2) {
        // check for subpatches
        std::string out1 = "#X connect ";
        out1 += patchcordAsPdFileString(*it2);

        //ut1 = ((Patchcord*)*it2)->asPdFileString();
        out1 += ";\r\n";

        ret.append(out1.c_str());
    }

    return ret;
}

t_patchcordAsNumbers CanvasData::patchcordAsNumbers(UIPatchcord* pcord)
{
    //TODO

    t_patchcordAsNumbers ret;

    int obj1i = findObjectIndex(pcord->obj1());
    int obj2i = findObjectIndex(pcord->obj2());

    if ((obj1i >= 0) && (obj2i >= 0)) {
        //std::string ret;

        ret.obj1 = (obj1i);
        ret.out1 = pcord->outletIndex();

        ret.obj2 = (obj2i);
        ret.in2 = pcord->inletIndex();

    } else {
        qDebug("patchcord to string error");
        ret.obj1 = 0;
        ret.obj2 = 0;
        ret.out1 = 0;
        ret.in2 = 0;
    }

    return ret;
}

QStringList CanvasData::objectsAsPdFileStrings()
{

    QStringList ret = boxesAsPdFileStrings(&_boxes);
    ret += patchcordsAsPdFileStrings(&_patchcords);

    return ret;
}

QString CanvasData::canvasAsPdFileString()
{
    // TODO
    // should be stored by windows

    return QString("#N canvas 0 0 400 300 10;\r\n");

    //        std::string ret;

    //        ret = "#N canvas ";
    //        ret += std::to_string(x()) + " ";
    //        ret += std::to_string(y()) + " ";
    //        ret += std::to_string(width()) + " ";
    //        ret += std::to_string(height()) + " ";
    //        ret += "10; \r\n";

    //        return ret;
}

QStringList CanvasData::asPdFileStrings()
{
    QStringList ret;
    ret.append(canvasAsPdFileString());
    ret += objectsAsPdFileStrings();

    return ret;
}
}
