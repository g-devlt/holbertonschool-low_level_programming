#include <stdio.h>

/**
 * main - Prints the whole alphabet using putchar
 * Return: Returns 0 on success
 *
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
