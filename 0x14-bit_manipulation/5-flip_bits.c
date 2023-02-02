#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you will need to flip
 * to get one number from another
 * @n: first number
 * @m: second number
 * Return: the number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor;
	unsigned int count;

	count = 0;
	xor = (n ^ m);

	while (xor)
	{
		count = count + (xor & 1);
		xor = xor >> 1;
	}
	return (count);
}
