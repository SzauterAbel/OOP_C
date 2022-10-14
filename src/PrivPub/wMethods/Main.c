#include <stdio.h>
#include <stdlib.h>
#include "Point.h"

int main()
{
	struct _Point* f_pointer = new_Point(2, 3);
	struct _Point* g_pointer = new_Point(4, 5);

	f_pointer->toString(f_pointer);
	g_pointer->toString(g_pointer);

	f_pointer->setX(f_pointer, 10);
	g_pointer->setY(g_pointer, 11);

	f_pointer->toString(f_pointer);
	f_pointer->toString(g_pointer);

	f_pointer->free(f_pointer);
	g_pointer->free(g_pointer);

    return 0;
}
