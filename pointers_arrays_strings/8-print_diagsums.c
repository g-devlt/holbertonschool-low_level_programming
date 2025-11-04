#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the diagonals in a square matrix
 * @a: The matrix,
 * @size: The length of the matrix
*/
void print_diagsums(int *a, int size)
{
	int i, diag;

	diag = 0;

	for (i = 0; i < size; ++i)
	{
		diag += a[i + size * i];
	}
	printf("%d, ", diag);

	diag = 0;
	for (i = 0; i < size; ++i)
	{
		diag += a[size - 1 - i + size * i];
	}
	printf("%d\n", diag);
}

