#include "main.h"

/**
 * _strlen - Computes the length of a cstring
 * @s: The cstring to compute
 * Return: The length of the cstring s.
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != 0)
		++i;
	return (i);
}

/**
 * rev_string - Flips a cstring
 * @s: The cstring to flip
*/
void rev_string(char *s)
{
	int length = _strlen(s);
	int i;

	for (i = 0; i < length / 2; ++i)
	{
		char *a = &s[i];
		char *b = &s[length - 1 - i];
		char tmp = *a;
		*a = *b;
		*b = tmp;
	}
}
