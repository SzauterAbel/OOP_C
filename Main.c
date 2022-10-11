#include <stdio.h>
#include <stdlib.h>

int main()
{
	struct _Point* f_pointer = Point_init(2, 3);

	Point_toString(f_pointer);

	Point_deinit(f_pointer);

    return 0;
}
