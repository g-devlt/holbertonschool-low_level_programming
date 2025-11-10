#include "main.h"

/**
 * _strlen - Computes the length of a cstring
 * @str : The string to compute
 * Return: The length of str
*/
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != 0)
		++i;
	return (i);
}

/**
 * str_concat - Concatenates two cstrings
 * @s1: The first string
 * @s2: The second string
 * Return: A buffer containing the concatenated cstrings
*/
char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	char *out;
	int i;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	out = malloc(len1 + len2 + 1);
	if (out == NULL)
		return (NULL);

	for (i = 0; i < len1; ++i)
	{
		out[i] = s1[i];
	}
	for (i = 0; i < len2; ++i)
	{
		out[len1 + i] = s2[i];
	}
	out[len1 + len2] = 0;

	return (out);
}
