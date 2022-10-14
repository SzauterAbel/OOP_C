#include "Circle.h"
#include <stdlib.h>

Circle* new_Circle(int r) {
    Circle* self = malloc(sizeof(Circle));
    Shape* sh =  malloc(sizeof(Shape));
    self->super = sh;

    self->super->calculateArea = calculateArea_Circle;
    self->super->calculateSurface = calculateSurface_Circle;
    
    self->r = r;


    return self;
}

void free_Circle(Circle* self) {
    free(self->super);
    free(self);
}

float calculateArea_Circle(Shape* super) {
    Circle *self = (Circle*)super;
    return self->r * self->r * 3.14;
}

float calculateSurface_Circle(Shape* super) {
    Circle *self = (Circle*)super;
    return self->r * self->r * 3.14;
}