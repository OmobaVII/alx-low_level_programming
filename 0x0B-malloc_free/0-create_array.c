#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of the array
 * @c: the character to initialize it with
 * Return: Success (0)
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int a;

	a = 0;

	p = malloc(size);

	if (size == 0)
	{
		return (NULL);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	while (a < size)
	{
		p[a] = c;
		a++;
	}


	return (p);
}
