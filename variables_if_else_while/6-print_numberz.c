#include <stdio.h>

/**
 * main - Prints all the digits
 * Return: Returns 0 on success
*/
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; ++i)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
