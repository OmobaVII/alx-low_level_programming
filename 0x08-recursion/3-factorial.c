#include "main.h"

/**
 * factorial - a funtion that returns the factorial of a given number
 * @n: the test number
 * Return: the factorial of the number
 */


int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (n);
	else
		return (n * factorial(n - 1));
}
