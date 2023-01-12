#include "main.h"
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
	void *p = malloc(sizeof(b));
	if (b <= 0)
	{
		return (NULL);
	}
	if (p == NULL)
	{
		exit (98);
	}

	return (p);
}
