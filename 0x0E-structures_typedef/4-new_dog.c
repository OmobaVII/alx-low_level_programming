#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - a function that creates a new funtion
 * @name: first element copied from the previous function
 * @age: second element of the new function
 * @owner: third element copied from the previous function
 * Return: new function
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int a, name_lenght, owner_lenght;
	dog_t *new_dog;

	name_lenght = 0;
	owner_lenght = 0;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	if (name != NULL && owner != NULL)
	{
		while (name[name_lenght++])
			;
		while (owner[owner_lenght++])
			;
		new_dog->name = malloc(name_lenght * sizeof(char));
		if (new_dog->name == NULL)
		{
			free(new_dog);
			return (NULL);
		}
		for (a = 0; a < name_lenght; a++)
			new_dog->name[a] = name[a];
		new_dog->owner = malloc(owner_lenght * sizeof(char));
		if (new_dog->owner == NULL)
		{
			free(new_dog->name);
			free(new_dog);
			return (NULL);
		}
		for (a = 0; a < owner_lenght; a++)
		{
			new_dog->owner[a] = owner[a];
		}
		new_dog->age = age;
	}

	return (new_dog);
}
