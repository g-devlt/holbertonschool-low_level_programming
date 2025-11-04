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
	int i;

	if (needle == 0)
		return (haystack);

	for (; *haystack != 0; ++haystack)
	{
		for (i = 0; needle[i] != 0; ++i)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (needle[i] == 0)
			return (haystack);
	}
	return (NULL);
}
