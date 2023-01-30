#include "hash_tables.h"
/**
 * hash_table_set - adds element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with the key
 *
 * Return: 1 for success, 0 if func fails
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int size, index;
	hash_node_t *newnode, *temp;
	char *value1 = (char *)value;

	/* check if key is an empty string */
	if (strlen(key) == 0)
		exit(0);
	/* create new node and assign key and value */
	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		exit(0);
	newnode->key = (char *)key;
	newnode->value = value1;
	newnode->next = NULL;
	/* generate hash key/index. This is based on the array size */
	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	/* go to index of the array and check for collision */
	if (ht->array[index] == NULL)
	{
		ht->array[index] = newnode;
	}
	else
	{
		temp = ht->array[index];
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
			{
				temp->value = value1;
				return (1);
			}
			temp = temp->next;
		}

		temp = ht->array[index];
		ht->array[index] = newnode;
		newnode->next = temp;
	}
	return (1);
}
