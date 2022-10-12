#include <stdlib.h>
#include "dog.h"

/**
 * alloc - allocates memory
 * @d: instance
 * Return: pointer to address of allocated memory
 */

void *alloc(struct dog *d)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	return (d);
}

/**
 * init_dog - initializes struct dog
 * @d: instance of a dog
 * @name: name of the dog
 * @age: age
 * @owner: dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = alloc(d);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
