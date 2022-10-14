#ifndef POINT_H
#define POINT_H

typedef struct  _Point Point;

Point* new_Point(int x,  int y);
void free_Point(Point* self);
Point* copy_Point(Point* self);

int getX_Point(Point* self);
int getY_Point(Point* self);

void setX_Point(Point* self, int x);
void setY_Point(Point* self, int y);

void toString_Point(Point* self);

#endif // POINT_H
