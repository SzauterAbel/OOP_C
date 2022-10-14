#include <stdio.h>
#include <stdlib.h>
#include "Circle.h"

int main()
{

    Circle* c1 = new_Circle(10);
    float area = c1->super->calculateArea(c1->super);
    float surface = c1->super->calculateSurface(c1->super);

    printf("Area: %f, Surface: %f\n", area, surface);
    
    free_Circle(c1);

    return 0;
}
