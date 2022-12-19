#include "main.h"

/**
 * swap_int - used to swaps the values of two integers
 * @a: Used to show the swap
 * @b: second value to show the swap
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;

}
