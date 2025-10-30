#include "main.h"

/**
 * _strncat - Appends n bytes from src into dest
 * @dest: The cstring to append to
 * @src: The cstring to append
 * @n: The number of bytes to append to dest
 * Return: The dest cstring
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != 0)
		++i;
	while (j < n && src[j] != 0)
	{
		dest[i] = src[j];
		++j;
		++i;
	}
	dest[i] = 0;

	return (dest);
}
