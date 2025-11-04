#include "main.h"

/**
 * _memcpy - Copies a memory area from src to dest
 * @dest: The destination to copy to
 * @src: Where to copy from
 * @n: How many bytes to copy
 * Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		dest[i] = src[i];
	}

	return (dest);
}
