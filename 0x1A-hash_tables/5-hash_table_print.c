#include "hash_tables.h"

/**
 * hash_table_print - prints the keys and values of the hash table
 *
 * @ht: pointer to the hash table
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	char *delimiter;

	if (ht == NULL)
		return;

	printf("{");
	delimiter = "";

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("%s'%s': '%s'", delimiter, temp->key, temp->value);
			delimiter = ", ";
			temp = temp->next;
		}
	}
	printf("}\n");
}
