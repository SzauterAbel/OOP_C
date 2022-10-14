#include "Rectangle.h"
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

static void _free(Shape* super) {
    Rectangle *self = (Rectangle*)super;
    free(self->sides);
    free(self);
}

static double _calculateArea(Shape* super) {
    Rectangle* self = (Rectangle*)super;
    double a_side = *self->sides;
    double b_side = *(self->sides+1);
    double c_side = *(self->sides+2);
    double s = (a_side + b_side + c_side) / 2;
    return sqrt(s * (s - a_side) * (s - b_side) * (s - c_side));
}

static double _calculateSurface(Shape* super) {
    Rectangle* self = (Rectangle*)super;
    double a_side = *self->sides;
    double b_side = *self->sides+1;
    double c_side = *self->sides+2;
    return a_side+b_side+c_side;
}

Shape* new_Rectangle(double* sides) {
    Rectangle* self = calloc(1, sizeof(Rectangle));
    self->sides = sides;

    self->super.calculateArea = _calculateArea;
    self->super.calculateSurface = _calculateSurface;
    self->super.free_fn = _free;

    return &self->super;
}