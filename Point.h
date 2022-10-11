#ifndef POINT_H
#define POINT_H

typedef struct  _Point Point;

static Point* Point_init(int x,  int y);
static void Point_deinit(Point* self);
static void Point_toString(Point* self);

#endif // POINT_H
