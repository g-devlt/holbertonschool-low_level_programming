#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2d array of int
 * @width: The width of the array
 * @height: The height of the array
 * Return: A 2d array of integers
*/
int **alloc_grid(int width, int height)
{
	int **buf;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	buf = malloc(sizeof(int *) * height);
	if (!buf)
		return (NULL);

	for (i = 0; i < height; ++i)
	{
		buf[i] = malloc(sizeof(int) * width);
		if (!buf[i])
			return (NULL);
		for (j = 0; j < width; ++j)
		{
			buf[i][j] = 0;
		}
	}

	return (buf);
}

