#include "search_algos.h"

/**
 * print_index - function to print index for each check
 * @array: array
 * @idx: index checked
 */

void print_index(int *array, size_t idx)
{
	printf("Value checked arrray[%ld] = [%d]\n", idx, array[idx]);
}

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
	size_t jumper = sqrt(size);
	size_t a = 0, b = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (b <= size)
	{
		if (b != 0)
			print_index(array, a);
		if (array[b] >= value)
		{
			print_diff(a, b);
			while (a <= b)
			{
				print_index(array, a);
				if (array[a] == value)
					return (a);
				a++;
			}
			return (-1);
		}
		if ((b + (2 * jumper)) > size)
		{
			print_index(array, b);
			print_diff(b, b + jumper);
			while (b < size)
			{
				print_index(array, b);
				if (array[b] == value)
					return (b);
				b++;
			}
			return (-1);
		}
		a = b;
		b += jumper;
	}
	return (-1);
}
