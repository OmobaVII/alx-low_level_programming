#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - a function that prints strings followed by a new line
 * @separator: what separates the strings printed
 * @n: the number of strings to be printed
 * Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int a;

	va_start(ap, n);

	for (a = 0; a < n; a++)
	{
		printf("%s", va_arg(ap, char*));

		if ((a < (n - 1)) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
}

