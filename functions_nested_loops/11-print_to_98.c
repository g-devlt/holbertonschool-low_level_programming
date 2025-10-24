#include <stdlib.h>

/**
 * print_to_98 - Prints every integer from n to 98
 * @n: The start of the iteration
*/
void print_to_98(int n)
{
	int i = n;

	if (n > 98)
	{
		for (; i >= 98; --i)
		{
			printf("%d", i);
		}
	}
	else
	{
		for(; i <= 98; --i)
		{
			printf("%d", i);
		}
	}
}
