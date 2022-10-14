#include "Circle.h"
#include <stdlib.h>

static void _free(Shape* self) {
    // If we had dynamically allocated attributes, they would be freed here.
    // `r` does not need to be freed.
}

static float _calculateArea(Shape* super) {
    Circle *self = (Circle*)super;
    return self->r * self->r * 3.14;
}

static float _calculateSurface(Shape* super) {
    Circle *self = (Circle*)super;
    return self->r * self->r * 3.14;
}

Shape* new_Circle(int r) {
    Circle* self = malloc(sizeof(Circle));

    self->super.calculateArea = _calculateArea;
    self->super.calculateSurface = _calculateSurface;
    self->super.free_fn = _free;

    self->r = r;

    return &self->super;
}
