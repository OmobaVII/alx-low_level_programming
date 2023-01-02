#include "main.h"

/**
 * _memset - a function used to fill a memory with a constant byte.
 * @s: the pointer to the memory
 * @b: the new memory
 * @n: the number of memory to be filled
 * Return: a pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
