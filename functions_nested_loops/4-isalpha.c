#include "main.h"

/**
 * _isalpha - Checks if a character is a letter
 * @c: The character to check
 * Return: 0 if c is not a letter, non-zero otherwise
*/
int _isalpha(int c)
{
	unsigned char b;

	if (c == 0 || c == -1)
		return (0);

	b = (unsigned char)c;

	if ((b >= 65 && b <= 90) || (b >= 97 && b <= 122))
		return (1);
	return (0);
}
