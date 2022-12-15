#include "main.h"

/**
 * print_most_numbers - used to print numbers from 0-9.
 * Return: Always 0(success)
 */

void print_most_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		if (number != 2 && number != 4)
		_putchar((number % 10) + '0');
	}
	_putchar('\n');
}
