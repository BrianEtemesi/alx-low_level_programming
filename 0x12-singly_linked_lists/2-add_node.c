#include "lists.h"
#include <stdlib.h>

/**
 * add_node - adds a new node at the begining of a list
 * @head: pointer to pointer of list
 * @str: string member of new element
 * Return: address of new element, NULL if fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (i = 0; str[i]; i++)
	{}

	new->len = i;
	new->next = *head;

	*head = new;

	return (*head);
}
