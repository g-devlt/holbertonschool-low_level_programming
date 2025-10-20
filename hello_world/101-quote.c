#include <stdio.h>

/**
 * main - Prints to stderr without forbidden funcstions
 * Return: Returns 1
 */
int main(void)
{
	const char *out =
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fwrite(out, sizeof(out), 1, stderr);
	return (1);
}
