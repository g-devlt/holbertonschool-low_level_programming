#include "main.h"

/**
 * is_prime_rec - Calculates with recursion wether n is prime or not
 * @n: The integer to compute.
 * @c: The integer to compare against n.
 * Return: 1 if n is prime, 0 otherwise
*/
int is_prime_rec(int n, int c)
{
	if (n == c)
		return (1);
	if (n % c != 0)
		return (is_prime_rec(n, c + 1));
	else
		return (0);
}

/**
 * is_prime_number - Calculates wether a number given is a prime number
 * @n: The number to compute
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_rec(n, 2));
}

