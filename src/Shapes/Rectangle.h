#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

typedef struct _Rectangle Rectangle;

struct _Rectangle {
    Shape super;
    double* sides;
};

Shape* new_Rectangle(double*);


#endif //RECTANGLE_H