#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: the number
 * @index: the point to check the bit there
 * Return: the value of the bit at the index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(int) * 8)
		return (-1);
	return (n & (1 << index)) != 0;
}
