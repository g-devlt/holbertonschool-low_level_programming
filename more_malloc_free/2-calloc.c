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
	unsigned int len = nmemb * size;
	char *buf;
	unsigned int i;
	
	if (len == 0)
		return (NULL);

	buf = malloc(len);
	if (!buf)
		return (NULL);

	for (i = 0; i < len; ++i)
	{
		buf[i] = 0;
	}

	return (buf);
}
