#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit at an index to 0.
 * @n: the number to be set
 * @index the location to be set
 * Return: 1 if success and -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(int) * 8)
		return (-1);
	*n = *n & (~(1UL << index));
	return (1);
}
