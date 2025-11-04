#include "main.h"

/**
 * _puts_recursion - Puts function with recursion
 * @s: The cstring to print to stdout
*/
void _puts_recursion(char *s)
{
	if (*s == 0)
		return;
	_putchar(*s);
	_puts_recursion(s + 1);
}
