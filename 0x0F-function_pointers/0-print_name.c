#include "function_pointers.h"
#include "stdio.h"

/**
 * print_name - a pointer to a function
 * @name: a parameter of the function
 * @f: the function it is pointing to
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}

}
