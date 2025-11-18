#include "function_pointers.h"

/**
 * int_index - Gets the index of the first element fulfilling cmp condition
 * @array: The array of elements
 * @size: The size of the array
 * @cmp: The comparator function
 * Return: The index of the first element fulfilling cmp condition
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || size <= 0)
		return (-1);

	for (i = 0; i < size; ++i)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}

