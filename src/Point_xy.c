#include "Point_xy.h"

struct _PointXY {
    int x;
    int y;
};

inline PointXY*
new_PointXY(int x, int y) {
    PointXY* self = malloc(sizeof(PointXY));
    self->x = x;
    self->y = y;
    return self;
}

inline void
free_PointXY(PointXY* self) {
    free(self);
}

inline int
getX_PointXY(PointXY* self) {
	return self->x;
}

inline int
getY_PointXY(PointXY* self) {
	return self->y;
}

inline void
setX_PointXY(PointXY* self, int x) {
	self->x = x;
}

inline void
setY_PointXY(PointXY* self, int y) {
	self->y = y;
}