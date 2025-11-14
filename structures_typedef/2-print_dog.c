#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog - Prints the members of a dog struct
 * @d: The dog instance
*/
void print_dog(struct dog *d)
{
	if (!d)
		return;
	printf("Name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner : %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
}
