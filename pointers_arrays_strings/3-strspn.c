#include "main.h"

/**
 * _strspn - Calculates the length of allowed characters in s
 * @s: The cstring source
 * @accept: The allowed bytes, null-terminated
 * Return: The length of the substring of allowed bytes.
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int c;

	for (i = 0; s[i] != 0; ++i)
	{
		c = 0;
		for (j = 0; accept[j] != 0; ++j)
		{
			if (s[i] == accept[j])
			{
				c = 1;
				break;
			}
		}
		if (!c)
			break;
	}

	return (i);
}

