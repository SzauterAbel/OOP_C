#ifndef SHAPE_H
#define SHAPE_H

typedef struct _Shape Shape;

struct _Shape {
    float(*calculateArea)(Shape*);
    float(*calculateSurface)(Shape*);
};


#endif //SHAPE_H