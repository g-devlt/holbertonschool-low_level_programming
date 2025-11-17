#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Adds two integers
 * @a: First number
 * @b: Second number
 * Return: The sum of a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two integers
 * @a: First number
 * @b: Second number
 * Return: The difference of a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers
 * @a: First number
 * @b: Second number
 * Return: The product of a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides a by b
 * @a: First number
 * @b: Second number
 * Return: The quotient of a by b
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Gets the rest of the division of a by b
 * @a: First number
 * @b: Second number
 * Return: The rest of the division of a by b
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
