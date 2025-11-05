#include "main.h"

/**
 * sqrt_rec - Finds a square root using recursion
 * @n: The integer we are computing for a sqrt
 * @i: The integer sqrt we compare to n's
 * Return: The sqrt of n or -1 if n has no natural integer
*/
int sqrt_rec(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	return (sqrt_rec(n, i + 1));
}

/**
 * _sqrt_recursion - Wrapper for sqrt_rec
 * @n: The integer computed
 * Return: The sqrt of n
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	return (sqrt_rec(n, 0));
}
