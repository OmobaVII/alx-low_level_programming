#include "main.h"

/**
 * more_numbers - used to print numbers from 0-9.
 * Return: Always 0(success)
 */

void more_numbers(void)
{
	int number, count;

	count = 0;

	while (count <= 9)

	{
		for (number = 0; number <= 14 ; number++)
		{
			if (number > 9)
				_putchar((number / 10) + '0');
			_putchar((number % 10) + '0');
		}
	_putchar('\n');
	count++;
	}
}
