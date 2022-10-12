#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dog instances from struct dog
 * @d: dog instance
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
