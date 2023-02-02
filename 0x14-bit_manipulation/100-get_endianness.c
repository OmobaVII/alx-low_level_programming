#include "main.h"

/**
 * get_endianness - a function that check the endianness
 * Return: 0 if big endian and 1 if little endian
 */

int get_endianness(void)
{
	int a;
	int *ptr;

	a = 1;
	ptr = &a;
	if (*ptr == 1)
		return (1);
	return (0);
}
