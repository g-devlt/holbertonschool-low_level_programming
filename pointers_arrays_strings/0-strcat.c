#include "main.h"

/**
 * _strcat - Concatenates two cstring
 * @dest: The destination string
 * @src: The string to append to dest
 * Return: The dest string
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != 0)
		++i;
	while (src[j] != 0)
	{
		dest[i] = src[j];
		++j;
		++i;
	}
	dest[i] = src[j];

	return (dest);
}
