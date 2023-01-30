#include "hash_tables.h"

/**
 * key_index - computes the index of a key
 * @key: key
 * @size: size of the array of the hash table
 *
 * Return: index of the array in which to store the key/value pair
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hash;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
