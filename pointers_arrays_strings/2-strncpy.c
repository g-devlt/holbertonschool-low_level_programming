#include "main.h"

/**
 * _strncpy - Copies n bytes from src to dest, pads with null bytes
 * @dest: The destination buffer
 * @src: The source cstring
 * @n: The number of bytes to copy into dest
 * Return: The destination buffer
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != 0)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = 0;
		++i;
	}

	return (dest);
}
