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
	char *sname = name;
	char *sowner = owner;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newdog->name = sname;
	newdog->age = age;
	newdog->owner = sowner;

	return (newdog);
}
