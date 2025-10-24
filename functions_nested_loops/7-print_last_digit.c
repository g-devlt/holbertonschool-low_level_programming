#include "main.h"

/**
 * print_last_digit - Prints and returns the last digit of n
 * @n: The number to handle
 * Return: The last digit of n
*/
int print_last_digit(int n)
{
	char d = n % 10;

	if (d < 0)
		d = -d;
	_putchar('0' + d);
	return (d);
}
