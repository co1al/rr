#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <unistd.h>

#include "global.h"

void* malloc(size_t size)
{

	printf("in my malloc--------------------\n");
	return NULL;
}
