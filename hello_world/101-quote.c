#include <unistd.h>

/**
 * main - Prints to stderr without forbidden funcstions
 * Return: Returns 1
 */
int main(void)
{
	const char *out =
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(2, out, 58);
	return (1);
}
