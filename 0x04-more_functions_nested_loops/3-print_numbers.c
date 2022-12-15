#include "main.h"

/**
 * print_numbers - used to print numbers from 0-9.
 * Return: Always 0(success)
 */

void print_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
		_putchar((number % 10) + '0');
	_putchar('\n');
}
