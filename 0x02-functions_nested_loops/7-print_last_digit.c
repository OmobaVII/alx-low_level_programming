#include "main.h"

/**
 * print_last_digit - returns the value of the last digit
 * @a: integer argument
 * Return: the value of the last digit
 */
int print_last_digit(int a)
{
	if (a < 0)
		a *= -1;
	_putchar('0' + (a % 10));
	return (a % 10);
}
