#include "search_algos.h"

/**
 * interpolation_search - a function that searches for a value
 * is a sorted array of integers
 * @array: the array to search
 * @size: the number of elemets in the array
 * @value: the value to search for
 * Return: the index the value is found or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos, diff;

	if (array == NULL || size == 0)
		return (-1);
	low = 0;
	high = size - 1;

	while (size != 0)
	{
		diff = array[high] - array[low];
		pos = low + ((double)(high - low) / diff * (value - array[low]));
		printf("Value checked array[%ld]", pos);
		if (pos >= size)
		{
			printf(" is out of range\n");
			return (-1);
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}

		if (array[pos] == value)
			return (pos);
		if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;

		if (low == high)
			break;
	}
	return (-1);
}
