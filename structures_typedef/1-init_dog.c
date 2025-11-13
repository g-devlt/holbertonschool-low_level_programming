#include "dog.h"


/**
 * init_dog - Initializes a dog struct
 * @d: Dog struct to initialize
 * @name: Name of the dog
 * @age: Age of the dog.
 * @owner: Name of the owner of the dog
 *
 *
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
