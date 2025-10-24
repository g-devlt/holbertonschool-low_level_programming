#include "main.h"

/**
 * _islower - Check if an ascii character is lowercase
 * @c: The character to check
 * Return - non-zero if c is lowercase, zero if not.
*/
int _islower(int c)
{
	unsigned char b;

	if (c == -1)
		return (0);
	if (c > 255)
		return (0);

	b = (unsigned char)c;

	if (b >= 97 && b <= 122)
		return (1);
	return (0);
}
