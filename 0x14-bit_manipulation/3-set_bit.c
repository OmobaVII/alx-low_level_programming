#include "main.h"

/**
 * set_bit - a function that sets the bit at index
 * @n: the number to be set
 * @index: the point to set
 * Return: 1 if success -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(int) * 8)
	{
		return (-1);
	}
	*n = (*n | (1 << index));
	return (1);
}
