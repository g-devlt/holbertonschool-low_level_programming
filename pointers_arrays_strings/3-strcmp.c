#include "main.h"

/**
 * _strcmp - Compares two cstring
 * @s1: The first string
 * @s2: The second string
 * Return: 0 if equal, else the diff between s1[i] and s2[i]
 * where i is the index where s1 and s2 are not matching anymore
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (1)
	{
		if (s1[i] == s2[i])
		{
			if (s1[i] == 0)
				return (0);
		}
		else
			return (s1[i] - s2[i]);
		++i;
	}

}
