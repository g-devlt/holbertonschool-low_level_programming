#include "main.h"

/**
 * puts2 - Prints every other character of a cstring
 * @str: The cstring to print
*/
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != 0; ++i)
	{
		if (i % 2 == 1)
			continue;
		_putchar(str[i]);
	}
	_putchar('\n');
}
