#include "main.h"
#include <stdlib.h>

int *array_range(int min, int max)
{
	unsigned int len;
	int *buf;
	int i;

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
