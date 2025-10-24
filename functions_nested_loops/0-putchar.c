#include "main.h"


/**
 * main - Prints '_putchar\n'
 * Return: 0 on success
*/
int main(void)
{
	const char *str;
	int i;

	str = "_putchar";
	for (i = 0; str[i] != 0; ++i)
	{
		_putchar(str[i]);
	}

	return (0);
}

