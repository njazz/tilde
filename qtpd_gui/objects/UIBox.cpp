// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIBox.h"

#include "FileParser.h"

#include "CanvasData.h"
#include "PatchWindow.h"
#include "PatchWindowController.h"

#include "Preferences.h"
#include "PropertyList.h"

#include "SizeBox.h"

#include "pdServer.hpp"

namespace qtpd {
UIBox::UIBox()
{
    qDebug("constructor");

    setHeight(20);
    deselect();
    setBgColor(QColor(240, 240, 240));
    setErrorBox(false);
    //setSubpatchWindow(0);

    _objectDataModel.setObjectSize(os_FixedHeight, 40, 20);

    setAcceptHoverEvents(true);

    resizeEvent();

    _subpatchController = 0;
}

////
/// \brief mouse down
/// \param ev
///
void UIBox::objectPressEvent(QGraphicsSceneMouseEvent* event)
{

    //open canvas for subpatch
    if (getEditMode() != em_Unlocked) {
        if (subpatchController()) {
            subpatchController()->firstWindow()->show();
        }
    }

    //abstraction opening. Fix
    if (getEditMode() != em_Unlocked) {
        if (_isAbstraction) {
            _abstractionPath = serverObject()->toServerCanvas()->path().c_str();

            qDebug() << "abs object:" << serverObject() << "to canvas: " << serverObject()->toServerCanvas();
            qDebug() << "objects: " << serverObject()->hasInternalObject() << serverObject()->toServerCanvas()->hasInternalObject();
            qDebug() << "path: " << serverObject()->toServerCanvas()->path().c_str();

            QString fullName = _abstractionPath + "/" + _objectDataModel.objectData() + ".pd";
            ServerInstance::post("abstraction path: " + fullName.toStdString());

            FileParser::open(fullName);

            return;
        }
    }

    if ((getEditMode() == em_Unlocked) && isSelected()) {
        //ev->accept();
        //emit editObject(this);
        //            qDebug("edit box");
        return;
    }

    dragOffset = QPoint(event->pos().x(), event->pos().y());

    event->accept();
}

// -------------------

UIObject* UIBox::createObj(QString data)
{
    UIBox* ret = new UIBox();

    // this is needed here
    QStringList l = data.split(" ");
    QString objName = l.first();
    l.removeFirst();
    data = l.join(" ");
    ret->setObjectData(data);

    // TODO
    //    if (objName=="pd")
    //    {
    //        ret->_isAbstraction = true;
    //    }

    return ret;
}

//UIObject* UIBox::createObject(QString, t_canvas*, QGraphicsView*) { return 0; }

////
/// \brief paint event
///
void UIBox::paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*)
{
    p->setClipRect(option->exposedRect);

    p->setRenderHint(QPainter::HighQualityAntialiasing, true);

    QBrush brush(bgColor());
    p->setBrush(brush);
    p->drawRect(boundingRect());
    p->setBrush(QBrush());

    //remove this later

    if (isSubpatch()) {
        p->setPen(QPen(QColor(192, 192, 192), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        p->drawRect(0, 2, boundingRect().width(), boundingRect().height() - 4);
    }

    QColor rectColor = (errorBox()) ? QColor(255, 0, 0) : properties()->get("BorderColor")->asQColor(); //QColor(128, 128, 128);
    p->setPen(QPen(rectColor, 1 + _isAbstraction * 2, (errorBox()) ? Qt::DashLine : Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
    p->drawRect(0, 0, boundingRect().width(), boundingRect().height());
    QTextOption* op = new QTextOption;
    op->setAlignment(Qt::AlignLeft);
    p->setPen(QPen(QColor(0, 0, 0), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

    p->setFont(QFont(PREF_QSTRING("Font"), properties()->get("FontSize")->asFontSize(), 0, false));
    //QStringList textList = _objectDataModel.objectData().split(" ");
    //textList.removeFirst();

    p->drawText(2, 3, boundingRect().width() - 2, boundingRect().height() - 3, 0, _objectDataModel.objectData(), 0);

    if (isSelected()) {
        p->setPen(QPen(QColor(0, 192, 255), 2, (errorBox()) ? Qt::DashLine : Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        p->drawRect(0, 0, boundingRect().width(), boundingRect().height());
    }
}

////
/// \brief mouse up
///
void UIBox::mouseReleaseEvent(QGraphicsSceneMouseEvent* ev)
{
    QGraphicsItem::mouseReleaseEvent(ev);
}

////
/// \brief mouse move
/// \param event
///
void UIBox::objectMoveEvent(QGraphicsSceneMouseEvent* event)
{

    if ((getEditMode() != em_Unlocked) && (subpatchController())) {
        setCursor(QCursor(Qt::PointingHandCursor));
    } else {
        setCursor(QCursor(Qt::ArrowCursor));
    }
}

void UIBox::setPdMessage(QString message)
{
    UIBox::setObjectData(message);
}

void UIBox::setObjectData(QString message)
{
    UIObject::setObjectData(message);

    autoResize();

    QFont myFont(PREF_QSTRING("Font"), 11);
    QFontMetrics fm(myFont);
    int new_w = fm.width(message) + 10;
    new_w = (new_w < 25) ? 25 : new_w;
    setWidth(new_w);

    _objectDataModel.setMminimumBoxWidth(new_w);

    //
    setInletsPos();
    setOutletsPos();

    //
    sizeBox()->move(boundingRect().width() - 7, boundingRect().height() - 7);

    _isSubpatch = (message.split(" ").at(0) == "pd");
}

//#include "CanvasView.h"
void UIBox::sync()
{
    UIObject::sync();
    _isAbstraction = (serverObject()->type() == typeAbstraction);

    qDebug() << "is abstraction: " << _isAbstraction;

    // create subpatch window controller here (if not already created)
    if (isSubpatch() && !_subpatchController) {
        qDebug() << "subpatch server canvas: " << serverObject()->toServerCanvas();
        _subpatchController = new PatchWindowController(parentController()->appController(), serverObject()->toServerCanvas());
    }

    update();

    //
    if (_isAbstraction || isSubpatch()) {

        properties()->create("ShowBoxes", "Canvas", "0.1", false);
        properties()->create("ShowCanvas", "Canvas", "0.1", false);
        properties()->create("FixedSize", "Canvas", "0.1", false);
        properties()->create("FixedSizeBox", "Canvas", "0.1", QRect(0, 0, 300, 200));
    }
}

string UIBox::asPdFileString()
{
    string ret;

    if (isSubpatch()) {
        ret = subpatchController()->canvasData()->asPdFileStrings().join("").toStdString() + "\n";
        ret += "#X restore ";
        ret += std::to_string(int(x())) + " " + std::to_string(int(y())) + " ";

        //ret += pdObjectName_ + " " ;//

        ret += ((_objectDataModel.objectData() == "") ? ((std::string) "") : (_objectDataModel.objectData().toStdString() + " ")) + _objectDataModel.properties()->asPdFileString();

    } else {
        ret = UIObject::asPdFileString();
    }

    return ret;
}

void UIBox::autoResize()
{
    QFont myFont(PREF_QSTRING("Font"), properties()->get("FontSize")->asFontSize());
    QFontMetrics fm(myFont);

    int w = (int)fm.width(_objectDataModel.objectData()) + 10;
    _objectDataModel.setMminimumBoxWidth(w);
    //setWidth(w);

    QRect r = boundingRect().toRect();

    if (r.width() < w) {
        setWidth(w);
        properties()->set("Size", r.size());
    }
}

bool UIBox::isSubpatch()
{
    return _isSubpatch;
}

}
