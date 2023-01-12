#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function used to allocate memory for an array
 * @nmemb: the number of elements to be allocated for
 * @size: the size of the array
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int a;

	p = malloc(nmemb * size);
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		while (a < (nmemb * size))
		{
			p[a] = 0;
			a++;
		}
	}
	return (p);
}
