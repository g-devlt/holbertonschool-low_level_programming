#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Computes the length of a cstring
 * @str: The cstring to compute
 * Return: The length of the cstring
*/
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != 0)
		++i;

	return (i);
}


/**
 * _strdup - Copies a cstring
 * @str: The cstring to copy
 * Return: A buffer with a copy of the cstring including the null terminator
*/
char *_strdup(char *str)
{
	int i;
	int len;
	char *buf;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);
	buf = malloc(len + 1); /*Adjust for null terminator*/

	if (buf == NULL)
		return (NULL);

	for (i = 0; i < len + 1; ++i)
	{
		buf[i] = str[i];
	}
	return (buf);
}

/**
 * new_dog - Creates and initializes a new dog instance
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 * Return: The newly created dog instance
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = _strdup(name);
	if (dog->name == NULL)
		return (NULL);

	dog->owner = _strdup(owner);
	if (dog->owner == NULL)
		return (NULL);

	dog->age = age;

	return (dog);
}
