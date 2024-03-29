#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers followed by a new line
 * @separator: what separates the numbers printed
 * @n: the number of numbers to be printed
 * Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int a;

	va_start(ap, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(ap, int));

		if ((a < (n - 1)) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}

