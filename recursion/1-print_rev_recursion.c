#include "main.h"

/**
 * _print_rev_recursion - Puts function with recursion
 * @s: The cstring to print in reverse to stdout
*/
void _print_rev_recursion(char *s)
{
	if (*s == 0)
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
