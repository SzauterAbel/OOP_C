#include "Point.h"
#include <stdio.h>
#include <stdlib.h>

inline Point*
new_Point(int x, int y) {
	Point* self = malloc(sizeof(Point));
	self->xy = new_PointXY(x, y);

	self->new = new_Point;
	self->free = free_Point;
	self->copy = copy_Point;
	
	self->getX = getX_Point;
	self->getY = getY_Point;
	self->setX = setX_Point;
	self->setY = setY_Point;

	self->toString = toString_Point;

	return self;
}

inline void
free_Point(Point *self) {
	free_PointXY(self->xy);
	free(self);
}

inline Point*
copy_Point(Point* self) {
	Point* copy = new_Point(getX_PointXY(self->xy), getY_PointXY(self->xy));
	return copy;
}

inline int
getX_Point(Point* self) {
	return getX_PointXY(self->xy);
}

inline int
getY_Point(Point* self) {
	return getY_PointXY(self->xy);
}

inline void
setX_Point(Point* self, int x) {
	setX_PointXY(self->xy, x);
}

inline void
setY_Point(Point* self, int y) {
	setY_PointXY(self->xy, y);
}

inline void
toString_Point(Point *self) {
	printf("(%d ; %d)\n", getX_PointXY(self->xy), getY_PointXY(self->xy));
}
