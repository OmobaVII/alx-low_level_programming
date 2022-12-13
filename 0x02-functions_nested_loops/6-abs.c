#include "main.h"

/**
 * _abs - used to print the absolute value of a number
 * @n: it is being used to check the code
 * Return: 0, -n, n
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);

	return (0);
}
