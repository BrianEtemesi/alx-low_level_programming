#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of hash table
 *
 * Return: pointer to newly created table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	/* create table */
	hash_table_t *table = malloc(sizeof(hash_table_t));

	/* check if malloc was succesfull*/
	if (table == NULL)
		return (NULL);

	table->size = size;

	/**
	 * allocate memory to table array - array of pointers
	 * pointing to the items in the table. The items are
	 * denoted by struct hash_node_t.
	 *
	 * Note the use of calloc - specifically allocates
	 * memory to an array.
	 * Note sizeof pointer to node and not node itself
	 */
	table->array = calloc(size, sizeof(hash_node_t *));
	if (table->array == NULL)
		return (NULL);

	return (table);
}
