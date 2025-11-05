#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds every arguments (must be integers) and prints the sum
 * @argc: Argument count
 * @argv: Argument values
 * Return: 1 on error, 0 on success
*/
int main(int argc, char **argv)
{
	int sum = 0;
	int i = 1;
	char *end;

	for (; i < argc; ++i)
	{
		sum += strtol(argv[i], &end, 10);
		if (*end != 0)
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);

	return (0);
}
