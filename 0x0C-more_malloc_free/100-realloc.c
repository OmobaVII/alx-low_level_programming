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
	void *reallocated;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		reallocated = malloc(new_size);
		free(ptr);
		return (reallocated);
	}
	if (ptr == NULL)
	{
		reallocated = malloc(new_size);
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	return (ptr);
}
