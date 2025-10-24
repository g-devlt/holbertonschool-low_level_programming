#include "main.h"

/**
 * print_sign - Prints the sign of an integer or 0
 * @n: The number to test
 * Return: 1 if positive, -1 if negative, 0 if zero
*/
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

