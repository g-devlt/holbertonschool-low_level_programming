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
					if (a == '0' && b == '0' && c == '0' && d == '0')
						continue;
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					putchar(',');
				}
			}
		}
	}


	putchar('\n');

	return (0);
}

