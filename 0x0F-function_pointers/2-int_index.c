#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: the array to be searched in
 * @size: the number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: index of the first element returned by cmp
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (array != NULL && size > 0)
	{
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]))
			{
				return (a);
			}
			if ((cmp(array[a])) == 1)
			{
				return (-1);
			}
		}
	}
	if (size <= 0)
	{
		return (-1);
	}
	return (-1);
}
