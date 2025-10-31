#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <assert.h>

#define GOAL 0xad4

/**
 * random_char - Generates a random char from '!' to '~' except '$'
 * Return: The generated character
*/
char random_char(void)
{
	char c = 0;

	do {
		c = rand() % 95 + 33;
	} while (c == '$');

	return (c);
}

/**
 * main - A simple keygen for 101-crackme
 * Return: 0 on success
*/
int main(void)
{
	char c; /*random character declaration*/
	char c1; /*second random character*/
	int current_chksm = 0; /*Keeps track of the current value of checksum*/

	srand(time(NULL)); /*Sets PRNG seed*/

	while (current_chksm < GOAL)
	{
		if (GOAL - current_chksm <= 2 * 126)
		{
			c = random_char();
			c1 = (GOAL - current_chksm) - c;
			while (c1 < ' ')
			{
				c = random_char();
				c1 = (GOAL - current_chksm) - c;
			}
		}
		else
		{
			c = random_char();
			c1 = random_char();
		}
		current_chksm += c + c1;

		putchar(c);
		putchar(c1);
	}

	assert(current_chksm == GOAL);

	return (0);
}

