#include <stdio.h>

/**
 * main - Prints the alphabet, lowercase and uppercase
 * Return: Returns 0 on success
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	}

	for (c = 'A'; c <= 'Z'; ++c)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}

