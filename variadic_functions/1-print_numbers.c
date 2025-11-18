#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Print every integer passed as variable arguments
 * @separator: The separator inbetween every integers
 * @n: The number of arguments passed (variable arguments)
 * @...: The numbers to print
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int i;

	va_start(vl, n);

	for (i = 0; i < n; ++i)
	{
		if (i && separator)
		{
			printf("%s", separator);
		}
		printf("%d", va_arg(vl, int));
	}
	va_end(vl);
	printf("\n");
}
