#include "main.h"

/**
 * _isdigit - Checks if a character is a digit
 * @c: The character to check
 * Return: True if the character is a digit, false otherwise
*/
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * -atoi - Converts a cstring to an integer
 * @s: The cstring to convert
 * Return: The number extracted from s.
*/
int _atoi(char *s)
{
	int n = 0;
	int i;
	
	for (i = 0; s[i] != 0; ++i)
	{	
		if (!isdigit(s[i]))
		{
			if(s[i] == '-')
				n *= -1;
			if (i)
				break;
			continue;
		}
		else
		{
			n *= 10;
			n += s[i] - '0';
		}
	}
	return (n);
}
