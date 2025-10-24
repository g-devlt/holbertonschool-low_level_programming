#include "main.h"


/**
 * main - Prints '_putchar\n'
 * Return: 0 on success
*/
int main(void)
{
	const char *str;
	int i;

	str = "_putchar\n";
	for (i = 9; i < 10; ++i)
	{
		_putchar(str[i]);
	}

	return (0);
}

