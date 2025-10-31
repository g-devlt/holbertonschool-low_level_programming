#include "main.h"

/**
 * _abs - Gets the absolute value of an int
 * @n: The integer
 * Return: The absolute value of n
*/
int _abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

/**
 * print_rec - recursively prints a number
 * @n: The number to print or a part of the number
*/
void print_rec(int n)
{
	int nn, d;

	if (n == 0)
		return;

	nn = _abs(n / 10);
	d = _abs(n % 10);

	print_rec(nn);
	_putchar('0' + d);
}

/**
 * print_number - Prints an integer to stdout
 * @n: The number to print
*/
void print_number(int n)
{

	if (n < 0)
	{
		_putchar('-');
	}
	print_rec(n);
}
