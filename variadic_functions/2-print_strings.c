#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Print every strings passed as variable arguments
 * @separator: The separator inbetween every strings
 * @n: The number of arguments passed (variable arguments)
 * @...: The strings to print
*/
void print_strings(const char *separator, const unsigned int n, ...)
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
		printf("%s", va_arg(vl, char *));
	}
	va_end(vl);
	printf("\n");
}
