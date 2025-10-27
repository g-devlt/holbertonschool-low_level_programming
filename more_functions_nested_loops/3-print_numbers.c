#include "main.h"

/**
 * print_numbers - Prints every digits followed by a new line
*/
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; ++c)
	{
		_putchar(c);
	}
	_putchar('\n');
}
