#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - a function that creates a new funtion
 * @name: first element copied from the previous function
 * @age: second element of the new function
 * @owner: third element copied from the previous function
 * Return: new function
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned long int a;
	dog_t *new_dog;

	a = 0;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(strlen(name) * sizeof(new_dog->name));
	if (new_dog == NULL)
		return (NULL);
	while (a < strlen(name))
	{
		new_dog->name[a] = name[a];
		a++;
	}
	new_dog->age = age;
	a = 0;
	new_dog->owner = malloc(strlen(owner) * sizeof(new_dog->owner));
	if (new_dog == NULL)
		return (NULL);
	while (a < strlen(owner))
	{
		new_dog->owner[a] = owner[a];
		a++;
	}
	return (new_dog);

}
