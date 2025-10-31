#include "main.h"

/**
 * cap_string - Capitalize every word of a string
 * @str: The cstring to capitalize
 * Return: The capitalized string.
*/
char *cap_string(char *str)
{
	int i = 0;
	int new_word = 1;

	while (str[i] != 0)
	{
		switch (str[i])
		{
		case ' ':
		case '\t':
		case '\n':
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
			new_word = 1;
			break;

		default:
			if (new_word)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] += 'A' - 'a';
				new_word = 0;
			}
			break;
		}
	}
	return (str);
}

