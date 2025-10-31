#include "main.h"

/**
 * rot13 - Applies ROT13 to the passed cstring
 * @str: The cstring to apply ROT13 to
 * Return: str
*/
char *rot13(char *str)
{
	char *from = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char *to = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
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
