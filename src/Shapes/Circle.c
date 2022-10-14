#include "Circle.h"
#include <stdlib.h>

static void _free(Shape* super) {
    Circle *self = (Circle*)super;
    free(self);
}

static double _calculateArea(Shape* super) {
    Circle *self = (Circle*)super;
    return self->r * self->r * 3.14;
}

static double _calculateSurface(Shape* super) {
    Circle *self = (Circle*)super;
    return self->r * self->r * 3.14;
}

Shape* new_Circle(int r) {
    Circle* self = calloc(1, sizeof(Circle));

    self->super.calculateArea = _calculateArea;
    self->super.calculateSurface = _calculateSurface;
    self->super.free_fn = _free;

    self->r = r;

    return &self->super;
}
