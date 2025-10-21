#include <stdio.h>

/**
 * main - Prints the whole alphabet except q or e using putchar
 * Return: Returns 0 on success
 *
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c == 'e' || c == 'q')
			continue;
		putchar(c);
	}
	putchar('\n');

	return (0);
}
