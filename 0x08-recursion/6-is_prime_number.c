#include "main.h"

/**
 * is_prime_number - used to return a value for a prime number
 * @n: number to check if it is a prime number
 * Return: 1 if n is prime and 0 if not
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n <= 3)
		return (1);
	return (integer(n, 2));
}

/**
 * prod - used to help the is_prime_number function
 * @x: number
 * @a: increases number and divisor
 * Return: number
 */

int prod(int x, int a)
{
	int product;

	product = a * a;
	if (product >= x)
		return (a);
	else
		return (prod(x, a + 1));
}

/**
 * integer - used to seperate the number to 0 to 9
 * @c: integer to be separated
 * @d: divisor
 * Return: value
 */

int integer(int c, int d)
{
	if (c % d == 0)
		return (0);
	else if (prod(c, 1) < d)
		return (1);
	else
		return (integer(c, d + 1));
}
