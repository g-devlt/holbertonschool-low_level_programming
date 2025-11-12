#include "main.h"
#include <stdlib.h>

/**
 * __strlen - Computes the length of a cstring
 * @str: The cstring to compute
 * Return: The length of the cstring
*/
int __strlen(char *str)
{
	int i = 0;

	while (str[i] != 0)
		++i;

	return (i);
}


/**
 * _strdup - Copies a cstring
 * @str: The cstring to copy
 * Return: A buffer with a copy of the cstring including the null terminator
*/
char *_strdup(char *str)
{
	int i;
	int len;
	char *buf;

	if (str == NULL)
		return (NULL);

	len = __strlen(str);
	buf = malloc(len + 1); /*Adjust for null terminator*/

	if (buf == NULL)
		return (NULL);

	for (i = 0; i < len + 1; ++i)
	{
		buf[i] = str[i];
	}
	return (buf);
}

