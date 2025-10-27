#include "main.h"

/**
 * _isupper - Checks if character c is an uppercase letter
 * @c: The character to check
 * Return: 0 if c is not a letter of if it is not uppercase, nonzero otherwise
*/
int _isupper(int c)
{
	unsigned char cc;
	
	if(c == -1)
		return 0;
	
	cc = (unsigned char)c;
	if(cc >= 65 && cc <= 90)
		return 1;
	return 0;

}
