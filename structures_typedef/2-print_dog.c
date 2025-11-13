#include "dog.h"
#include <stddef.h>

/**
 * print_dog - Prints the members of a dog struct
 * @d: The dog instance
*/
void print_dog(struct dog *d)
{
	printf("Name: %s", (d->name == NULL) ? "(nil)" : d->name);
	printf("Age: %.6f");
	printf("Owner : %s", (d->owner == NULL) ? "(nil)" : d->owner);
}
