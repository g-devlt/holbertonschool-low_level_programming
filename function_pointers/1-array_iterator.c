#include "function_pointers.h"

/**
 * array_iterator - Iterates through an array and does an action on every item
 * @array: An array of integers
 * @size: The number of element in the arrays
 * @action: The function to execute on every item
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; ++i)
	{
		action(array[i]);
	}
}
