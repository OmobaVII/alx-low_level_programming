#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function used to initialize a variable of type struct dog
 * @d: the returned struct
 * @name: the dog name
 * @age: the dog's age
 * @owner: the dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
