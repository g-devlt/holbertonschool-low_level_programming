#include "main.h"
#include <stddef.h>

/**
 * _strstr - Finds a substring in a cstring
 * @haystack: The cstring to search
 * @needle: The substring to find
 * Return: A pointer to the substring start
*/
char *_strstr(char *haystack, char *needle)
{
	int i, c;

	for (; *haystack != 0; ++haystack)
	{
		c = 0;
		for (i = 0; needle[i] != 0; ++i)
		{
			if (haystack[i] == 0)
				break;
			if (haystack[i] == needle[i])
				c = 1;
			else
				c = 0;
		}
		if (c == 1)
			return (haystack);
	}
	return (NULL);
}
