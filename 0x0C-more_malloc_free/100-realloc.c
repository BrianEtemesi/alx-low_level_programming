#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory using malloc and free
 * @ptr: pointer to previously allocated memory
 * @old_size: old size
 * @new_size: new size
 * Return: pointer to reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
