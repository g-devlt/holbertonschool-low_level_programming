#include <stdio.h>

/**
 * main - Prints every arguments from the command line
 * @argc: The argument count
 * @argv: The argument values
 * Return: Always 0
*/
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; ++i)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
