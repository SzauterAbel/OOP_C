#ifndef POINT_H
#define POINT_H
#include "Point_xy.h"

typedef struct  _Point Point;

struct _Point {
	PointXY* xy;

	Point*(*new)(int, int);
	void(*free)(Point*);
	void(*toString)(Point*);
	Point*(*copy)(Point*);

	int(*getX)(Point*);
	int(*getY)(Point*);

	void(*setX)(Point*, int);
	void(*setY)(Point*, int);
};

Point* new_Point(int x,  int y);
void free_Point(Point* self);
Point* copy_Point(Point* self);

int getX_Point(Point* self);
int getY_Point(Point* self);

void setX_Point(Point* self, int x);
void setY_Point(Point* self, int y);

void toString_Point(Point* self);



#endif // POINT_H
