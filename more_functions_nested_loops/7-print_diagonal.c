#include "main.h"

/**
 * print_diagonal - Prints a diagonal line in terminal
 * @n: Length of the line
*/
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < i; ++j)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (i == 0)
		_putchar('\n');
}
