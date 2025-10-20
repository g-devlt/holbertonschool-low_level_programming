#include <stdio.h>

/**
 * main - Prints the sizes of various data types
 * Return: Returns 0 on success.
*/
int main(void)
{
	printf("Size of a char: %lld byte(s)", sizeof(char));
	printf("Size of an int: %lld byte(s)", sizeof(int));
	printf("Size of a long int: %lld byte(s)", sizeof(long int));
	printf("Size of a long long int: %lld byte(s)", sizeof(long long int));
	printf("Size of a float: %lld byte(s)", sizeof(float));
	return (0);
}
