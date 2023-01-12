#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: Minimum value of integer
 * @max: Maximum value of integer
 * Return: the newly created array
 */

int *array_range(int min, int max)
{
	int *array;
	int a;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	for (a = 0; min <= max; a++)
		array[a] = min++;
	return (array);
}
