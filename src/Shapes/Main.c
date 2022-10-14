#include <stdio.h>
#include <stdlib.h>
#include "Circle.h"

int main()
{

    Shape* c1 = new_Circle(10);
    float area = calculateArea_Shape(c1);
    float surface = calculateSurface_Shape(c1);

    printf("Area: %f, Surface: %f\n", area, surface);

    free_Shape(c1);

    return 0;
}
