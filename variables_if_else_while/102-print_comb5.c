#include <stdio.h>

/**
 * main - Prints every distinct combinations of two two-digits numbers
 * Return: Returns 0 on success
*/
int main(void)
{
	int a, b, c, d;

	for (a = '0'; a <= '9'; ++a)
	{
		for (b = '0'; b <= '9' - 1; ++b)
		{
			for (c = a; c <= '9'; ++c)
			{
				for (d = b; d <= '9'; ++d)
				{
					if (a == c && b == d)
						continue;

					if (!(a == '0' && b == '0' && c == '0' && d == '1'))
					{
						putchar(',');
						putchar(' ');
					}

					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
				}
			}
		}
	}


	putchar('\n');

	return (0);
}

