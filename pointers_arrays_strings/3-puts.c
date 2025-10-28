#include "main.h"

/**
 * _puts - Prints a cstring to stdout
 * @str: The cstring to print
*/
void _puts(char *str)
{
	int i;

	while (str[i] != 0)
	{
		_putchar(str[i++]);
	}
}
