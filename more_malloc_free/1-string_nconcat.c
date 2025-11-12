#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Computes the length of a cstring
 * @s: The cstring
 * Return: The length of the cstring
*/
unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i] != 0)
		++i;

	return (i);
}


/**
 * string_nconcat - Concatenates two string
 * @s1: The first string
 * @s2: The second string
 * @n: How many bytes to use from the second string
 * Return: A concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i;
	char *buf;

	if (s1 == NULL)
		len1 = 0;
	else
		len1 = _strlen(s1);

	if (s2 == NULL)
		len2 = 0;
	else
	{
		len2 = _strlen(s2);
		if (len2 > n)
			len2 = n;
	}

	buf = malloc(len1 + len2 + 1);

	if (buf == NULL)
		return (NULL);

	for (i = 0; i < len1; ++i)
	{
		buf[i] = s1[i];
	}

	for (i = 0; i < len2; ++i)
	{
		buf[len1 + i] = s2[i];
	}

	buf[len1 + len2] = 0;

	return (buf);
}
