#include "main.h"
#include <stdlib.h>


void *malloc_checked(unsigned int b)
{
	void *buf = malloc(b);
	if(!buf)
		exit(98);
	return (buf);
}
