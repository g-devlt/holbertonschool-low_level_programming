#include "main.h"

/**
 * _strlen - Calculates the length of a cstring
 * @str: The cstring
 * Return: The length of the cstring
*/
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != 0)
		++i;
	return (i);
}

/**
 * print_rev - Prints a cstring in reverse order
 * @s: The cstring to print
*/
void print_rev(char *s)
{
	int i = _strlen(s);
	
	while (i > 0)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

