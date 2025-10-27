#include "main.h"

/**
 * _isdigit - Tests a character.
 * @c: The character to test
 * Return: 0 if c is not a digit, non-zero otherwise
*/
int _isdigit(int c)
{
	unsigned char cc;

	if (c == -1)
		return (0);

	cc = (unsigned char)c;
	if (cc >= '0' && cc <= '9')
		return (1);
	return (0);
}

