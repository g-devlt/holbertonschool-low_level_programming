#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array populated by ints from min to max
 * @min: The minimum
 * @max: The maximum
 * Return: The array populated
*/
int *array_range(int min, int max)
{
	unsigned int len;
	int *buf;
	unsigned int i;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	buf = malloc(sizeof(int) * len);

	for (i = 0; i <= len; ++i)
	{
		buf[i] = min + i;
	}

	return (buf);
}
