#ifndef CIRCLE_H
#define CIRCLE_H

#include <stdlib.h>
#include "Shape.h"

typedef struct _Circle Circle;

struct _Circle {
    Shape* super;
    int r;
};

Circle* new_Circle(int);
void free_Circle(Circle*);
float calculateArea_Circle(Shape*);
float calculateSurface_Circle(Shape*);


#endif //CIRCLE_H