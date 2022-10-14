#include "Point_private.h"

struct _private {
    int x;
    int y;
};

inline pprivate*
new_private(int x, int y) {
    pprivate* self = malloc(sizeof(pprivate));
    self->x = x;
    self->y = y;
    return self;
}

inline void
free_private(pprivate* self) {
    free(self);
}

inline int
getX_private(pprivate* self) {
	return self->x;
}

inline int
getY_private(pprivate* self) {
	return self->y;
}

inline void
setX_private(pprivate* self, int x) {
	self->x = x;
}

inline void
setY_private(pprivate* self, int y) {
	self->y = y;
}