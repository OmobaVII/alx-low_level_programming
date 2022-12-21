#include "main.h"

/**
 * print_number - used to print an integer
 * @n: used as test integer
 * Return: void
 */

void print_number(int n)
{
	unsigned int a, b, counter, temp, place;

	a = n;
	place = b = 1;

	if (n < 0)
	{
		a = a * -1;
		_putchar('-');
	}
	temp = a;

	while (temp > 9)
	{
		b++;
		temp = temp / 10;
	}
	for (counter = 1; counter < b; counter++)
		place = place * 10;

	while (place > 1)
	{
		_putchar((a / place) % 10 + '0');
		place = place / 10;
	}
	_putchar(a % 10 + '0');
}
