#include "search_algos.h"


/**
 * print_diff - function to print at each check
 * @a: idx before jumping
 * @b: idx after jumping
 */
void print_diff(size_t a, size_t b)
{
	printf("Value found between indexes [%ld] and [%ld]\n", a, b);
}

/**
 * jump_search - searchs for a value in a sorted array of int
 * @array: the array to search
 * @size: the number of elements in the array
 * @value: the integer to look for
 * Return: index found in or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t idx, a, jumper, pre;
	if (array == NULL || size == 0)
		return (-1);

	jumper = sqrt(size);
	a = 0;
	pre = 0;
	idx = 0;

	do {
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);

		if (array[idx] == value)
			return (idx);
		a++;
		pre = idx;
		idx = a * jumper;
	} while (idx < size && array[idx] < value);

	print_diff(pre, idx);

	for (; pre <= idx && pre < size; pre++)
	{
		printf("Value checked array[%ld] = [%d]\n", pre, array[pre]);
		if (array[pre] == value)
			return (pre);
	}
	return (-1);
}

