// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIBox.h"

#include "FileParser.h"

#include "CanvasData.h"
#include "PatchWindow.h"
#include "PatchWindowController.h"

namespace qtpd {
UIBox::UIBox()
{
//    UIObject::UIObject();

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
            FileParser::open(_abstractionPath);
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
    p->setPen(QPen(rectColor, 1 + _isAbstraction, (errorBox()) ? Qt::DashLine : Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
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

    // create subpatch window controller here (if not already created)
    if (isSubpatch() && !_subpatchController) {
        qDebug() << "subpatch server canvas: " << serverObject()->toServerCanvas();

        _subpatchController = new PatchWindowController(parentController()->appController(), serverObject()->toServerCanvas());
    }
    update();
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
}
