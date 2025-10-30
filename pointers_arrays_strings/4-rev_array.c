#include "main.h"

/**
 * reverse_array - Flips an array
 * @a: The array of length n to flip
 * @n: The size of the array a.
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	int hl =  n / 2;

	for (; i < hl; ++i)
	{
		int *f = a + i;
		int *s = a + (n - 1) - i;

		int tmp = *f;
		*f = *s;
		*s = tmp;
	}
}
