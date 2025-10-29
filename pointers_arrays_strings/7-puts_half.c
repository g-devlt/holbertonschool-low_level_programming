#include "main.h"

/**
 * _strlen - Computes the length of a cstring
 * @str: The cstring to compute
 * Return: The length of the string
*/
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != 0)
		++i;
	return (i);
}

/**
 * puts_half - Prints half of the string provided
 * @str: The cstring to print half of
*/
void puts_half(char *str)
{
	int len = _strlen(str);
	int i = len - (len / 2);

	for (; i < len; ++i)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
