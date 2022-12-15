#include "main.h"

/**
 * print_line - Prints a straight line in terminal
 * @n: number used to test
 * Return: always 0 (success)
 */

void print_line(int n)
{
	int lenght;

	if (n > 0)
	{
		for (lenght = 0; lenght < n; lenght++)
			_putchar('_');
	}
	_putchar('\n');
}
