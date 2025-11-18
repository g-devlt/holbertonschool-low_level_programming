#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Uses arguments to compute a result.
 * @argc: Arg count
 * @argv: Arg values
 * Return: 0 on success
*/
int main(int argc, char **argv)
{
	int a, b, res;

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	res = get_op_func(argv[2])(a, b);

	printf("%d\n", res);

	return (0);
}

