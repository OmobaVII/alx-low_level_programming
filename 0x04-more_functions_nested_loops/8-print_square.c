#include "main.h"

/**
 * print_sqaure - used to print squares
 * Return: always 0 (Success)
 */

void print_square(int size)
{
	int lenght, breath;

	if (size > 0)
	{
		for (lenght = 0; lenght < size; breath++)
		{
			for (breath = 0; breath < size; breath++)
				_putchar('#');

			if (lenght == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
