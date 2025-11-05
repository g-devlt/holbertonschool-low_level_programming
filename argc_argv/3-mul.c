#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two integers passed as cmdline arguments
 * @argc: Argument count
 * @argv: Argument values
 * Return: 0 on success, 1 on error
*/
int main(int argc, char **argv)
{
	long a, b;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	a = strtol(argv[1], NULL, 10);
	b = strtol(argv[2], NULL, 10);

	printf("%ld\n", a * b);
	return (0);
}
