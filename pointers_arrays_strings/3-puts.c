#include "main.h"

/**
 * _puts - Prints a cstring to stdout
 * @str: The cstring to print
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		_putchar(str[i++]);
	}
	_putchar('\n');
}
