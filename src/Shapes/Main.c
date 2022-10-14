#include <stdio.h>
#include <stdlib.h>
#include "Circle.h"
#include "Rectangle.h"

int main()
{

    Shape* c1 = new_Circle(10);
    double c_area = c1->calculateArea(c1);
    double c_surface = c1->calculateSurface(c1);

    printf("Circle:\n");
    printf("Area: %f, Surface: %f\n", c_area, c_surface);

    double sides[3] = {4, 5, 3};
    double* sides_p = sides;

    Shape* r1 = new_Rectangle(sides_p);
    double r_area = r1->calculateArea(r1);
    double r_surface = r1->calculateSurface(r1);

    printf("Rectangle:\n");
    printf("Area: %f, Surface: %f\n", r_area, r_surface);

    c1->free_fn(c1);
    r1->free_fn(r1);

    return 0;
}
