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
	/* if no collision; save key value pair at index */
	if (ht->array[index] == NULL)
	{
		ht->array[index] = newnode;
	}
	/* if theres a collision, stack new node at the beginning of the list */
	else
	{
		/* save node at index to temp */
		temp = ht->array[index];
		/* assign newnode to index */
		ht->array[index] = newnode;
		/* assign temp to newnode next */
		newnode->next = temp;
	}
	return (1);
}
