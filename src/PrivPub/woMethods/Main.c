#include <stdio.h>
#include <stdlib.h>
#include "Point.h"

int main()
{
	struct _Point* f_pointer = new_Point(2, 3);
	struct _Point* g_pointer = new_Point(4, 5);

	toString_Point(f_pointer);
	toString_Point(g_pointer);

	setX_Point(f_pointer, 10);
	setY_Point(g_pointer, 11);

	toString_Point(f_pointer);
	toString_Point(g_pointer);

	free_Point(f_pointer);
	free_Point(g_pointer);

    return 0;
}
