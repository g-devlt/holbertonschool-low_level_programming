#include <stdlib.h>

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
