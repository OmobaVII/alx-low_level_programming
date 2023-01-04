#include "main.h"

/**
 * _sqrt_recursion - function to return the sqaure root of a number
 * @n: number to find the square root of
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
		return (function(n, 1));
}

/**
 * function - function to used to help the squareroot function
 * @a: the sqaure of a num
 * @b: the number to square
 * Return: 0.
 */


int function(int a, int b)
{
	int square;

	square = b * b;
	if (square == a)
		return (b);
	else if (square < a)
		return (function(a, b + 1));
	else
		return (-1);
}
