#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - a function used to add 2 numbers
 * @a: First number to add
 * @b: Second number
 * Return: the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function used to subtract 2 numbers
 * @a: First number
 * @b: Second number
 * Return: the subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function used to multiply 2 numbers
 * @a: First number
 * @b: Second number
 * Return: the multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - a function used to divide 2 numbers
 * @a: First number
 * @b: Second number
 * Return: the division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - a function used to find the modulo of 2 numbers
 * @a: First number
 * @b: Second number
 * Return: the modulo
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
