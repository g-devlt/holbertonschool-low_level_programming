#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Safe malloc wrapper.
 * @b: Number of bytes to allocate
 * Return: The allocated buffer. Exits program on failure
*/
void *malloc_checked(unsigned int b)
{
	void *buf = malloc(b);

	if (!buf)
		exit(98);
	return (buf);
}
