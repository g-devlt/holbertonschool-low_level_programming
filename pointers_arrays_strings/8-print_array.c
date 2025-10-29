#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of integer array a
 * @a: The integer array
 * @n: The number of elements to print
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		printf("%d", a[i]);
	}
}
