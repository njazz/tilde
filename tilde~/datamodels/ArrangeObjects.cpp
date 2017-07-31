// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIObject.h"
#include "arrangeobjects.h"

#include "math.h"

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

    int min_x = 32768; //big enough lol

    for (objectVec::iterator it = v->begin(); it != v->end(); ++it) {
        if (min_x > ((UIObject*)*it)->pos().y())
            min_x = ((UIObject*)*it)->pos().y();
    }


    int max_x = 0;

    for (objectVec::iterator it = v->begin(); it != v->end(); ++it) {
        if (max_x < ((UIObject*)*it)->pos().y())
            max_x = ((UIObject*)*it)->pos().y();
    }

    int i=0;

    for (objectVec::iterator it = v->begin(); it != v->end(); ++it) {

        int nx = floor(float(i)/float(v->size())*float(max_x-min_x) + min_x);

        ((UIObject*)*it)->move( nx, ((UIObject*)*it)->pos().y());
        i++;
    }
}

void ArrangeObjects::distributeVertical(objectVec* v)
{

    int min_y = 32768; //big enough lol

    for (objectVec::iterator it = v->begin(); it != v->end(); ++it) {
        if (min_y > ((UIObject*)*it)->pos().y())
            min_y = ((UIObject*)*it)->pos().y();
    }


    int max_y = 0;

    for (objectVec::iterator it = v->begin(); it != v->end(); ++it) {
        if (max_y < ((UIObject*)*it)->pos().y())
            max_y = ((UIObject*)*it)->pos().y();
    }

    int i=0;

    for (objectVec::iterator it = v->begin(); it != v->end(); ++it) {

        int ny = floor(float(i)/float(v->size())*float(max_y-min_y) + min_y);

        ((UIObject*)*it)->move( ((UIObject*)*it)->pos().x(), ny);
        i++;
    }

}

}
