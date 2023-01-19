#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: total number of parameters
 * Return: the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a, sum;

	if (n <= 0)
	{
		return (0);
	}
	if (n > 0)
	{
		va_start(ap, n);

		sum = 0;

		for (a = 0; a < n; a++)
		{
			sum = sum + va_arg(ap, int);
		}
		va_end(ap);
		return (sum);
	}
	return (0);
}
