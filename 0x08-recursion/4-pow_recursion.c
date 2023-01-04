#include "main.h"

/**
 * _pow_recursion - a funtion that returns the value of a num raised to a num
 * @x: the number to be raised
 * @y: the power which it is raised to
 * Return: the value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}
