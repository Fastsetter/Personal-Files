#include <stdio.h>
#include <stdlib.h>
// function pointer can be used to define function varible that are pointers to
// the function that modies the struct. ex a rect object

typedef struct Rect {
    float height;
    float width;
    void (*set) (struct Rect*, float, float);
    void (*display) (struct Rect*);
    float (*area) (struct Rect*);
} rect;


void set (rect* r, float x, float y) {
    r->width  = x;
    r->height = y;
    return;
}

void display (rect* r) {
    printf ("The widht is : %f ", r->width);
    printf ("The height is : %f ", r->height);
    printf ("\n");
}

float area (rect* r) {
    float a = r->height * r->width;
    return a;
}
void constructRect (rect* r) {
    r->width = r->height = 0;
    r->set               = set;
    r->display           = display;
    r->area              = area;
}

int main () {

    rect r;
    constructRect (&r);
    r.set (&r, 22, 11);
    r.display (&r);
    printf ("Area of rectange is : %f \n", r.area (&r));


    return 0;
}
