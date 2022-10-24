#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node - adds a new node at the begining of a list
 * @head: pointer to pointer of list
 * @str: string member of new element
 * Return: address of new element, NULL if fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned long int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (i = 0; new->str[i]; i++)
	{}

	new->len = i;
	new->next = *head;

	*head = new;

	return (*head);
}
