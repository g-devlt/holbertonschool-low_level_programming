#include <stdio.h>

/**
 * main - Prints every combination of 2 digits
 * Return: 0 on success
*/
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; ++a)
	{
		if (a != '0')
		{
			putchar(',');
			putchar(' ');
		}
		putchar(a);
	}
	putchar('\n');

	return (0);
}
