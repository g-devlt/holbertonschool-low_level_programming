#include "main.h"

/**
 * _abs - Returns the absolute value of n
 * @n: The value to handle
 * Return: The absolute value of n
*/
int _abs(int n)
{
	if (n < 0)
		return ~n;
	return n;
}
