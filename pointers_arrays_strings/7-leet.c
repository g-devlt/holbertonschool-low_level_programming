#include "main.h"

/**
 * leet - Converts a string to 1337
 * @str: The cstring to convert
 * Return: The string converted to 1337
*/
char *leet(char *str)
{
	char *from = "aAeEoOtTlL";
	char *to = "4433007711";
	int i;
	int j;

	for (i = 0; str[i] != 0; ++i)
	{
		for (j = 0; from[j] != 0; ++j)
		{
			if (str[i] == from[j])
			{
				str[i] = to[j];
				break;
			}
		}
	}

	return (str);
}

