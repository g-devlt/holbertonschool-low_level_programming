#include "main.h"

/**
 * string_toupper - Makes a string uppercase
 * @str: The cstring to make uppercase
 * Return: str.
*/
char *string_toupper(char *str)
{
	int i = 0;

	while(str[i] != 0)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] += 'A' - 'a';
		}
	}
	return str;
}
