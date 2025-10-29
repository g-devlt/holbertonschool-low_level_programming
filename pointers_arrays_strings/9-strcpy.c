#include "main.h"

/**
 * _strcpy - Copies the string from src to dest
 * @dest: The string copy destination
 * @src: The source string to copy to dest
 * Return: Return dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != 0)
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = src[i];

	return (dest);
}
