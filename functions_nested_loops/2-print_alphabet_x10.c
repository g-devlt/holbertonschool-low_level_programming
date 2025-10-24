#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
*/
void print_alphabet_x10(void)
{
	const char *str = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	for (i = 0; i < 10; ++i)
	{
		int j;

		for (j = 0; str[j] != 0; ++j)
		{
			_putchar(str[j]);
		}
	}
}
