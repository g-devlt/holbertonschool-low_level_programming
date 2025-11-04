#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Locates a char from a list in a cstring
 * @s: the cstring to search
 * @accept: The pointer to the list of characters to search for
 * Return: A pointer to the first char matching
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; *s != 0; ++s)
	{
		for (i = 0; accept[i] != 0; ++i)
		{
			if (*s == accept[i])
				return (s);
		}
	}
	return (NULL);
}
