#include "main.h"

/**
 * print_most_numbers - Prints alomost every digit followed by a new line
*/
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; ++c)
	{
		if (c == '2' || c == '4')
			continue;
		_putchar(c);
	}
	_putchar('\n');
}
