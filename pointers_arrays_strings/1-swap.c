#include "main.h"

/**
 * swap_int - Swaps the value of two ints
 * @a: First pointer
 * @b: Second pointer
*/
void swap_int(int *a, int *b)
{
	int tmp = *b;
	*b = *a;
	*a = tmp;
}

