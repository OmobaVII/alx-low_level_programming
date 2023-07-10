#include "search_algos.h"

/**
 * linear_search - a function that searchs for a value in an
 * array of integers
 * @array: the array of integers
 * @size: the number of elements in the array
 * @value: the value to search from
 * Return: the first index where the value is found
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int n;

	if (array == NULL)
	{
		return (-1);
	}

	for (n = 0; n < size; n++)
	{
		printf("Value checked array[%d] = [%d]\n", n, array[n]);
		if (array[n] == value)
		{
			return (n);
		}
	}
	return (-1);
}
