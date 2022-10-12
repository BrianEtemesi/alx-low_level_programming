#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes struct dog
 * @d: instance of a dog
 * @name: name of the dog
 * @age: age
 * @owner: dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
