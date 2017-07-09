

#include "PatchWindowController.h"

#include "UIBox.h"
//#include "UIObject.h"
#include "ObjectLoader.h"

namespace qtpd {

UIObject* PatchWindowController::copyObject(UIObject* src)
{
    QString data = src->toQString();

    if (data == "") {
        ServerInstance::post("bad data for object");
        return 0;
    }

    UIObject* dest = ObjectLoader::inst().createUIObject(data);

    if (!dest) {
        ServerInstance::post("bad dest object");
        return 0;
    }

    dest->setObjectData(src->objectData());

    dest->setServerObject(src->serverObject());
    dest->move(src->pos().x(), src->pos().y());

    if (data.split(" ").at(0) == "pd") {

        //qDebug() << "setSubpatchController";
        UIBox* boxSrc = (UIBox*)src;
        UIBox* boxDest = (UIBox*)dest;

        boxDest->setSubpatchController(boxSrc->subpatchController());
    }

    return dest;
}
}
