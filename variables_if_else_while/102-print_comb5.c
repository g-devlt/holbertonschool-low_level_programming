#include <stdio.h>

/**
 * main - Prints every distinct combinations of two two-digits numbers
 * Return: Returns 0 on success
*/
int main(void)
{
	int a, b;

	for (a = 0; a < 100 - 1; ++a)
	{
		for (b = a + 1; b < 100; ++b)
		{
			if (!(a == 0 && b == 1))
			{
				putchar(',');
				putchar(' ');
			}

			putchar('0' + a / 10);
			putchar('0' + (a % 10));
			putchar(' ');
			putchar('0' + b / 10);
			putchar('0' + (b % 10));
		}
	}
	putchar('\n');

	return (0);
}

