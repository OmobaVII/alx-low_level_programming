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

	a = 0;
	name_lenght = 1;
	owner_lenght = 1;

	for (a = 0; name[a] != '\0'; a++)
		name_lenght++;
	for (a = 0; owner[a] != '\0'; a++)
		owner_lenght++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(name_lenght * sizeof(new_dog->name));
	if (new_dog == NULL)
		return (NULL);
	for (a = 0; a < name_lenght; a++)
		new_dog->name[a] = name[a];

	new_dog->age = age;

	new_dog->owner = malloc(owner_lenght * sizeof(new_dog->owner));
	if (new_dog == NULL)
		return (NULL);
	for (a = 0; a < owner_lenght; a++)
		new_dog->owner[a] = owner[a];
	return (new_dog);

}
