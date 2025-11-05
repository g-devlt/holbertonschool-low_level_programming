#include "main.h"

/**
 * _pow_recursion - Uses recursion to compute x to the power of y
 * @x: The integer to raise
 * @y: The power to raise x.
 * Return: x to the power of y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (_pow_recursion(x, y - 1) * x);
}

