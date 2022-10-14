#ifndef SHAPE_H
#define SHAPE_H

#include <stdlib.h>

typedef struct _Shape Shape;

struct _Shape {
    float(*calculateArea)(Shape*);
    float(*calculateSurface)(Shape*);

    void (*free_fn)(Shape*);
}; // Shape abstract class

float calculateArea_Shape(Shape*);
float calculateSurface_Shape(Shape*);
void free_Shape(Shape*);

#endif //SHAPE_H