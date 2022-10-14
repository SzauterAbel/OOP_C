#ifndef SHAPE_H
#define SHAPE_H

#include <stdlib.h>

typedef struct _Shape Shape;

struct _Shape {
    double(*calculateArea)(Shape*);
    double(*calculateSurface)(Shape*);

    void (*free_fn)(Shape*);
}; // Shape abstract class

#endif //SHAPE_H