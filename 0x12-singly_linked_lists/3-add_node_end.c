#include "lists.h"

/**
 * add_node_end - adds node at the end of a list
 * @head: head- pointer to list
 * @str: string member in element
 * Return: pointer to new element, NULL if fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;
	size_t i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (i = 0; str[i]; i++)
	{}

	new->len = i;
	new->next = NULL;

	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = new;
	}

	return (*head);
}
