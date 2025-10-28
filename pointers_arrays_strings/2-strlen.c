#include "main.h"

/**
 * _strlen - Gives the length of a cstring
 * @s: The cstring
 * Return: The length of s
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != 0)
		++i;
	return (i);
}
