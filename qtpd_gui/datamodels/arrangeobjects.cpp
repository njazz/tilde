#include "UIObject.h"
#include "arrangeobjects.h"

namespace qtpd {

ArrangeObjects::ArrangeObjects()
{
}

void ArrangeObjects::alignLeft(objectVec* v)
{
    int x = 32768; //big enough lol

    for (objectVec::iterator it = v->begin(); it != v->end(); ++it) {
        if (x > ((UIObject*)*it)->pos().x())
            x = ((UIObject*)*it)->pos().x();
    }
    for (objectVec::iterator it = v->begin(); it != v->end(); ++it) {
        ((UIObject*)*it)->move(x, ((UIObject*)*it)->pos().y());
    }
}

void ArrangeObjects::alignRight(objectVec* v)
{
    int x = 0;

    for (objectVec::iterator it = v->begin(); it != v->end(); ++it) {
        if (x < ((UIObject*)*it)->pos().x())
            x = ((UIObject*)*it)->pos().x();
    }
    for (objectVec::iterator it = v->begin(); it != v->end(); ++it) {
        ((UIObject*)*it)->move(x, ((UIObject*)*it)->pos().y());
    }
}

void ArrangeObjects::alignBottom(objectVec* v)

{
    int y = 0;

    for (objectVec::iterator it = v->begin(); it != v->end(); ++it) {
        if (y < ((UIObject*)*it)->pos().y())
            y = ((UIObject*)*it)->pos().y();
    }
    for (objectVec::iterator it = v->begin(); it != v->end(); ++it) {
        ((UIObject*)*it)->move(((UIObject*)*it)->pos().x(), y);
    }
}

void ArrangeObjects::alignTop(objectVec* v)
{
    int y = 32768; //big enough lol

    for (objectVec::iterator it = v->begin(); it != v->end(); ++it) {
        if (y > ((UIObject*)*it)->pos().y())
            y = ((UIObject*)*it)->pos().y();
    }
    for (objectVec::iterator it = v->begin(); it != v->end(); ++it) {
        ((UIObject*)*it)->move(((UIObject*)*it)->pos().x(), y);
    }
}

void ArrangeObjects::alignCenter(objectVec* v)
{
    int x = 0; //big enough lol
    int c = 0;

    for (objectVec::iterator it = v->begin(); it != v->end(); ++it) {
        //if (x > ((UIObject*)*it)->pos().x())
        x += ((UIObject*)*it)->pos().x();
        c++;
    }

    x = x / c;

    for (objectVec::iterator it = v->begin(); it != v->end(); ++it) {
        ((UIObject*)*it)->move(x, ((UIObject*)*it)->pos().y());
    }
}

void ArrangeObjects::distributeHorizontal(objectVec* v)
{
}

void ArrangeObjects::distributeVertical(objectVec* v)
{
}
}
