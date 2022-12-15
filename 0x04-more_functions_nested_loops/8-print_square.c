#include "main.h"

/**
 * print_square - used to print squares
 * @size: the size of the square
 * Return: always 0 (Success)
 */

void print_square(int size)
{
	int lenght, breath;

	if (size > 0)
	{
		for (lenght = 0; lenght < size; lenght++)
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
