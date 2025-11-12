#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates a block of memory
 * @nmemb: How many elements to allocate
 * @size: Size of an element in bytes
 * Return: The block of memory allocated.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int len = nmeb * size;
	void *buf;
	unsigned int i;

	buf = malloc(len);

	for (i = 0; i < len; ++i)
	{
		buf[i] = 0;
	}

	return (buf);
}
