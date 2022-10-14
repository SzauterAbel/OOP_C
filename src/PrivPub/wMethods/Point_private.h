#ifndef POINT_PRIVATE_H
#define POINT_PRIVATE_H
#include <stdlib.h>
#include <stdio.h>

typedef struct _private pprivate;

pprivate* new_private(int, int);

void free_private(pprivate*);

int getX_private(pprivate*);
int getY_private(pprivate*);

void setX_private(pprivate*, int);
void setY_private(pprivate*, int);


#endif //POINT_PRIVATE_H
