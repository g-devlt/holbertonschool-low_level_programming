#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints variadic arguments based on format
 * @format: Specify how to print Arguments
 * @...: The arguments to format and print
*/
void print_all(const char * const format, ...)
{
	char *s;

	unsigned int i;
	va_list ap;

	va_start(ap, format);

	i = 0;
	while (format[i] != 0)
	{
		switch(format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
		{
			s = va_arg(ap, char *);
			
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", va_arg(ap, char *));

			break;
		}
		default:
			break;
		}
		++i;
	}
	va_end(ap);
	printf("\n");
}
