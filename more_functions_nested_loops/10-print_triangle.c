#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: Size of the triangle
*/
void print_triangle(int size)
{
	int i, j;

	if (c <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; ++i)
	{
		for (j = 0; j < size; ++j)
		{
			if (j >= size - i - 1)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
