#include <stdio.h>

/**
 * main - Prints distinct combinations of two digits
 * Return: 0 on success
*/
int main(void)
{
	int a;
	int b;

	for (a = '0'; a <= '9' - 1; ++a)
	{
		for (b = a + 1; b <= '9'; ++b)
		{
			if (!(a == '0' && b == '1'))
			{
				putchar(',');
				putchar(' ');
			}
			putchar(a);
			putchar(b);
		}
	}
	putchar('\n');

	return (0);
}
