#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that assigns dynamic memory allocation
 * @b: test value
 * Return: Void
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
