#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates new dog of struct dog
 * @name: dog's name
 * @age: dogs's age
 * @owner: owner of the dog
 * Return: pointer to address of new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int i, j, k;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL || !(name) || !(owner))
	{
		free(newdog);
		return (NULL);
	}

	for (k = 0; name[k]; k++)
		;

	for (j = 0; owner[j]; j++)
		;

	newdog->name = malloc(k + 1);
	newdog->owner = malloc(j + 1);

	if (!(newdog->name) || !(newdog->owner))
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}

	for (i = 0; i < k; i++)
		newdog->name[i] = name[i];
	newdog->name[i] = '\0';

	newdog->age = age;

	for (i = 0; i < j; i++)
		newdog->owner[i] = owner[i];
	newdog->owner[i] = '\0';

	return (newdog);
}
