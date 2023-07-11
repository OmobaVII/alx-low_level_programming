#include "search_algos.h"

/**
 * print_bin - a function used to print the array being searched
 * everytime it changes
 * @array: the array being searched
 * @low: the first index of the array
 * @high: the last index of the array
 */

void print_bin(int *array, size_t low, size_t high)
{
	unsigned int a = 0;

	printf("Searching in array: ");
	for (a = low; a <= high; a++)
	{
		if (a != high)
			printf("%d ", array[a]);
		else
			printf("%d\n", array[a]);
	}
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: a pointer to the first element of the array
 * @size: the number of elements in the array
 * @value: the value to search for in the array
 * Return: the index which the value is found
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned int mid, low, high;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	low = 0;
	high = size - 1;
	mid = (low + high) / 2;

	while (1)
	{
		print_bin(array, low, high);
		mid = (low + high) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		if (mid == 0 || mid == size - 1)
			return (-1);

		if (array[mid] > value)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	return (-1);
}

