#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - a function that executes a function
 * given as a parameter of an array
 * @array: array as parameter
 * @size: size of the array
 * @action: the function we would be using
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int a = 0;

	if (array != NULL && action != NULL)
	{
		for (a = 0; a < size; a++)
		{
			action(array[a]);
		}
	}
}
