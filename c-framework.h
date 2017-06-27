
#include <stdio.h>
#include <stdlib.h>

#define NEW(name)    malloc(sizeof(name))
#define CLASS(name)  typedef struct name name; struct name