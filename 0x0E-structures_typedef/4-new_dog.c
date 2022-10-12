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

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;

	return (newdog);
}
