#include "main.h"

/**/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1) /*0 or 1*/
		return (1);
	

	return (n * factorial(n - 1));
}

