#include <stdio.h>

/**
 * main - Prints every combination of 3 different digits
 * Return: 0 on success
*/
int main(void)
{
	int a;
	int b;
	int c;

	for (a = '0'; a <= '9' - 2; ++a)
	{
		for (b = a + 1; b <= '9' - 1; ++b)
		{
			for (c = b + 1; c <= '9'; ++c)
			{
				if (!(a == '0' && b == '1' && c == '2'))
				{
					putchar(',');
					putchar(' ');
				}
				putchar(a);
				putchar(b);
				putchar(c);
			}
		}
	}
	putchar('\n');
	return (0);
}
