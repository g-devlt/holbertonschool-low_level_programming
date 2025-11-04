#include "main.h"

/**
 * factorial - Calculates the factorial of n
 * @n: The number to compute
 * Return: The factorial of n or -1 if n is negative.
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1) /*0 or 1*/
		return (1);

	return (n * factorial(n - 1));
}

