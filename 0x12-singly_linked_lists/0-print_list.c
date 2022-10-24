#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints out all elements of a list
 * @h: pointer to list head
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int i;
	unsigned long int j = 0;

	while (h != NULL)
	{

		if (h->str == NULL)
		{
			printf("[0] ");
			printf("(nil)");
		}
		else
		{
			printf("[%d] ", h->len);

			for (i = 0; i < h->len; i++)
			{
				printf("%c", h->str[i]);
			}
		}

		printf("\n");
		h = h->next;
		j++;
	}

	return (j);
}
