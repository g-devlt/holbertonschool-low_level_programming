#include "main.h"
#include <stddef.h>

/**
 * _strchr - Finds a char in a cstring
 * @s: The cstring to search
 * @c: The character to find
 * Return: A pointer to the first occurence of the character or NULL
*/
char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (*s == 0)
			return (NULL);
		++s;
	}
	return (s);
}

