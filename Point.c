#include "Point.h"
#include <stdio.h>
#include <stdlib.h>

struct _Point {
	int x;
	int y;

	Point*(*init)(int, int);
	void(*deinit)(Point*);
	void(*toString)(Point*);
};

static inline Point*
Point_init(int x, int y) {
	Point* self = malloc(sizeof(Point));
	self->x = x;
	self->y = y;
	return self;
}

static inline void
Point_deinit(Point *self) {
	free(self);
}

static inline void
Point_toString(Point *self) {
	printf("(%d ; %d)", self->x, self->y);
}
