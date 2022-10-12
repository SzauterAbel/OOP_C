#ifndef POINT_PRIVATE_H
#define POINT_PRIVATE_H
#include <stdlib.h>
#include <stdio.h>

typedef struct  _PointXY PointXY;

PointXY* new_PointXY(int, int);

void free_PointXY(PointXY*);

int getX_PointXY(PointXY*);
int getY_PointXY(PointXY*);

void setX_PointXY(PointXY*, int);
void setY_PointXY(PointXY*, int);


#endif //POINT_PRIVATE_H
