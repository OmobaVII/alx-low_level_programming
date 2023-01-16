#include "dog.h"
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog
 * @d: a pointer to the struct
 * Return: void

void print_dog(struct dog *d)
{
	if (d)
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age == 0)
	{
		printf("Age: (nil)\n");
	}
	{
		printf("Age: %f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	{
		printf("Owner: %s\n", d->owner);
	}
}
