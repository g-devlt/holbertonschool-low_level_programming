#include "main.h"

/**
 * jack_bauer - Prints hh:mm for every minute in a day
*/
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; ++i)
	{
		for (j = 0; j < 60; ++j)
		{
			_putchar(i / 10);
			_putchar(i % 10);
			_putchar(':');
			_putchar(j / 10);
			_putchar(j % 10);
			_putchar('\n');
		}
	}
}

