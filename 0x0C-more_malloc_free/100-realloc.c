#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and frr
 * @ptr: the memory block to be reallocated
 * @old_size: the current size of the memory block
 * @new_size: the size of the new memory block
 * Return: the reallocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *reallocated;

	if (new_size == 0)
	{
		free (ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	reallocated = malloc(new_size);
	if (reallocated == NULL)
	{
		return (NULL);
	}
	memcpy(reallocated, ptr, old_size);
	free(ptr);
	return (reallocated);
}
