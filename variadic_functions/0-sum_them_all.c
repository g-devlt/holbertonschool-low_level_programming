#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sums all the arguments passed to the function
 * @n: The number of variadic arguments
 * @...: The arguments, should be integers
 * Return: The sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	unsigned int i;
	int sum;

	va_start(vl, n);

	sum = 0;
	for (i = 0; i < n; ++i)
	{
		sum += va_arg(vl, int);
	}
	va_end(vl);

	return (sum);
}
