#include "Point.h"
#include <stdio.h>
#include <stdlib.h>


struct _Point {
	int x;
	int y;
};

inline Point*
new_Point(int x, int y) {
	Point* self = malloc(sizeof(Point));

	self->x = x;
	self->y = y;

	return self;
}

inline void
free_Point(Point *self) {
	free(self);
}

inline Point*
copy_Point(Point* self) {
	Point* copy = new_Point(self->x, self->y);
	return copy;
}

inline int
getX_Point(Point* self) {
	return self->x;
}

inline int
getY_Point(Point* self) {
	return self->y;
}

inline void
setX_Point(Point* self, int x) {
	self->x = x;
}

inline void
setY_Point(Point* self, int y) {
	self->y = y;
}

inline void
toString_Point(Point *self) {
	printf("(%d ; %d)\n", self->x, self->y);
}
