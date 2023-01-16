#include "dog.h"
#include <stdlib.h>


/**
 * free_dog - a function that frees dogs
 * @d:dog to free
 * Return: Void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
