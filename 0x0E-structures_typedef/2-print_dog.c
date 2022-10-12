#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints struct dog
 * @d: an instance of struct dog
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("nil\n");
		printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("nil\n");
		printf("Owner: %s\n", d->owner);
	}
}
