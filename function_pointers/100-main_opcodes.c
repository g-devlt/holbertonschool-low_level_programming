#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints bytes of the main function
 * @argc: Argument count
 * @argv: Argument values
 * Return: 0 on success.
*/
int main(int argc, char **argv)
{
	int i;
	int bytes = 0;

	char *m = (char *)&main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; ++i)
	{
		if (i)
			printf(" ");
		printf("%02hhx", *(m + i));
	}
	printf("\n");

	return (0);
}
