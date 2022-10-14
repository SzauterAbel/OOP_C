#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

typedef struct _Circle Circle;

struct _Circle {
    // Stored as a value, not a pointer, so we can cast freely.
    // The pointer to the first element of the instantiated struct is the same as the pointer to the instantiated struct.
    Shape super;
    int r;
};

Shape* new_Circle(int); // Returns Shape*, so the user can call the Shape:: functions with it.

#endif //CIRCLE_H